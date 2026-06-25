/* Generated code for Python module 'requests$adapters'
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



/* The "module_requests$adapters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$adapters;
PyDictObject *moduledict_requests$adapters;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_InvalidSchema;
PyObject *const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_url;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_port;
PyObject *const_str_plain_connection_pool_kw;
PyObject *const_tuple_str_plain_ssl_context_tuple;
PyObject *const_str_plain__preloaded_ssl_context;
PyObject *const_str_plain_CERT_REQUIRED;
PyObject *const_str_plain_CERT_NONE;
PyObject *const_str_plain_ssl_context;
PyObject *const_str_plain_os;
PyObject *const_str_plain_ca_certs;
PyObject *const_str_plain_ca_cert_dir;
PyObject *const_str_plain_cert_reqs;
PyObject *const_str_plain_cert_file;
PyObject *const_str_plain_key_file;
PyObject *const_str_plain_host;
PyObject *const_str_plain_hostname;
PyObject *const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e;
PyObject *const_str_digest_689f43089124f06b15e9987dc8e6f0cd;
PyObject *const_str_plain_DEFAULT_RETRIES;
PyObject *const_str_plain_Retry;
PyObject *const_tuple_int_0_false_tuple;
PyObject *const_tuple_str_plain_read_tuple;
PyObject *const_str_plain_max_retries;
PyObject *const_str_plain_from_int;
PyObject *const_str_plain_config;
PyObject *const_str_plain_proxy_manager;
PyObject *const_str_plain__pool_connections;
PyObject *const_str_plain__pool_maxsize;
PyObject *const_str_plain__pool_block;
PyObject *const_str_plain_init_poolmanager;
PyObject *const_tuple_str_plain_block_tuple;
PyObject *const_str_plain___attrs__;
PyObject *const_str_plain_items;
PyObject *const_str_plain_PoolManager;
PyObject *const_str_plain_num_pools;
PyObject *const_str_plain_maxsize;
PyObject *const_str_plain_block;
PyObject *const_str_plain_poolmanager;
PyObject *const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_plain_socks_tuple;
PyObject *const_str_plain_get_auth_from_url;
PyObject *const_str_plain_SOCKSProxyManager;
PyObject *const_str_plain_username;
PyObject *const_str_plain_password;
PyObject *const_str_plain_proxy_headers;
PyObject *const_str_plain_proxy_from_url;
PyObject *const_str_digest_bfa093c614acefeadc8693bd26119f2c;
PyObject *const_tuple_str_plain_https_tuple;
PyObject *const_str_digest_37b76b29166d15e3ee17abcbbb9482e2;
PyObject *const_str_plain_basestring;
PyObject *const_str_digest_6837907b9b60cde5df9aa6230989268f;
PyObject *const_str_digest_354d5136022dc11cd135ed80872f76f4;
PyObject *const_str_digest_f0960f14478e5a2fef4fc81736af77be;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_status;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_CaseInsensitiveDict;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_get_encoding_from_headers;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_reason;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_extract_cookies_to_jar;
PyObject *const_str_plain_cookies;
PyObject *const_str_plain_request;
PyObject *const_str_plain_connection;
PyObject *const_str_digest_64ad7ce704a2035b2f3a90397c090ca7;
PyObject *const_str_plain__urllib3_request_context;
PyObject *const_str_digest_fc70d500cd9e3b9636f1d220bb53edd2;
PyObject *const_str_plain_select_proxy;
PyObject *const_str_plain_build_connection_pool_key_attributes;
PyObject *const_str_plain_InvalidURL;
PyObject *const_tuple_str_plain_request_tuple;
PyObject *const_str_plain_prepend_scheme_if_needed;
PyObject *const_str_plain_http;
PyObject *const_str_plain_parse_url;
PyObject *const_str_plain_InvalidProxyURL;
PyObject *const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple;
PyObject *const_str_plain_proxy_manager_for;
PyObject *const_str_plain_connection_from_host;
PyObject *const_str_plain_pool_kwargs;
PyObject *const_str_digest_dd0b53ddf647f77761c7bf199ddaa2fd;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_563140a5685c1a7bf93acc8183fc3d51;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_str_plain_connection_from_url;
PyObject *const_str_plain_geturl;
PyObject *const_str_digest_6a65f5010eb192e9c06f6704e1431f81;
PyObject *const_str_plain_clear;
PyObject *const_str_plain_values;
PyObject *const_str_digest_ab462680d0487f574012e6a7b3ea2cfd;
PyObject *const_str_plain_https;
PyObject *const_str_plain_path_url;
PyObject *const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple;
PyObject *const_str_plain_lstrip;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_str_plain_urldefragauth;
PyObject *const_str_digest_cf164d66984f410735aac772ffcc2043;
PyObject *const_str_plain__basic_auth_str;
PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
PyObject *const_str_digest_dbc92a2b5167052219bbed5a2180ad0b;
PyObject *const_str_plain_get_connection_with_tls_context;
PyObject *const_tuple_str_plain_proxies_str_plain_cert_tuple;
PyObject *const_str_plain_LocationValueError;
PyObject *const_str_plain_cert_verify;
PyObject *const_str_plain_request_url;
PyObject *const_str_plain_add_headers;
PyObject *const_tuple_3b182e7515c4beffcd20625e5b2f8cd9_tuple;
PyObject *const_str_plain_body;
PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
PyObject *const_str_plain_TimeoutSauce;
PyObject *const_tuple_str_plain_connect_str_plain_read_tuple;
PyObject *const_str_digest_491c852b1d42b29f6e6948f0318c4ce1;
PyObject *const_str_digest_8e8f188db4e04013fdcca3e4bb4a6c3e;
PyObject *const_str_plain_urlopen;
PyObject *const_str_plain_method;
PyObject *const_str_plain_timeout;
PyObject *const_tuple_7149c57201452e78b39f8baab8556489_tuple;
PyObject *const_str_plain_ProtocolError;
PyObject *const_str_plain_ConnectionError;
PyObject *const_str_plain_MaxRetryError;
PyObject *const_str_plain_ConnectTimeoutError;
PyObject *const_str_plain_NewConnectionError;
PyObject *const_str_plain_ConnectTimeout;
PyObject *const_str_plain_ResponseError;
PyObject *const_str_plain_RetryError;
PyObject *const_str_plain__ProxyError;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_plain__SSLError;
PyObject *const_str_plain_SSLError;
PyObject *const_str_plain_ClosedPoolError;
PyObject *const_str_plain__HTTPError;
PyObject *const_str_plain_ReadTimeoutError;
PyObject *const_str_plain_ReadTimeout;
PyObject *const_str_plain__InvalidHeader;
PyObject *const_str_plain_InvalidHeader;
PyObject *const_str_plain_build_response;
PyObject *const_str_digest_fff293e3e7fde90d706cca79c91fa423;
PyObject *const_str_digest_872a4356679d08f82ae72f066772d944;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
PyObject *const_tuple_str_plain_ClosedPoolError_str_plain_ConnectTimeoutError_tuple;
PyObject *const_tuple_str_plain_HTTPError_tuple;
PyObject *const_str_plain_HTTPError;
PyObject *const_tuple_str_plain_InvalidHeader_tuple;
PyObject *const_tuple_fb57c173311f35b536ea321b5229cd99_tuple;
PyObject *const_tuple_str_plain_ProxyError_tuple;
PyObject *const_tuple_str_plain_ReadTimeoutError_str_plain_ResponseError_tuple;
PyObject *const_tuple_str_plain_SSLError_tuple;
PyObject *const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
PyObject *const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
PyObject *const_tuple_str_plain_Timeout_tuple;
PyObject *const_str_plain_Timeout;
PyObject *const_tuple_str_plain_parse_url_tuple;
PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
PyObject *const_tuple_str_plain_Retry_tuple;
PyObject *const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
PyObject *const_tuple_str_plain_create_urllib3_context_tuple;
PyObject *const_str_plain_create_urllib3_context;
PyObject *const_str_plain_auth;
PyObject *const_tuple_str_plain__basic_auth_str_tuple;
PyObject *const_str_plain_compat;
PyObject *const_tuple_str_plain_basestring_str_plain_urlparse_tuple;
PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_74ab1cdfde183427e481177c0892bacc_tuple;
PyObject *const_str_plain_models;
PyObject *const_tuple_str_plain_Response_tuple;
PyObject *const_str_plain_structures;
PyObject *const_tuple_str_plain_CaseInsensitiveDict_tuple;
PyObject *const_str_plain_utils;
PyObject *const_tuple_cf6d9bf16affaa52981417e396a0cf83_tuple;
PyObject *const_str_plain_DEFAULT_CA_BUNDLE_PATH;
PyObject *const_str_plain_extract_zipped_paths;
PyObject *const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
PyObject *const_tuple_str_plain_SOCKSProxyManager_tuple;
PyObject *const_str_plain_DEFAULT_POOLBLOCK;
PyObject *const_int_pos_10;
PyObject *const_str_plain_DEFAULT_POOLSIZE;
PyObject *const_str_plain_DEFAULT_POOL_TIMEOUT;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_load_verify_locations;
PyObject *const_dict_e458ea6e5114dd7edf980707d729f425;
PyObject *const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
PyObject *const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
PyObject *const_str_plain_BaseAdapter;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_137;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_58d849cc27a8bb92406c0789468590b3;
PyObject *const_tuple_false_none_true_none_none_tuple;
PyObject *const_str_digest_46268be1785799fb5b96bebc078469e2;
PyObject *const_str_digest_c2c00751ef6093a3f812bf922a66511f;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_HTTPAdapter;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_19fdcf2df08a408493d23f0c1c422714;
PyObject *const_int_pos_167;
PyObject *const_list_b210aeadbd087eaaf628d5f4d13acd25_list;
PyObject *const_str_digest_afe1e7d238142b45d91be75903c1f969;
PyObject *const_str_plain___getstate__;
PyObject *const_str_digest_075bd0c67293e615df9afdc934c155c9;
PyObject *const_str_plain___setstate__;
PyObject *const_str_digest_2bdec81ec502026c4a660b15852a5925;
PyObject *const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc;
PyObject *const_str_digest_e5209e5e03de97a661af697c02841e7a;
PyObject *const_str_digest_94f8254fa141c33ed65ea27f59ed9d62;
PyObject *const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_60d73be6981b4a412bfa703f4dbb9cb7;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_digest_e6d4030088215baa9393b629c293b48d;
PyObject *const_str_plain_get_connection;
PyObject *const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3;
PyObject *const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f;
PyObject *const_str_digest_d9e923e371e62d15476d82fc18912a89;
PyObject *const_str_digest_0e90a733b836dccf8b7d0124401998c8;
PyObject *const_str_digest_3d43a254760496216c28528a54f67ae7;
PyObject *const_str_digest_bb4ba86a57b66cae0a694169c648e9c1;
PyObject *const_str_digest_8eda945652fc1bca806aa3da22ec6fa8;
PyObject *const_tuple_d10ab4595070c929dbe860a3df229320_tuple;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_ce85bdb9958f04a3e7cbc9195bee2aba;
PyObject *const_str_digest_a72d819fa9b462ca35152a67acf9f95b;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_6cdb677ec4584549230d89c8e343b130_tuple;
PyObject *const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple;
PyObject *const_tuple_184b1ce3eea7a9c1515c15a74c3ffd7f_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple;
PyObject *const_tuple_f6940365a30566d6f085c73c3d7c190f_tuple;
PyObject *const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple;
PyObject *const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple;
PyObject *const_tuple_str_plain_self_str_plain_proxy_tuple;
PyObject *const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple;
PyObject *const_tuple_0fbd75fc9777c4dd5426454524457683_tuple;
PyObject *const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple;
PyObject *const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple;
PyObject *const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple;
PyObject *const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple;
PyObject *const_tuple_bd356f6cf3258844d460b87e1636571d_tuple;
PyObject *const_tuple_8f73487cf0fa7a6c4f13f39aa14a2f87_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[259];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests.adapters"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchema);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool_kw);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_context_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__preloaded_ssl_context);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_REQUIRED);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_NONE);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_ca_certs);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ca_cert_dir);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_reqs);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_file);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_file);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_689f43089124f06b15e9987dc8e6f0cd);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRIES);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_Retry);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_false_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_int);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_manager);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__pool_connections);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__pool_maxsize);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__pool_block);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_init_poolmanager);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_block_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___attrs__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolManager);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_pools);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxsize);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_block);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_poolmanager);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socks_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_from_url);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKSProxyManager);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_username);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_password);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_headers);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_from_url);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfa093c614acefeadc8693bd26119f2c);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_https_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_37b76b29166d15e3ee17abcbbb9482e2);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_basestring);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_6837907b9b60cde5df9aa6230989268f);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_354d5136022dc11cd135ed80872f76f4);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0960f14478e5a2fef4fc81736af77be);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_CaseInsensitiveDict);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_encoding_from_headers);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookies);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_64ad7ce704a2035b2f3a90397c090ca7);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__urllib3_request_context);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc70d500cd9e3b9636f1d220bb53edd2);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_select_proxy);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_connection_pool_key_attributes);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_prepend_scheme_if_needed);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_http);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_url);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyURL);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_manager_for);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_host);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_pool_kwargs);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd0b53ddf647f77761c7bf199ddaa2fd);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_563140a5685c1a7bf93acc8183fc3d51);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_url);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_geturl);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a65f5010eb192e9c06f6704e1431f81);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab462680d0487f574012e6a7b3ea2cfd);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_https);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_path_url);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_urldefragauth);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf164d66984f410735aac772ffcc2043);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__basic_auth_str);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbc92a2b5167052219bbed5a2180ad0b);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_connection_with_tls_context);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_proxies_str_plain_cert_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocationValueError);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_verify);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_url);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_headers);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_3b182e7515c4beffcd20625e5b2f8cd9_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutSauce);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_str_plain_read_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_491c852b1d42b29f6e6948f0318c4ce1);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e8f188db4e04013fdcca3e4bb4a6c3e);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_7149c57201452e78b39f8baab8556489_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaxRetryError);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeoutError);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_NewConnectionError);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_RetryError);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain__ProxyError);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain__SSLError);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClosedPoolError);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain__HTTPError);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeoutError);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain__InvalidHeader);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_response);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_fff293e3e7fde90d706cca79c91fa423);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_872a4356679d08f82ae72f066772d944);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_e399ba4554180f37de594a6743234f17);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClosedPoolError_str_plain_ConnectTimeoutError_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPError_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidHeader_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_fb57c173311f35b536ea321b5229cd99_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxyError_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReadTimeoutError_str_plain_ResponseError_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SSLError_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_867cf107290997ea3f46e9cff397e1db);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Timeout_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parse_url_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Retry_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_6efba4feba5d3ac1fc26ca13b212a604);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_urllib3_context_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_urllib3_context);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__basic_auth_str_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_compat);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_basestring_str_plain_urlparse_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_74ab1cdfde183427e481177c0892bacc_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_models);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Response_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_structures);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CaseInsensitiveDict_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_cf6d9bf16affaa52981417e396a0cf83_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_zipped_paths);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0cac7c67d1189a986b25b7cf105347d);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SOCKSProxyManager_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_POOLSIZE);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_POOL_TIMEOUT);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_verify_locations);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_e458ea6e5114dd7edf980707d729f425);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_a634c3a07d79eddfe1581301d16e55a1);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseAdapter);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_137);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_58d849cc27a8bb92406c0789468590b3);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_false_none_true_none_none_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_46268be1785799fb5b96bebc078469e2);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2c00751ef6093a3f812bf922a66511f);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPAdapter);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_19fdcf2df08a408493d23f0c1c422714);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_int_pos_167);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_list_b210aeadbd087eaaf628d5f4d13acd25_list);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_afe1e7d238142b45d91be75903c1f969);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_075bd0c67293e615df9afdc934c155c9);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bdec81ec502026c4a660b15852a5925);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5209e5e03de97a661af697c02841e7a);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_94f8254fa141c33ed65ea27f59ed9d62);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_60d73be6981b4a412bfa703f4dbb9cb7);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6d4030088215baa9393b629c293b48d);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_connection);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9e923e371e62d15476d82fc18912a89);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e90a733b836dccf8b7d0124401998c8);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d43a254760496216c28528a54f67ae7);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb4ba86a57b66cae0a694169c648e9c1);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_digest_8eda945652fc1bca806aa3da22ec6fa8);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_d10ab4595070c929dbe860a3df229320_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce85bdb9958f04a3e7cbc9195bee2aba);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_digest_a72d819fa9b462ca35152a67acf9f95b);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_kwargs_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_6cdb677ec4584549230d89c8e343b130_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_184b1ce3eea7a9c1515c15a74c3ffd7f_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_f6940365a30566d6f085c73c3d7c190f_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_proxy_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_0fbd75fc9777c4dd5426454524457683_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_bd356f6cf3258844d460b87e1636571d_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_8f73487cf0fa7a6c4f13f39aa14a2f87_tuple);
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
void checkModuleConstants_requests$adapters(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidSchema);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool_kw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection_pool_kw);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ssl_context_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__preloaded_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__preloaded_ssl_context);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CERT_REQUIRED);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_NONE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CERT_NONE);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl_context);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_ca_certs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ca_certs);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ca_cert_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ca_cert_dir);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_reqs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_reqs);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_file);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_file);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hostname);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_689f43089124f06b15e9987dc8e6f0cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_689f43089124f06b15e9987dc8e6f0cd);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_RETRIES);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_Retry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Retry);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_false_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_read_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_retries);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_int);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_manager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proxy_manager);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__pool_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pool_connections);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__pool_maxsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pool_maxsize);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__pool_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pool_block);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_init_poolmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_init_poolmanager);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_block_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_block_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___attrs__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___attrs__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolManager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PoolManager);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_pools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_num_pools);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxsize);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_poolmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poolmanager);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socks_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_socks_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_from_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_auth_from_url);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKSProxyManager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKSProxyManager);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_username));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_username);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_password);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proxy_headers);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_from_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proxy_from_url);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfa093c614acefeadc8693bd26119f2c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfa093c614acefeadc8693bd26119f2c);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_https_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_https_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_37b76b29166d15e3ee17abcbbb9482e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37b76b29166d15e3ee17abcbbb9482e2);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_basestring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_basestring);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_6837907b9b60cde5df9aa6230989268f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6837907b9b60cde5df9aa6230989268f);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_354d5136022dc11cd135ed80872f76f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_354d5136022dc11cd135ed80872f76f4);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0960f14478e5a2fef4fc81736af77be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0960f14478e5a2fef4fc81736af77be);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_CaseInsensitiveDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CaseInsensitiveDict);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_encoding_from_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_encoding_from_headers);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_cookies_to_jar);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookies));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cookies);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_64ad7ce704a2035b2f3a90397c090ca7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64ad7ce704a2035b2f3a90397c090ca7);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__urllib3_request_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__urllib3_request_context);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc70d500cd9e3b9636f1d220bb53edd2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc70d500cd9e3b9636f1d220bb53edd2);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_select_proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_select_proxy);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_connection_pool_key_attributes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build_connection_pool_key_attributes);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidURL);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_prepend_scheme_if_needed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prepend_scheme_if_needed);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_http));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_url);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidProxyURL);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_manager_for));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proxy_manager_for);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection_from_host);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_pool_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pool_kwargs);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd0b53ddf647f77761c7bf199ddaa2fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd0b53ddf647f77761c7bf199ddaa2fd);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_563140a5685c1a7bf93acc8183fc3d51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_563140a5685c1a7bf93acc8183fc3d51);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection_from_url);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_geturl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_geturl);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a65f5010eb192e9c06f6704e1431f81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a65f5010eb192e9c06f6704e1431f81);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab462680d0487f574012e6a7b3ea2cfd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab462680d0487f574012e6a7b3ea2cfd);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_https));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_https);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_path_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_path_url);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lstrip);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_urldefragauth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urldefragauth);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf164d66984f410735aac772ffcc2043));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf164d66984f410735aac772ffcc2043);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__basic_auth_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__basic_auth_str);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbc92a2b5167052219bbed5a2180ad0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbc92a2b5167052219bbed5a2180ad0b);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_connection_with_tls_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_connection_with_tls_context);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_proxies_str_plain_cert_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_proxies_str_plain_cert_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocationValueError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocationValueError);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_verify);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_url);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_headers);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_3b182e7515c4beffcd20625e5b2f8cd9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3b182e7515c4beffcd20625e5b2f8cd9_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutSauce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutSauce);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_str_plain_read_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_connect_str_plain_read_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_491c852b1d42b29f6e6948f0318c4ce1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_491c852b1d42b29f6e6948f0318c4ce1);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e8f188db4e04013fdcca3e4bb4a6c3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e8f188db4e04013fdcca3e4bb4a6c3e);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlopen);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_7149c57201452e78b39f8baab8556489_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7149c57201452e78b39f8baab8556489_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionError);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaxRetryError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MaxRetryError);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeoutError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectTimeoutError);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_NewConnectionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NewConnectionError);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectTimeout);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseError);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_RetryError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RetryError);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain__ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ProxyError);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain__SSLError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SSLError);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSLError);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClosedPoolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClosedPoolError);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain__HTTPError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HTTPError);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeoutError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadTimeoutError);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadTimeout);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain__InvalidHeader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__InvalidHeader);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidHeader);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build_response);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_fff293e3e7fde90d706cca79c91fa423));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fff293e3e7fde90d706cca79c91fa423);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_872a4356679d08f82ae72f066772d944));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_872a4356679d08f82ae72f066772d944);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_e399ba4554180f37de594a6743234f17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e399ba4554180f37de594a6743234f17);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socket);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClosedPoolError_str_plain_ConnectTimeoutError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClosedPoolError_str_plain_ConnectTimeoutError_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HTTPError_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPError);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidHeader_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InvalidHeader_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_fb57c173311f35b536ea321b5229cd99_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fb57c173311f35b536ea321b5229cd99_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxyError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ProxyError_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReadTimeoutError_str_plain_ResponseError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReadTimeoutError_str_plain_ResponseError_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SSLError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SSLError_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_867cf107290997ea3f46e9cff397e1db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_867cf107290997ea3f46e9cff397e1db);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Timeout_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parse_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parse_url_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Retry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Retry_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_6efba4feba5d3ac1fc26ca13b212a604));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6efba4feba5d3ac1fc26ca13b212a604);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_urllib3_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_create_urllib3_context_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_urllib3_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_urllib3_context);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__basic_auth_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__basic_auth_str_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compat);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_basestring_str_plain_urlparse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_basestring_str_plain_urlparse_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_74ab1cdfde183427e481177c0892bacc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_74ab1cdfde183427e481177c0892bacc_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_models);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Response_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_structures));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_structures);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CaseInsensitiveDict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CaseInsensitiveDict_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utils);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_cf6d9bf16affaa52981417e396a0cf83_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cf6d9bf16affaa52981417e396a0cf83_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_zipped_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_zipped_paths);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0cac7c67d1189a986b25b7cf105347d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0cac7c67d1189a986b25b7cf105347d);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SOCKSProxyManager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SOCKSProxyManager_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_POOLBLOCK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_POOLSIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_POOLSIZE);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_POOL_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_POOL_TIMEOUT);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_verify_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_verify_locations);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_e458ea6e5114dd7edf980707d729f425));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e458ea6e5114dd7edf980707d729f425);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_a634c3a07d79eddfe1581301d16e55a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a634c3a07d79eddfe1581301d16e55a1);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseAdapter);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_137));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_137);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_58d849cc27a8bb92406c0789468590b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58d849cc27a8bb92406c0789468590b3);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_false_none_true_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_none_true_none_none_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_46268be1785799fb5b96bebc078469e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46268be1785799fb5b96bebc078469e2);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2c00751ef6093a3f812bf922a66511f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2c00751ef6093a3f812bf922a66511f);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPAdapter);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_19fdcf2df08a408493d23f0c1c422714));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19fdcf2df08a408493d23f0c1c422714);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_int_pos_167));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_167);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_list_b210aeadbd087eaaf628d5f4d13acd25_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_b210aeadbd087eaaf628d5f4d13acd25_list);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_afe1e7d238142b45d91be75903c1f969));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afe1e7d238142b45d91be75903c1f969);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getstate__);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_075bd0c67293e615df9afdc934c155c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_075bd0c67293e615df9afdc934c155c9);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setstate__);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bdec81ec502026c4a660b15852a5925));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bdec81ec502026c4a660b15852a5925);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5209e5e03de97a661af697c02841e7a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5209e5e03de97a661af697c02841e7a);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_94f8254fa141c33ed65ea27f59ed9d62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94f8254fa141c33ed65ea27f59ed9d62);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_60d73be6981b4a412bfa703f4dbb9cb7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60d73be6981b4a412bfa703f4dbb9cb7);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6d4030088215baa9393b629c293b48d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6d4030088215baa9393b629c293b48d);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_connection);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9e923e371e62d15476d82fc18912a89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9e923e371e62d15476d82fc18912a89);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e90a733b836dccf8b7d0124401998c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e90a733b836dccf8b7d0124401998c8);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d43a254760496216c28528a54f67ae7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d43a254760496216c28528a54f67ae7);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb4ba86a57b66cae0a694169c648e9c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb4ba86a57b66cae0a694169c648e9c1);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_digest_8eda945652fc1bca806aa3da22ec6fa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8eda945652fc1bca806aa3da22ec6fa8);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_d10ab4595070c929dbe860a3df229320_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d10ab4595070c929dbe860a3df229320_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce85bdb9958f04a3e7cbc9195bee2aba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce85bdb9958f04a3e7cbc9195bee2aba);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_digest_a72d819fa9b462ca35152a67acf9f95b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a72d819fa9b462ca35152a67acf9f95b);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_kwargs_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_6cdb677ec4584549230d89c8e343b130_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6cdb677ec4584549230d89c8e343b130_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_184b1ce3eea7a9c1515c15a74c3ffd7f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_184b1ce3eea7a9c1515c15a74c3ffd7f_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_f6940365a30566d6f085c73c3d7c190f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f6940365a30566d6f085c73c3d7c190f_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_proxy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_proxy_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_0fbd75fc9777c4dd5426454524457683_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0fbd75fc9777c4dd5426454524457683_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_bd356f6cf3258844d460b87e1636571d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bd356f6cf3258844d460b87e1636571d_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_8f73487cf0fa7a6c4f13f39aa14a2f87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f73487cf0fa7a6c4f13f39aa14a2f87_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 52
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
static PyObject *module_var_accessor_requests$adapters$BaseAdapter(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAdapter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseAdapter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseAdapter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseAdapter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseAdapter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAdapter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAdapter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAdapter);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$CaseInsensitiveDict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_CaseInsensitiveDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CaseInsensitiveDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CaseInsensitiveDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CaseInsensitiveDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CaseInsensitiveDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_CaseInsensitiveDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_CaseInsensitiveDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CaseInsensitiveDict);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ClosedPoolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ClosedPoolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClosedPoolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClosedPoolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClosedPoolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClosedPoolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ClosedPoolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ClosedPoolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClosedPoolError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ConnectTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectTimeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectTimeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectTimeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectTimeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ConnectTimeoutError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectTimeoutError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectTimeoutError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectTimeoutError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectTimeoutError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ConnectionError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$DEFAULT_CA_BUNDLE_PATH(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$DEFAULT_POOLBLOCK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_POOLBLOCK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_POOLBLOCK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$DEFAULT_POOLSIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLSIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_POOLSIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_POOLSIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_POOLSIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_POOLSIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLSIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLSIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLSIZE);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$DEFAULT_RETRIES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RETRIES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_RETRIES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_RETRIES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_RETRIES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_RETRIES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RETRIES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RETRIES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RETRIES);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$InvalidHeader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHeader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHeader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHeader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHeader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$InvalidProxyURL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyURL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidProxyURL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidProxyURL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidProxyURL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidProxyURL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyURL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyURL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyURL);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$InvalidSchema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidSchema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidSchema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidSchema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidSchema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchema);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$InvalidURL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$LocationValueError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocationValueError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocationValueError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocationValueError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocationValueError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$MaxRetryError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxRetryError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxRetryError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxRetryError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxRetryError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$NewConnectionError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_NewConnectionError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NewConnectionError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NewConnectionError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NewConnectionError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NewConnectionError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_NewConnectionError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_NewConnectionError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NewConnectionError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$PoolManager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolManager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolManager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolManager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolManager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ProxyError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ReadTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadTimeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadTimeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadTimeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadTimeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ReadTimeoutError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadTimeoutError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadTimeoutError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadTimeoutError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadTimeoutError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$ResponseError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$Retry(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Retry);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Retry, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Retry);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Retry, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$RetryError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_RetryError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RetryError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RetryError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RetryError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RetryError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_RetryError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_RetryError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RetryError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$SOCKSProxyManager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKSProxyManager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SOCKSProxyManager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SOCKSProxyManager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SOCKSProxyManager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SOCKSProxyManager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKSProxyManager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKSProxyManager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKSProxyManager);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$SSLError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$TimeoutSauce(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutSauce);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutSauce);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutSauce, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutSauce);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutSauce, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutSauce);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutSauce);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutSauce);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$_HTTPError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__HTTPError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HTTPError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HTTPError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HTTPError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HTTPError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__HTTPError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__HTTPError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HTTPError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$_InvalidHeader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__InvalidHeader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__InvalidHeader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__InvalidHeader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__InvalidHeader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__InvalidHeader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__InvalidHeader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__InvalidHeader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__InvalidHeader);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$_ProxyError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__ProxyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ProxyError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ProxyError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ProxyError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ProxyError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__ProxyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__ProxyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ProxyError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$_SSLError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__SSLError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SSLError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SSLError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SSLError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SSLError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__SSLError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__SSLError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SSLError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$_basic_auth_str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__basic_auth_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__basic_auth_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__basic_auth_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__basic_auth_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$_preloaded_ssl_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__preloaded_ssl_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__preloaded_ssl_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__preloaded_ssl_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__preloaded_ssl_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__preloaded_ssl_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__preloaded_ssl_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__preloaded_ssl_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__preloaded_ssl_context);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$_urllib3_request_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__urllib3_request_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__urllib3_request_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__urllib3_request_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__urllib3_request_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__urllib3_request_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__urllib3_request_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__urllib3_request_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__urllib3_request_context);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$basestring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_basestring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_basestring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_basestring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_basestring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$create_urllib3_context(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$extract_cookies_to_jar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_cookies_to_jar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_cookies_to_jar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_cookies_to_jar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_cookies_to_jar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$extract_zipped_paths(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_zipped_paths);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_zipped_paths);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_zipped_paths, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_zipped_paths);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_zipped_paths, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_zipped_paths);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_zipped_paths);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_zipped_paths);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$get_auth_from_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_auth_from_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_auth_from_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_auth_from_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_auth_from_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_auth_from_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_auth_from_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_auth_from_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_auth_from_url);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$get_encoding_from_headers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_encoding_from_headers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_encoding_from_headers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_encoding_from_headers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_encoding_from_headers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_encoding_from_headers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_encoding_from_headers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_encoding_from_headers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_encoding_from_headers);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$os(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_os);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_os);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_os, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_os);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_os, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_os);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_os);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_os);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$parse_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$prepend_scheme_if_needed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_prepend_scheme_if_needed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_prepend_scheme_if_needed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_prepend_scheme_if_needed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_prepend_scheme_if_needed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_prepend_scheme_if_needed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_prepend_scheme_if_needed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_prepend_scheme_if_needed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_prepend_scheme_if_needed);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$proxy_from_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_from_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_proxy_from_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_proxy_from_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_proxy_from_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_proxy_from_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_from_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_from_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_from_url);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$select_proxy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_select_proxy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_select_proxy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_select_proxy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_select_proxy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_select_proxy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_select_proxy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_select_proxy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_select_proxy);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$urldefragauth(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urldefragauth);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urldefragauth);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urldefragauth, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urldefragauth);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urldefragauth, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urldefragauth);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urldefragauth);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urldefragauth);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }

    return result;
}

static PyObject *module_var_accessor_requests$adapters$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$adapters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$adapters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$adapters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_80f55e8a0c761011340eb536c08a8054;
static PyCodeObject *code_objects_cdca29450073120f89c2e4394585917f;
static PyCodeObject *code_objects_357a53e03988e9c92be58206ab92fd9b;
static PyCodeObject *code_objects_6469f5447c0b5e9456cea7d56823ce2e;
static PyCodeObject *code_objects_806f9e09b5256a226d8cd8b05c789430;
static PyCodeObject *code_objects_cf6b1c7f81440ace81fb5e9aa1038286;
static PyCodeObject *code_objects_71619ec53f2fda1df02ca12edeab5539;
static PyCodeObject *code_objects_d39e12c0d373727865750beda4013629;
static PyCodeObject *code_objects_7bedcb34cc2a18886dd934dd5620205e;
static PyCodeObject *code_objects_23d6d14ebe39f4f4551e34f3cf9a8782;
static PyCodeObject *code_objects_750f76332a61b81f01ca363b48c7ce97;
static PyCodeObject *code_objects_891879225e2de14371d0c1c5b7c86a35;
static PyCodeObject *code_objects_0889131b5e1461b70b4c4e1bcc5cd2e6;
static PyCodeObject *code_objects_ed4e6fc619321b000c440666f63627d9;
static PyCodeObject *code_objects_451432b54629ac2a89da6c993d499589;
static PyCodeObject *code_objects_570ee653490ab0c86933d43717980f2d;
static PyCodeObject *code_objects_edcc9d2027b8f3da2aac0ff3e6e466d0;
static PyCodeObject *code_objects_e0c9593b7938c9cc59edda809578dc0e;
static PyCodeObject *code_objects_6afdbd10e676a2e6a4d824614f39cdad;
static PyCodeObject *code_objects_57a0eec6006546c5be34b428a4997961;
static PyCodeObject *code_objects_42fff0e8769ed054c610469942e093db;
static PyCodeObject *code_objects_88969b0051d1275021ab1d5bf42ec826;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ce85bdb9958f04a3e7cbc9195bee2aba); CHECK_OBJECT(module_filename_obj);
code_objects_80f55e8a0c761011340eb536c08a8054 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a72d819fa9b462ca35152a67acf9f95b, mod_consts.const_str_digest_a72d819fa9b462ca35152a67acf9f95b, NULL, NULL, 0, 0, 0);
code_objects_cdca29450073120f89c2e4394585917f = MAKE_CODE_OBJECT(module_filename_obj, 167, 0, mod_consts.const_str_plain_HTTPAdapter, mod_consts.const_str_plain_HTTPAdapter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_357a53e03988e9c92be58206ab92fd9b = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_SOCKSProxyManager, mod_consts.const_str_plain_SOCKSProxyManager, mod_consts.const_tuple_str_plain_args_str_plain_kwargs_tuple, NULL, 0, 0, 0);
code_objects_6469f5447c0b5e9456cea7d56823ce2e = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getstate__, mod_consts.const_str_digest_075bd0c67293e615df9afdc934c155c9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_806f9e09b5256a226d8cd8b05c789430 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_58d849cc27a8bb92406c0789468590b3, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_cf6b1c7f81440ace81fb5e9aa1038286 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_afe1e7d238142b45d91be75903c1f969, mod_consts.const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, mod_consts.const_tuple_str_plain___class___tuple, 5, 0, 0);
code_objects_71619ec53f2fda1df02ca12edeab5539 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setstate__, mod_consts.const_str_digest_2bdec81ec502026c4a660b15852a5925, mod_consts.const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple, NULL, 2, 0, 0);
code_objects_d39e12c0d373727865750beda4013629 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__urllib3_request_context, mod_consts.const_str_plain__urllib3_request_context, mod_consts.const_tuple_184b1ce3eea7a9c1515c15a74c3ffd7f_tuple, NULL, 4, 0, 0);
code_objects_7bedcb34cc2a18886dd934dd5620205e = MAKE_CODE_OBJECT(module_filename_obj, 578, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_add_headers, mod_consts.const_str_digest_3d43a254760496216c28528a54f67ae7, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_23d6d14ebe39f4f4551e34f3cf9a8782 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_build_connection_pool_key_attributes, mod_consts.const_str_digest_60d73be6981b4a412bfa703f4dbb9cb7, mod_consts.const_tuple_f6940365a30566d6f085c73c3d7c190f_tuple, NULL, 4, 0, 0);
code_objects_750f76332a61b81f01ca363b48c7ce97 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_build_response, mod_consts.const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9, mod_consts.const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, NULL, 3, 0, 0);
code_objects_891879225e2de14371d0c1c5b7c86a35 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cert_verify, mod_consts.const_str_digest_94f8254fa141c33ed65ea27f59ed9d62, mod_consts.const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, NULL, 5, 0, 0);
code_objects_0889131b5e1461b70b4c4e1bcc5cd2e6 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_c2c00751ef6093a3f812bf922a66511f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ed4e6fc619321b000c440666f63627d9 = MAKE_CODE_OBJECT(module_filename_obj, 536, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f, mod_consts.const_tuple_str_plain_self_str_plain_proxy_tuple, NULL, 1, 0, 0);
code_objects_451432b54629ac2a89da6c993d499589 = MAKE_CODE_OBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_connection, mod_consts.const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3, mod_consts.const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, NULL, 3, 0, 0);
code_objects_570ee653490ab0c86933d43717980f2d = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_connection_with_tls_context, mod_consts.const_str_digest_e6d4030088215baa9393b629c293b48d, mod_consts.const_tuple_0fbd75fc9777c4dd5426454524457683_tuple, NULL, 5, 0, 0);
code_objects_edcc9d2027b8f3da2aac0ff3e6e466d0 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_init_poolmanager, mod_consts.const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc, mod_consts.const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, NULL, 4, 0, 0);
code_objects_e0c9593b7938c9cc59edda809578dc0e = MAKE_CODE_OBJECT(module_filename_obj, 592, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_proxy_headers, mod_consts.const_str_digest_bb4ba86a57b66cae0a694169c648e9c1, mod_consts.const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, NULL, 2, 0, 0);
code_objects_6afdbd10e676a2e6a4d824614f39cdad = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_proxy_manager_for, mod_consts.const_str_digest_e5209e5e03de97a661af697c02841e7a, mod_consts.const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, NULL, 2, 0, 0);
code_objects_57a0eec6006546c5be34b428a4997961 = MAKE_CODE_OBJECT(module_filename_obj, 546, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_request_url, mod_consts.const_str_digest_d9e923e371e62d15476d82fc18912a89, mod_consts.const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, NULL, 3, 0, 0);
code_objects_42fff0e8769ed054c610469942e093db = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_send, mod_consts.const_str_digest_46268be1785799fb5b96bebc078469e2, mod_consts.const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, NULL, 7, 0, 0);
code_objects_88969b0051d1275021ab1d5bf42ec826 = MAKE_CODE_OBJECT(module_filename_obj, 613, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_send, mod_consts.const_str_digest_8eda945652fc1bca806aa3da22ec6fa8, mod_consts.const_tuple_8f73487cf0fa7a6c4f13f39aa14a2f87_tuple, NULL, 7, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__10_proxy_manager_for(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__11_cert_verify(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__12_build_response(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__13_build_connection_pool_key_attributes(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__14_get_connection_with_tls_context(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__15_get_connection(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__16_close(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__17_request_url(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__18_add_headers(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__19_proxy_headers(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__1_SOCKSProxyManager(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__20_send(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__2__urllib3_request_context(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__3___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__4_send(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__5_close(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__7___getstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__8___setstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function__9_init_poolmanager(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_requests$adapters$$$function__1_SOCKSProxyManager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *par_kwargs = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__1_SOCKSProxyManager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager = MAKE_FUNCTION_FRAME(tstate, code_objects_357a53e03988e9c92be58206ab92fd9b, module_requests$adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager->m_type_description == NULL);
frame_frame_requests$adapters$$$function__1_SOCKSProxyManager = cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__1_SOCKSProxyManager);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__1_SOCKSProxyManager) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_requests$adapters$InvalidSchema(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidSchema);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__1_SOCKSProxyManager->m_frame.f_lineno = 64;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__1_SOCKSProxyManager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__1_SOCKSProxyManager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__1_SOCKSProxyManager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__1_SOCKSProxyManager,
    type_description_1,
    par_args,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__1_SOCKSProxyManager == cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager);
    cache_frame_frame_requests$adapters$$$function__1_SOCKSProxyManager = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__1_SOCKSProxyManager);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_requests$adapters$$$function__2__urllib3_request_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_verify = python_pars[1];
PyObject *par_client_cert = python_pars[2];
PyObject *par_poolmanager = python_pars[3];
PyObject *var_host_params = NULL;
PyObject *var_pool_kwargs = NULL;
PyObject *var_parsed_request_url = NULL;
PyObject *var_scheme = NULL;
PyObject *var_port = NULL;
PyObject *var_poolmanager_kwargs = NULL;
PyObject *var_has_poolmanager_ssl_context = NULL;
PyObject *var_should_use_default_ssl_context = NULL;
PyObject *var_cert_reqs = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__2__urllib3_request_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_pool_kwargs == NULL);
var_pool_kwargs = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context = MAKE_FUNCTION_FRAME(tstate, code_objects_d39e12c0d373727865750beda4013629, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context->m_type_description == NULL);
frame_frame_requests$adapters$$$function__2__urllib3_request_context = cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__2__urllib3_request_context);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__2__urllib3_request_context) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_requests$adapters$urlparse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_1 = par_request;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_url);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__2__urllib3_request_context->m_frame.f_lineno = 98;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed_request_url == NULL);
var_parsed_request_url = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_parsed_request_url);
tmp_expression_value_3 = var_parsed_request_url;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_scheme);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__2__urllib3_request_context->m_frame.f_lineno = 99;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_scheme == NULL);
var_scheme = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_parsed_request_url);
tmp_expression_value_4 = var_parsed_request_url;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_port);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_port == NULL);
var_port = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_poolmanager);
tmp_expression_value_5 = par_poolmanager;
tmp_name_value_1 = mod_consts.const_str_plain_connection_pool_kw;
tmp_default_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_poolmanager_kwargs == NULL);
var_poolmanager_kwargs = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_poolmanager_kwargs);
tmp_expression_value_6 = var_poolmanager_kwargs;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__2__urllib3_request_context->m_frame.f_lineno = 105;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_ssl_context_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_has_poolmanager_ssl_context == NULL);
var_has_poolmanager_ssl_context = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_operand_value_1;
tmp_cmp_expr_left_1 = module_var_accessor_requests$adapters$_preloaded_ssl_context(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__preloaded_ssl_context);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_has_poolmanager_ssl_context);
tmp_operand_value_1 = var_has_poolmanager_ssl_context;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_assign_source_7 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_assign_source_7 = tmp_and_left_value_1;
and_end_1:;
assert(var_should_use_default_ssl_context == NULL);
Py_INCREF(tmp_assign_source_7);
var_should_use_default_ssl_context = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_plain_CERT_REQUIRED;
assert(var_cert_reqs == NULL);
Py_INCREF(tmp_assign_source_8);
var_cert_reqs = tmp_assign_source_8;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_verify);
tmp_cmp_expr_left_2 = par_verify;
tmp_cmp_expr_right_2 = Py_False;
tmp_condition_result_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_plain_CERT_NONE;
{
    PyObject *old = var_cert_reqs;
    assert(old != NULL);
    var_cert_reqs = tmp_assign_source_9;
    Py_INCREF(var_cert_reqs);
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_verify);
tmp_cmp_expr_left_3 = par_verify;
tmp_cmp_expr_right_3 = Py_True;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_should_use_default_ssl_context);
tmp_truth_name_1 = CHECK_IF_TRUE(var_should_use_default_ssl_context);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_dictset_value = module_var_accessor_requests$adapters$_preloaded_ssl_context(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__preloaded_ssl_context);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pool_kwargs);
tmp_dictset_dict = var_pool_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_ssl_context;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_verify);
tmp_isinstance_inst_1 = par_verify;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooooooo";
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
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
tmp_expression_value_7 = module_var_accessor_requests$adapters$os(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_os);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_path);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_verify);
tmp_args_element_value_2 = par_verify;
frame_frame_requests$adapters$$$function__2__urllib3_request_context->m_frame.f_lineno = 116;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_isdir, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(par_verify);
tmp_dictset_value = par_verify;
CHECK_OBJECT(var_pool_kwargs);
tmp_dictset_dict = var_pool_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_ca_certs;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_4;
branch_no_4:;
CHECK_OBJECT(par_verify);
tmp_dictset_value = par_verify;
CHECK_OBJECT(var_pool_kwargs);
tmp_dictset_dict = var_pool_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_ca_cert_dir;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_end_4:;
branch_no_3:;
branch_end_2:;
branch_end_1:;
CHECK_OBJECT(var_cert_reqs);
tmp_dictset_value = var_cert_reqs;
CHECK_OBJECT(var_pool_kwargs);
tmp_dictset_dict = var_pool_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_cert_reqs;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_client_cert);
tmp_cmp_expr_left_4 = par_client_cert;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_cmp_expr_left_5;
nuitka_digit tmp_cmp_expr_right_5;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_right_value_3_cbool_1;
CHECK_OBJECT(par_client_cert);
tmp_isinstance_inst_2 = par_client_cert;
tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_client_cert);
tmp_len_arg_1 = par_client_cert;
tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = 2;
tmp_tmp_and_right_value_3_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
tmp_and_right_value_3 = tmp_tmp_and_right_value_3_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_6 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_6 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_client_cert);
tmp_expression_value_8 = par_client_cert;
tmp_subscript_value_1 = const_int_0;
tmp_dictset_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_1, 0);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pool_kwargs);
tmp_dictset_dict = var_pool_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_cert_file;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_client_cert);
tmp_expression_value_9 = par_client_cert;
tmp_subscript_value_2 = const_int_pos_1;
tmp_dictset_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pool_kwargs);
tmp_dictset_dict = var_pool_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_key_file;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_6;
branch_no_6:;
CHECK_OBJECT(par_client_cert);
tmp_dictset_value = par_client_cert;
CHECK_OBJECT(var_pool_kwargs);
tmp_dictset_dict = var_pool_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_cert_file;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_end_6:;
branch_no_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_scheme;
CHECK_OBJECT(var_scheme);
tmp_dict_value_1 = var_scheme;
tmp_assign_source_10 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_10;
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_host;
CHECK_OBJECT(var_parsed_request_url);
tmp_expression_value_10 = var_parsed_request_url;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_hostname);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_port;
CHECK_OBJECT(var_port);
tmp_dict_value_1 = var_port;
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_10);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_host_params == NULL);
var_host_params = tmp_assign_source_10;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__2__urllib3_request_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__2__urllib3_request_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__2__urllib3_request_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__2__urllib3_request_context,
    type_description_1,
    par_request,
    par_verify,
    par_client_cert,
    par_poolmanager,
    var_host_params,
    var_pool_kwargs,
    var_parsed_request_url,
    var_scheme,
    var_port,
    var_poolmanager_kwargs,
    var_has_poolmanager_ssl_context,
    var_should_use_default_ssl_context,
    var_cert_reqs
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__2__urllib3_request_context == cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context);
    cache_frame_frame_requests$adapters$$$function__2__urllib3_request_context = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__2__urllib3_request_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_host_params);
tmp_tuple_element_1 = var_host_params;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_pool_kwargs);
tmp_tuple_element_1 = var_pool_kwargs;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_host_params);
CHECK_OBJECT(var_host_params);
Py_DECREF(var_host_params);
var_host_params = NULL;
CHECK_OBJECT(var_pool_kwargs);
CHECK_OBJECT(var_pool_kwargs);
Py_DECREF(var_pool_kwargs);
var_pool_kwargs = NULL;
CHECK_OBJECT(var_parsed_request_url);
CHECK_OBJECT(var_parsed_request_url);
Py_DECREF(var_parsed_request_url);
var_parsed_request_url = NULL;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
CHECK_OBJECT(var_port);
CHECK_OBJECT(var_port);
Py_DECREF(var_port);
var_port = NULL;
CHECK_OBJECT(var_poolmanager_kwargs);
CHECK_OBJECT(var_poolmanager_kwargs);
Py_DECREF(var_poolmanager_kwargs);
var_poolmanager_kwargs = NULL;
CHECK_OBJECT(var_has_poolmanager_ssl_context);
CHECK_OBJECT(var_has_poolmanager_ssl_context);
Py_DECREF(var_has_poolmanager_ssl_context);
var_has_poolmanager_ssl_context = NULL;
CHECK_OBJECT(var_should_use_default_ssl_context);
CHECK_OBJECT(var_should_use_default_ssl_context);
Py_DECREF(var_should_use_default_ssl_context);
var_should_use_default_ssl_context = NULL;
CHECK_OBJECT(var_cert_reqs);
CHECK_OBJECT(var_cert_reqs);
Py_DECREF(var_cert_reqs);
var_cert_reqs = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_pool_kwargs);
CHECK_OBJECT(var_pool_kwargs);
Py_DECREF(var_pool_kwargs);
var_pool_kwargs = NULL;
Py_XDECREF(var_parsed_request_url);
var_parsed_request_url = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_poolmanager_kwargs);
var_poolmanager_kwargs = NULL;
Py_XDECREF(var_has_poolmanager_ssl_context);
var_has_poolmanager_ssl_context = NULL;
Py_XDECREF(var_should_use_default_ssl_context);
var_should_use_default_ssl_context = NULL;
Py_XDECREF(var_cert_reqs);
var_cert_reqs = NULL;
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
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_client_cert);
Py_DECREF(par_client_cert);
CHECK_OBJECT(par_poolmanager);
Py_DECREF(par_poolmanager);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_client_cert);
Py_DECREF(par_client_cert);
CHECK_OBJECT(par_poolmanager);
Py_DECREF(par_poolmanager);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_806f9e09b5256a226d8cd8b05c789430, module_requests$adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__3___init__->m_type_description == NULL);
frame_frame_requests$adapters$$$function__3___init__ = cache_frame_frame_requests$adapters$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__3___init__);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_requests$adapters, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__3___init__->m_frame.f_lineno = 141;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__3___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__3___init__ == cache_frame_frame_requests$adapters$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__3___init__);
    cache_frame_frame_requests$adapters$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__3___init__);

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


static PyObject *impl_requests$adapters$$$function__4_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_stream = python_pars[2];
PyObject *par_timeout = python_pars[3];
PyObject *par_verify = python_pars[4];
PyObject *par_cert = python_pars[5];
PyObject *par_proxies = python_pars[6];
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__4_send;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__4_send = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__4_send)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__4_send);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__4_send == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__4_send = MAKE_FUNCTION_FRAME(tstate, code_objects_42fff0e8769ed054c610469942e093db, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__4_send->m_type_description == NULL);
frame_frame_requests$adapters$$$function__4_send = cache_frame_frame_requests$adapters$$$function__4_send;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__4_send);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__4_send) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 160;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__4_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__4_send->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__4_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__4_send,
    type_description_1,
    par_self,
    par_request,
    par_stream,
    par_timeout,
    par_verify,
    par_cert,
    par_proxies
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__4_send == cache_frame_frame_requests$adapters$$$function__4_send) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__4_send);
    cache_frame_frame_requests$adapters$$$function__4_send = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__4_send);

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
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_requests$adapters$$$function__5_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__5_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__5_close = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__5_close)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__5_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__5_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__5_close = MAKE_FUNCTION_FRAME(tstate, code_objects_0889131b5e1461b70b4c4e1bcc5cd2e6, module_requests$adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__5_close->m_type_description == NULL);
frame_frame_requests$adapters$$$function__5_close = cache_frame_frame_requests$adapters$$$function__5_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__5_close);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__5_close) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__5_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__5_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__5_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__5_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__5_close == cache_frame_frame_requests$adapters$$$function__5_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__5_close);
    cache_frame_frame_requests$adapters$$$function__5_close = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__5_close);

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

}


static PyObject *impl_requests$adapters$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_pool_connections = python_pars[1];
PyObject *par_pool_maxsize = python_pars[2];
PyObject *par_max_retries = python_pars[3];
PyObject *par_pool_block = python_pars[4];
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cf6b1c7f81440ace81fb5e9aa1038286, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__6___init__->m_type_description == NULL);
frame_frame_requests$adapters$$$function__6___init__ = cache_frame_frame_requests$adapters$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__6___init__);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__6___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_max_retries);
tmp_cmp_expr_left_1 = par_max_retries;
tmp_cmp_expr_right_1 = module_var_accessor_requests$adapters$DEFAULT_RETRIES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_RETRIES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooc";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_requests$adapters$Retry(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__6___init__->m_frame.f_lineno = 210;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_false_tuple, 0), mod_consts.const_tuple_str_plain_read_tuple);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_max_retries, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_instance_1 = module_var_accessor_requests$adapters$Retry(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_max_retries);
tmp_args_element_value_1 = par_max_retries;
frame_frame_requests$adapters$$$function__6___init__->m_frame.f_lineno = 212;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_int, tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_max_retries, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_config, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_proxy_manager, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 216;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_requests$adapters, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__6___init__->m_frame.f_lineno = 216;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_pool_connections);
tmp_assattr_value_5 = par_pool_connections;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__pool_connections, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_pool_maxsize);
tmp_assattr_value_6 = par_pool_maxsize;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__pool_maxsize, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_pool_block);
tmp_assattr_value_7 = par_pool_block;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__pool_block, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_init_poolmanager);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pool_connections);
tmp_kw_call_arg_value_0_1 = par_pool_connections;
CHECK_OBJECT(par_pool_maxsize);
tmp_kw_call_arg_value_1_1 = par_pool_maxsize;
CHECK_OBJECT(par_pool_block);
tmp_kw_call_dict_value_0_1 = par_pool_block;
frame_frame_requests$adapters$$$function__6___init__->m_frame.f_lineno = 222;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_block_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__6___init__,
    type_description_1,
    par_self,
    par_pool_connections,
    par_pool_maxsize,
    par_max_retries,
    par_pool_block,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__6___init__ == cache_frame_frame_requests$adapters$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__6___init__);
    cache_frame_frame_requests$adapters$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__6___init__);

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
CHECK_OBJECT(par_pool_connections);
Py_DECREF(par_pool_connections);
CHECK_OBJECT(par_pool_maxsize);
Py_DECREF(par_pool_maxsize);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_pool_block);
Py_DECREF(par_pool_block);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_pool_connections);
Py_DECREF(par_pool_connections);
CHECK_OBJECT(par_pool_maxsize);
Py_DECREF(par_pool_maxsize);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_pool_block);
Py_DECREF(par_pool_block);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__7___getstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *outline_0_var_attr = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__7___getstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__7___getstate__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__7___getstate__)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__7___getstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__7___getstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__7___getstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6469f5447c0b5e9456cea7d56823ce2e, module_requests$adapters, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__7___getstate__->m_type_description == NULL);
frame_frame_requests$adapters$$$function__7___getstate__ = cache_frame_frame_requests$adapters$$$function__7___getstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__7___getstate__);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__7___getstate__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___attrs__);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "o";
exception_lineno = 225;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_assign_source_4 = tmp_dictcontraction_1__iter_value_0;
{
    PyObject *old = outline_0_var_attr;
    outline_0_var_attr = tmp_assign_source_4;
    Py_INCREF(outline_0_var_attr);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_attr);
tmp_dictset38_key_1 = outline_0_var_attr;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
CHECK_OBJECT(outline_0_var_attr);
tmp_name_value_1 = outline_0_var_attr;
tmp_default_value_1 = Py_None;
tmp_dictset38_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "o";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "o";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "o";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_return_value = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_attr);
outline_0_var_attr = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_attr);
outline_0_var_attr = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 225;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__7___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__7___getstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__7___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__7___getstate__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__7___getstate__ == cache_frame_frame_requests$adapters$$$function__7___getstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__7___getstate__);
    cache_frame_frame_requests$adapters$$$function__7___getstate__ = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__7___getstate__);

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


static PyObject *impl_requests$adapters$$$function__8___setstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
PyObject *var_attr = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__8___setstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__8___setstate__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__8___setstate__)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__8___setstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__8___setstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__8___setstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_71619ec53f2fda1df02ca12edeab5539, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__8___setstate__->m_type_description == NULL);
frame_frame_requests$adapters$$$function__8___setstate__ = cache_frame_frame_requests$adapters$$$function__8___setstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__8___setstate__);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__8___setstate__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_proxy_manager, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_config, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__8___setstate__->m_frame.f_lineno = 233;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 233;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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



exception_lineno = 233;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_attr;
    var_attr = tmp_assign_source_6;
    Py_INCREF(var_attr);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_7;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
CHECK_OBJECT(var_attr);
tmp_name_value_1 = var_attr;
CHECK_OBJECT(var_value);
tmp_value_value_1 = var_value;
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_2, tmp_name_value_1, tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooo";
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
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_init_poolmanager);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__pool_connections);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 237;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__pool_maxsize);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 237;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__pool_block);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 237;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__8___setstate__->m_frame.f_lineno = 236;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_block_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__8___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__8___setstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__8___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__8___setstate__,
    type_description_1,
    par_self,
    par_state,
    var_attr,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__8___setstate__ == cache_frame_frame_requests$adapters$$$function__8___setstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__8___setstate__);
    cache_frame_frame_requests$adapters$$$function__8___setstate__ = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__8___setstate__);

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
Py_XDECREF(var_attr);
var_attr = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_attr);
var_attr = NULL;
Py_XDECREF(var_value);
var_value = NULL;
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
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__9_init_poolmanager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_connections = python_pars[1];
PyObject *par_maxsize = python_pars[2];
PyObject *par_block = python_pars[3];
PyObject *par_pool_kwargs = python_pars[4];
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__9_init_poolmanager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__9_init_poolmanager = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__9_init_poolmanager)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__9_init_poolmanager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__9_init_poolmanager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__9_init_poolmanager = MAKE_FUNCTION_FRAME(tstate, code_objects_edcc9d2027b8f3da2aac0ff3e6e466d0, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__9_init_poolmanager->m_type_description == NULL);
frame_frame_requests$adapters$$$function__9_init_poolmanager = cache_frame_frame_requests$adapters$$$function__9_init_poolmanager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__9_init_poolmanager);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__9_init_poolmanager) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_connections);
tmp_assattr_value_1 = par_connections;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__pool_connections, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_maxsize);
tmp_assattr_value_2 = par_maxsize;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__pool_maxsize, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_block);
tmp_assattr_value_3 = par_block;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__pool_block, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_assattr_target_4;
tmp_direct_call_arg1_1 = module_var_accessor_requests$adapters$PoolManager(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolManager);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_num_pools;
CHECK_OBJECT(par_connections);
tmp_dict_value_1 = par_connections;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_maxsize;
CHECK_OBJECT(par_maxsize);
tmp_dict_value_1 = par_maxsize;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_block;
CHECK_OBJECT(par_block);
tmp_dict_value_1 = par_block;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_pool_kwargs);
tmp_direct_call_arg3_1 = par_pool_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assattr_value_4 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_poolmanager, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__9_init_poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__9_init_poolmanager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__9_init_poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__9_init_poolmanager,
    type_description_1,
    par_self,
    par_connections,
    par_maxsize,
    par_block,
    par_pool_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__9_init_poolmanager == cache_frame_frame_requests$adapters$$$function__9_init_poolmanager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__9_init_poolmanager);
    cache_frame_frame_requests$adapters$$$function__9_init_poolmanager = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__9_init_poolmanager);

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
CHECK_OBJECT(par_connections);
Py_DECREF(par_connections);
CHECK_OBJECT(par_maxsize);
Py_DECREF(par_maxsize);
CHECK_OBJECT(par_block);
Py_DECREF(par_block);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_connections);
Py_DECREF(par_connections);
CHECK_OBJECT(par_maxsize);
Py_DECREF(par_maxsize);
CHECK_OBJECT(par_block);
Py_DECREF(par_block);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__10_proxy_manager_for(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy = python_pars[1];
PyObject *par_proxy_kwargs = python_pars[2];
PyObject *var_manager = NULL;
PyObject *var_username = NULL;
PyObject *var_password = NULL;
PyObject *var_proxy_headers = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_assign_unpack_2__assign_source = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__10_proxy_manager_for;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for = MAKE_FUNCTION_FRAME(tstate, code_objects_6afdbd10e676a2e6a4d824614f39cdad, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for->m_type_description == NULL);
frame_frame_requests$adapters$$$function__10_proxy_manager_for = cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__10_proxy_manager_for);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__10_proxy_manager_for) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_proxy);
tmp_cmp_expr_left_1 = par_proxy;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_proxy_manager);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooo";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_proxy_manager);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_subscript_value_1 = par_proxy;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_manager == NULL);
var_manager = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_proxy);
tmp_expression_value_5 = par_proxy;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__10_proxy_manager_for->m_frame.f_lineno = 280;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__10_proxy_manager_for->m_frame.f_lineno = 280;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_socks_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 280;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_requests$adapters$get_auth_from_url(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_auth_from_url);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_proxy);
tmp_args_element_value_1 = par_proxy;
frame_frame_requests$adapters$$$function__10_proxy_manager_for->m_frame.f_lineno = 281;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
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
assert(var_username == NULL);
Py_INCREF(tmp_assign_source_5);
var_username = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_password == NULL);
Py_INCREF(tmp_assign_source_6);
var_password = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$adapters$SOCKSProxyManager(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SOCKSProxyManager);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_proxy);
tmp_tuple_element_1 = par_proxy;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_username;
CHECK_OBJECT(var_username);
tmp_dict_value_1 = var_username;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_password;
CHECK_OBJECT(var_password);
tmp_dict_value_1 = var_password;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_num_pools;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__pool_connections);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_maxsize;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__pool_maxsize);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_block;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__pool_block);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg2_1);
Py_DECREF(tmp_direct_call_arg3_1);
goto try_except_handler_4;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par_proxy_kwargs);
tmp_direct_call_arg4_1 = par_proxy_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_assign_source_7 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_8 = tmp_assign_unpack_1__assign_source;
assert(var_manager == NULL);
Py_INCREF(tmp_assign_source_8);
var_manager = tmp_assign_source_8;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_proxy_manager);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_proxy);
tmp_ass_subscript_1 = par_proxy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_proxy);
tmp_args_element_value_2 = par_proxy;
frame_frame_requests$adapters$$$function__10_proxy_manager_for->m_frame.f_lineno = 292;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_proxy_headers, tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy_headers == NULL);
var_proxy_headers = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_2;
tmp_direct_call_arg1_2 = module_var_accessor_requests$adapters$proxy_from_url(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proxy_from_url);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_proxy);
tmp_tuple_element_2 = par_proxy;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_proxy_headers;
CHECK_OBJECT(var_proxy_headers);
tmp_dict_value_2 = var_proxy_headers;
tmp_direct_call_arg3_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_num_pools;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__pool_connections);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_maxsize;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__pool_maxsize);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_block;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__pool_block);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_direct_call_arg2_2);
Py_DECREF(tmp_direct_call_arg3_2);
goto try_except_handler_5;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
CHECK_OBJECT(par_proxy_kwargs);
tmp_direct_call_arg4_2 = par_proxy_kwargs;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg4_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_2};
    tmp_assign_source_10 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
assert(tmp_assign_unpack_2__assign_source == NULL);
tmp_assign_unpack_2__assign_source = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_11 = tmp_assign_unpack_2__assign_source;
assert(var_manager == NULL);
Py_INCREF(tmp_assign_source_11);
var_manager = tmp_assign_source_11;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_ass_subvalue_2 = tmp_assign_unpack_2__assign_source;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_proxy_manager);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_proxy);
tmp_ass_subscript_2 = par_proxy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
Py_DECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
branch_end_2:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__10_proxy_manager_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__10_proxy_manager_for->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__10_proxy_manager_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__10_proxy_manager_for,
    type_description_1,
    par_self,
    par_proxy,
    par_proxy_kwargs,
    var_manager,
    var_username,
    var_password,
    var_proxy_headers
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__10_proxy_manager_for == cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for);
    cache_frame_frame_requests$adapters$$$function__10_proxy_manager_for = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__10_proxy_manager_for);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_manager);
tmp_return_value = var_manager;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_manager);
CHECK_OBJECT(var_manager);
Py_DECREF(var_manager);
var_manager = NULL;
Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
Py_XDECREF(var_proxy_headers);
var_proxy_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_manager);
var_manager = NULL;
Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
Py_XDECREF(var_proxy_headers);
var_proxy_headers = NULL;
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
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_proxy_kwargs);
Py_DECREF(par_proxy_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_proxy_kwargs);
Py_DECREF(par_proxy_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__11_cert_verify(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conn = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_verify = python_pars[3];
PyObject *par_cert = python_pars[4];
PyObject *var_cert_loc = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__11_cert_verify;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__11_cert_verify = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__11_cert_verify)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__11_cert_verify);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__11_cert_verify == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__11_cert_verify = MAKE_FUNCTION_FRAME(tstate, code_objects_891879225e2de14371d0c1c5b7c86a35, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__11_cert_verify->m_type_description == NULL);
frame_frame_requests$adapters$$$function__11_cert_verify = cache_frame_frame_requests$adapters$$$function__11_cert_verify;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__11_cert_verify);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__11_cert_verify) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_url);
tmp_expression_value_2 = par_url;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 316;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 316;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_https_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_verify);
tmp_truth_name_2 = CHECK_IF_TRUE(par_verify);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = mod_consts.const_str_plain_CERT_REQUIRED;
CHECK_OBJECT(par_conn);
tmp_assattr_target_1 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_cert_reqs, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_verify);
tmp_cmp_expr_left_1 = par_verify;
tmp_cmp_expr_right_1 = Py_True;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_verify);
tmp_assign_source_1 = par_verify;
assert(var_cert_loc == NULL);
Py_INCREF(tmp_assign_source_1);
var_cert_loc = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_requests$adapters$os(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_os);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_loc);
tmp_args_element_value_1 = var_cert_loc;
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 327;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_exists, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_37b76b29166d15e3ee17abcbbb9482e2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cert_loc);
tmp_format_value_1 = var_cert_loc;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 328;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 328;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_4 = module_var_accessor_requests$adapters$os(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_os);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_path);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_loc);
tmp_args_element_value_2 = var_cert_loc;
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 333;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, const_str_plain_isdir, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_cert_loc);
tmp_assattr_value_2 = var_cert_loc;
CHECK_OBJECT(par_conn);
tmp_assattr_target_2 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_ca_certs, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_cert_loc);
tmp_assattr_value_3 = var_cert_loc;
CHECK_OBJECT(par_conn);
tmp_assattr_target_3 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_ca_cert_dir, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_end_4:;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = mod_consts.const_str_plain_CERT_NONE;
CHECK_OBJECT(par_conn);
tmp_assattr_target_4 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_cert_reqs, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_None;
CHECK_OBJECT(par_conn);
tmp_assattr_target_5 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_ca_certs, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_None;
CHECK_OBJECT(par_conn);
tmp_assattr_target_6 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_ca_cert_dir, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(par_cert);
tmp_truth_name_3 = CHECK_IF_TRUE(par_cert);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_cert);
tmp_isinstance_inst_1 = par_cert;
tmp_isinstance_cls_1 = module_var_accessor_requests$adapters$basestring(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_basestring);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooo";
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
PyObject *tmp_assattr_value_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_cert);
tmp_expression_value_5 = par_cert;
tmp_subscript_value_1 = const_int_0;
tmp_assattr_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conn);
tmp_assattr_target_7 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_cert_file, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_cert);
tmp_expression_value_6 = par_cert;
tmp_subscript_value_2 = const_int_pos_1;
tmp_assattr_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conn);
tmp_assattr_target_8 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_key_file, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_cert);
tmp_assattr_value_9 = par_cert;
CHECK_OBJECT(par_conn);
tmp_assattr_target_9 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_cert_file, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_None;
CHECK_OBJECT(par_conn);
tmp_assattr_target_10 = par_conn;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_key_file, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_end_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_4;
PyObject *tmp_operand_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_conn);
tmp_expression_value_7 = par_conn;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_cert_file);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_expression_value_9 = module_var_accessor_requests$adapters$os(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_os);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_path);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_exists);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conn);
tmp_expression_value_10 = par_conn;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_cert_file);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 349;
tmp_operand_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_6837907b9b60cde5df9aa6230989268f;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_conn);
tmp_expression_value_11 = par_conn;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_cert_file);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 350;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 350;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_5;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_conn);
tmp_expression_value_12 = par_conn;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_key_file);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_expression_value_14 = module_var_accessor_requests$adapters$os(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_os);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_path);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_exists);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conn);
tmp_expression_value_15 = par_conn;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_key_file);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 354;
tmp_operand_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_8 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_8 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_354d5136022dc11cd135ed80872f76f4;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_conn);
tmp_expression_value_16 = par_conn;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_key_file);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_make_exception_arg_3 == NULL));
frame_frame_requests$adapters$$$function__11_cert_verify->m_frame.f_lineno = 355;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 355;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_8:;
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__11_cert_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__11_cert_verify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__11_cert_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__11_cert_verify,
    type_description_1,
    par_self,
    par_conn,
    par_url,
    par_verify,
    par_cert,
    var_cert_loc
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__11_cert_verify == cache_frame_frame_requests$adapters$$$function__11_cert_verify) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__11_cert_verify);
    cache_frame_frame_requests$adapters$$$function__11_cert_verify = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__11_cert_verify);

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
Py_XDECREF(var_cert_loc);
var_cert_loc = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cert_loc);
var_cert_loc = NULL;
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
CHECK_OBJECT(par_conn);
Py_DECREF(par_conn);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_conn);
Py_DECREF(par_conn);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__12_build_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_req = python_pars[1];
PyObject *par_resp = python_pars[2];
PyObject *var_response = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__12_build_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__12_build_response = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__12_build_response)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__12_build_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__12_build_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__12_build_response = MAKE_FUNCTION_FRAME(tstate, code_objects_750f76332a61b81f01ca363b48c7ce97, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__12_build_response->m_type_description == NULL);
frame_frame_requests$adapters$$$function__12_build_response = cache_frame_frame_requests$adapters$$$function__12_build_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__12_build_response);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__12_build_response) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_requests$adapters$Response(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__12_build_response->m_frame.f_lineno = 369;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_resp);
tmp_expression_value_1 = par_resp;
tmp_name_value_1 = mod_consts.const_str_plain_status;
tmp_default_value_1 = Py_None;
tmp_assattr_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_assattr_target_1 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_status_code, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
PyObject *tmp_assattr_target_2;
tmp_called_value_2 = module_var_accessor_requests$adapters$CaseInsensitiveDict(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CaseInsensitiveDict);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_resp);
tmp_expression_value_2 = par_resp;
tmp_name_value_2 = mod_consts.const_str_plain_headers;
tmp_default_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_args_element_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, tmp_default_value_2);
CHECK_OBJECT(tmp_default_value_2);
Py_DECREF(tmp_default_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__12_build_response->m_frame.f_lineno = 375;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_assattr_target_2 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_headers, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_3;
tmp_called_value_3 = module_var_accessor_requests$adapters$get_encoding_from_headers(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_encoding_from_headers);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_expression_value_3 = var_response;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__12_build_response->m_frame.f_lineno = 378;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_assattr_target_3 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_encoding, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_resp);
tmp_assattr_value_4 = par_resp;
CHECK_OBJECT(var_response);
tmp_assattr_target_4 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_raw, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_response);
tmp_expression_value_5 = var_response;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_raw);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_reason);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_assattr_target_5 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_reason, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_req);
tmp_expression_value_6 = par_req;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_url);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooo";
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
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_req);
tmp_expression_value_8 = par_req;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_url);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__12_build_response->m_frame.f_lineno = 383;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_assattr_target_6 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_url, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_req);
tmp_expression_value_9 = par_req;
tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_url);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_assattr_target_7 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_url, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_requests$adapters$extract_cookies_to_jar(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_cookies_to_jar);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response);
tmp_expression_value_10 = var_response;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_cookies);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_req);
tmp_args_element_value_4 = par_req;
CHECK_OBJECT(par_resp);
tmp_args_element_value_5 = par_resp;
frame_frame_requests$adapters$$$function__12_build_response->m_frame.f_lineno = 388;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_req);
tmp_assattr_value_8 = par_req;
CHECK_OBJECT(var_response);
tmp_assattr_target_8 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_request, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_self);
tmp_assattr_value_9 = par_self;
CHECK_OBJECT(var_response);
tmp_assattr_target_9 = var_response;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_connection, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__12_build_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__12_build_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__12_build_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__12_build_response,
    type_description_1,
    par_self,
    par_req,
    par_resp,
    var_response
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__12_build_response == cache_frame_frame_requests$adapters$$$function__12_build_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__12_build_response);
    cache_frame_frame_requests$adapters$$$function__12_build_response = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__12_build_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_response);
tmp_return_value = var_response;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
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
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_response);
var_response = NULL;
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
CHECK_OBJECT(par_req);
Py_DECREF(par_req);
CHECK_OBJECT(par_resp);
Py_DECREF(par_resp);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_req);
Py_DECREF(par_req);
CHECK_OBJECT(par_resp);
Py_DECREF(par_resp);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__13_build_connection_pool_key_attributes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_verify = python_pars[2];
PyObject *par_cert = python_pars[3];
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes = MAKE_FUNCTION_FRAME(tstate, code_objects_23d6d14ebe39f4f4551e34f3cf9a8782, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes->m_type_description == NULL);
frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes = cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_requests$adapters$_urllib3_request_context(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__urllib3_request_context);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
CHECK_OBJECT(par_verify);
tmp_args_element_value_2 = par_verify;
CHECK_OBJECT(par_cert);
tmp_args_element_value_3 = par_cert;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_poolmanager);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes->m_frame.f_lineno = 444;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes,
    type_description_1,
    par_self,
    par_request,
    par_verify,
    par_cert
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes == cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes);
    cache_frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__13_build_connection_pool_key_attributes);

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
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__14_get_connection_with_tls_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_verify = python_pars[2];
PyObject *par_proxies = python_pars[3];
PyObject *par_cert = python_pars[4];
PyObject *var_proxy = NULL;
PyObject *var_host_params = NULL;
PyObject *var_pool_kwargs = NULL;
PyObject *var_e = NULL;
PyObject *var_proxy_url = NULL;
PyObject *var_proxy_manager = NULL;
PyObject *var_conn = NULL;
PyObject *tmp_dict_unpacking_call_1__called = NULL;
PyObject *tmp_dict_unpacking_call_2__called = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context = MAKE_FUNCTION_FRAME(tstate, code_objects_570ee653490ab0c86933d43717980f2d, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_type_description == NULL);
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context = cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_requests$adapters$select_proxy(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select_proxy);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 466;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_1 = par_request;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_url);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxies);
tmp_args_element_value_2 = par_proxies;
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = 466;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy == NULL);
var_proxy = tmp_assign_source_1;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_3 = par_request;
CHECK_OBJECT(par_verify);
tmp_args_element_value_4 = par_verify;
CHECK_OBJECT(par_cert);
tmp_args_element_value_5 = par_cert;
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = 468;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_build_connection_pool_key_attributes,
        call_args
    );
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oooooooooooo";
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
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
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
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_5);
var_e = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_requests$adapters$InvalidURL(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 474;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_1 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_1 = par_request;
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = 474;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 474;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
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

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 467;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame)) {
        frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_5;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_host_params == NULL);
Py_INCREF(tmp_assign_source_6);
var_host_params = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_pool_kwargs == NULL);
Py_INCREF(tmp_assign_source_7);
var_pool_kwargs = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_proxy);
tmp_truth_name_1 = CHECK_IF_TRUE(var_proxy);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_requests$adapters$prepend_scheme_if_needed(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prepend_scheme_if_needed);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 476;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxy);
tmp_args_element_value_6 = var_proxy;
tmp_args_element_value_7 = mod_consts.const_str_plain_http;
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = 476;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_proxy;
    assert(old != NULL);
    var_proxy = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
tmp_called_value_4 = module_var_accessor_requests$adapters$parse_url(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_url);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 477;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxy);
tmp_args_element_value_8 = var_proxy;
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = 477;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy_url == NULL);
var_proxy_url = tmp_assign_source_9;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_proxy_url);
tmp_expression_value_2 = var_proxy_url;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_host);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_requests$adapters$InvalidProxyURL(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidProxyURL);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = 479;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 479;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_proxy);
tmp_args_element_value_9 = var_proxy;
frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame.f_lineno = 483;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_proxy_manager_for, tmp_args_element_value_9);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy_manager == NULL);
var_proxy_manager = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_proxy_manager);
tmp_expression_value_3 = var_proxy_manager;
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_connection_from_host);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_dict_unpacking_call_1__called == NULL);
tmp_dict_unpacking_call_1__called = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_1 = tmp_dict_unpacking_call_1__called;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_2 = tmp_dict_unpacking_call_1__called;
CHECK_OBJECT(var_host_params);
tmp_tuple_element_1 = var_host_params;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_pool_kwargs;
CHECK_OBJECT(var_pool_kwargs);
tmp_dict_value_1 = var_pool_kwargs;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg2_2, 1, tmp_tuple_element_1);
}
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_direct_call_arg2_1 = impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(tstate, dir_call_args);
}
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_11 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
assert(var_conn == NULL);
var_conn = tmp_assign_source_11;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_13;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_poolmanager);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_connection_from_host);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_dict_unpacking_call_2__called == NULL);
tmp_dict_unpacking_call_2__called = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_direct_call_arg2_4;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
tmp_direct_call_arg1_3 = tmp_dict_unpacking_call_2__called;
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
tmp_direct_call_arg1_4 = tmp_dict_unpacking_call_2__called;
CHECK_OBJECT(var_host_params);
tmp_tuple_element_2 = var_host_params;
tmp_direct_call_arg2_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 0, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_pool_kwargs;
CHECK_OBJECT(var_pool_kwargs);
tmp_dict_value_2 = var_pool_kwargs;
tmp_tuple_element_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg2_4, 1, tmp_tuple_element_2);
}
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_4};
    tmp_direct_call_arg2_3 = impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(tstate, dir_call_args);
}
if (tmp_direct_call_arg2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooooooooooo";
    goto try_except_handler_8;
}
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3};
    tmp_assign_source_13 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooooooooooo";
    goto try_except_handler_8;
}
goto try_return_handler_8;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
Py_DECREF(tmp_dict_unpacking_call_2__called);
tmp_dict_unpacking_call_2__called = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
Py_DECREF(tmp_dict_unpacking_call_2__called);
tmp_dict_unpacking_call_2__called = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
assert(var_conn == NULL);
var_conn = tmp_assign_source_13;
}
branch_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context,
    type_description_1,
    par_self,
    par_request,
    par_verify,
    par_proxies,
    par_cert,
    var_proxy,
    var_host_params,
    var_pool_kwargs,
    var_e,
    var_proxy_url,
    var_proxy_manager,
    var_conn
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context == cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context);
    cache_frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__14_get_connection_with_tls_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_conn);
tmp_return_value = var_conn;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_proxy);
var_proxy = NULL;
CHECK_OBJECT(var_host_params);
CHECK_OBJECT(var_host_params);
Py_DECREF(var_host_params);
var_host_params = NULL;
CHECK_OBJECT(var_pool_kwargs);
CHECK_OBJECT(var_pool_kwargs);
Py_DECREF(var_pool_kwargs);
var_pool_kwargs = NULL;
Py_XDECREF(var_proxy_url);
var_proxy_url = NULL;
Py_XDECREF(var_proxy_manager);
var_proxy_manager = NULL;
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_proxy);
var_proxy = NULL;
Py_XDECREF(var_host_params);
var_host_params = NULL;
Py_XDECREF(var_pool_kwargs);
var_pool_kwargs = NULL;
Py_XDECREF(var_proxy_url);
var_proxy_url = NULL;
Py_XDECREF(var_proxy_manager);
var_proxy_manager = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__15_get_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_proxies = python_pars[2];
PyObject *var_proxy = NULL;
PyObject *var_proxy_url = NULL;
PyObject *var_proxy_manager = NULL;
PyObject *var_conn = NULL;
PyObject *var_parsed = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__15_get_connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__15_get_connection = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__15_get_connection)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__15_get_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__15_get_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__15_get_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_451432b54629ac2a89da6c993d499589, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__15_get_connection->m_type_description == NULL);
frame_frame_requests$adapters$$$function__15_get_connection = cache_frame_frame_requests$adapters$$$function__15_get_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__15_get_connection);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__15_get_connection) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_requests$adapters$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_563140a5685c1a7bf93acc8183fc3d51;
tmp_args_element_value_2 = module_var_accessor_requests$adapters$DeprecationWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 514;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 507;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_requests$adapters$select_proxy(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select_proxy);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 516;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_3 = par_url;
CHECK_OBJECT(par_proxies);
tmp_args_element_value_4 = par_proxies;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 516;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy == NULL);
var_proxy = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_proxy);
tmp_truth_name_1 = CHECK_IF_TRUE(var_proxy);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "oooooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_requests$adapters$prepend_scheme_if_needed(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prepend_scheme_if_needed);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 519;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxy);
tmp_args_element_value_5 = var_proxy;
tmp_args_element_value_6 = mod_consts.const_str_plain_http;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 519;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_proxy;
    assert(old != NULL);
    var_proxy = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
tmp_called_value_4 = module_var_accessor_requests$adapters$parse_url(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_url);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxy);
tmp_args_element_value_7 = var_proxy;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 520;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy_url == NULL);
var_proxy_url = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_proxy_url);
tmp_expression_value_2 = var_proxy_url;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_host);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooo";
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
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_requests$adapters$InvalidProxyURL(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidProxyURL);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 522;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 522;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_proxy);
tmp_args_element_value_8 = var_proxy;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 526;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_proxy_manager_for, tmp_args_element_value_8);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy_manager == NULL);
var_proxy_manager = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(var_proxy_manager);
tmp_called_instance_2 = var_proxy_manager;
CHECK_OBJECT(par_url);
tmp_args_element_value_9 = par_url;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 527;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_connection_from_url, tmp_args_element_value_9);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_conn == NULL);
var_conn = tmp_assign_source_5;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_10;
tmp_called_value_6 = module_var_accessor_requests$adapters$urlparse(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 530;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_10 = par_url;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 530;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed == NULL);
var_parsed = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_parsed);
tmp_called_instance_3 = var_parsed;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 531;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_geturl);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_poolmanager);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_11 = par_url;
frame_frame_requests$adapters$$$function__15_get_connection->m_frame.f_lineno = 532;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_connection_from_url, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_conn == NULL);
var_conn = tmp_assign_source_8;
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__15_get_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__15_get_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__15_get_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__15_get_connection,
    type_description_1,
    par_self,
    par_url,
    par_proxies,
    var_proxy,
    var_proxy_url,
    var_proxy_manager,
    var_conn,
    var_parsed
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__15_get_connection == cache_frame_frame_requests$adapters$$$function__15_get_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__15_get_connection);
    cache_frame_frame_requests$adapters$$$function__15_get_connection = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__15_get_connection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_conn);
tmp_return_value = var_conn;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_url);
par_url = NULL;
Py_XDECREF(var_proxy);
var_proxy = NULL;
Py_XDECREF(var_proxy_url);
var_proxy_url = NULL;
Py_XDECREF(var_proxy_manager);
var_proxy_manager = NULL;
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_url);
par_url = NULL;
Py_XDECREF(var_proxy);
var_proxy = NULL;
Py_XDECREF(var_proxy_url);
var_proxy_url = NULL;
Py_XDECREF(var_proxy_manager);
var_proxy_manager = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
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
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__16_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_proxy = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__16_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__16_close = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__16_close)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__16_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__16_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__16_close = MAKE_FUNCTION_FRAME(tstate, code_objects_ed4e6fc619321b000c440666f63627d9, module_requests$adapters, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__16_close->m_type_description == NULL);
frame_frame_requests$adapters$$$function__16_close = cache_frame_frame_requests$adapters$$$function__16_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__16_close);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__16_close) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_poolmanager);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__16_close->m_frame.f_lineno = 542;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_proxy_manager);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__16_close->m_frame.f_lineno = 543;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oo";
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
type_description_1 = "oo";
exception_lineno = 543;
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
    PyObject *old = var_proxy;
    var_proxy = tmp_assign_source_3;
    Py_INCREF(var_proxy);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_proxy);
tmp_expression_value_5 = var_proxy;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_clear);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_requests$adapters$$$function__16_close->m_frame.f_lineno = 544;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__16_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__16_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__16_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__16_close,
    type_description_1,
    par_self,
    var_proxy
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__16_close == cache_frame_frame_requests$adapters$$$function__16_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__16_close);
    cache_frame_frame_requests$adapters$$$function__16_close = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__16_close);

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
Py_XDECREF(var_proxy);
var_proxy = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_proxy);
var_proxy = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_requests$adapters$$$function__17_request_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_proxies = python_pars[2];
PyObject *var_proxy = NULL;
PyObject *var_scheme = NULL;
PyObject *var_is_proxied_http_request = NULL;
PyObject *var_using_socks_proxy = NULL;
PyObject *var_proxy_scheme = NULL;
PyObject *var_url = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__17_request_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__17_request_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__17_request_url)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__17_request_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__17_request_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__17_request_url = MAKE_FUNCTION_FRAME(tstate, code_objects_57a0eec6006546c5be34b428a4997961, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__17_request_url->m_type_description == NULL);
frame_frame_requests$adapters$$$function__17_request_url = cache_frame_frame_requests$adapters$$$function__17_request_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__17_request_url);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__17_request_url) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_requests$adapters$select_proxy(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select_proxy);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_1 = par_request;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_url);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxies);
tmp_args_element_value_2 = par_proxies;
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 560;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy == NULL);
var_proxy = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
tmp_called_value_2 = module_var_accessor_requests$adapters$urlparse(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 561;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_3 = par_request;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_url);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 561;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_scheme == NULL);
var_scheme = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_proxy);
tmp_and_left_value_1 = var_proxy;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_scheme);
tmp_cmp_expr_left_1 = var_scheme;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_https;
tmp_and_right_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_assign_source_3 = tmp_and_left_value_1;
and_end_1:;
assert(var_is_proxied_http_request == NULL);
var_is_proxied_http_request = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_False;
assert(var_using_socks_proxy == NULL);
Py_INCREF(tmp_assign_source_4);
var_using_socks_proxy = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_proxy);
tmp_truth_name_1 = CHECK_IF_TRUE(var_proxy);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_requests$adapters$urlparse(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 566;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxy);
tmp_args_element_value_4 = var_proxy;
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 566;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 566;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_proxy_scheme == NULL);
var_proxy_scheme = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_proxy_scheme);
tmp_expression_value_6 = var_proxy_scheme;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_startswith);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 567;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_socks_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_using_socks_proxy;
    assert(old != NULL);
    var_using_socks_proxy = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_request);
tmp_expression_value_7 = par_request;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_path_url);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_url);
tmp_expression_value_8 = var_url;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_startswith);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 570;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 570;
type_description_1 = "ooooooooo";
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
{
PyObject *tmp_assign_source_8;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = const_str_slash;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_url);
tmp_expression_value_9 = var_url;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_lstrip);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 571;
tmp_format_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_8 == NULL));
{
    PyObject *old = var_url;
    assert(old != NULL);
    var_url = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_is_proxied_http_request);
tmp_truth_name_3 = CHECK_IF_TRUE(var_is_proxied_http_request);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_using_socks_proxy);
tmp_operand_value_1 = var_using_socks_proxy;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_10;
tmp_called_value_8 = module_var_accessor_requests$adapters$urldefragauth(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urldefragauth);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 574;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_10 = par_request;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_url);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$adapters$$$function__17_request_url->m_frame.f_lineno = 574;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_url;
    var_url = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
branch_no_3:;
if (var_url == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 576;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_url;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__17_request_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__17_request_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__17_request_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__17_request_url,
    type_description_1,
    par_self,
    par_request,
    par_proxies,
    var_proxy,
    var_scheme,
    var_is_proxied_http_request,
    var_using_socks_proxy,
    var_proxy_scheme,
    var_url
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__17_request_url == cache_frame_frame_requests$adapters$$$function__17_request_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__17_request_url);
    cache_frame_frame_requests$adapters$$$function__17_request_url = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__17_request_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_proxy);
CHECK_OBJECT(var_proxy);
Py_DECREF(var_proxy);
var_proxy = NULL;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
CHECK_OBJECT(var_is_proxied_http_request);
CHECK_OBJECT(var_is_proxied_http_request);
Py_DECREF(var_is_proxied_http_request);
var_is_proxied_http_request = NULL;
CHECK_OBJECT(var_using_socks_proxy);
CHECK_OBJECT(var_using_socks_proxy);
Py_DECREF(var_using_socks_proxy);
var_using_socks_proxy = NULL;
Py_XDECREF(var_proxy_scheme);
var_proxy_scheme = NULL;
Py_XDECREF(var_url);
var_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_proxy);
var_proxy = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_is_proxied_http_request);
var_is_proxied_http_request = NULL;
Py_XDECREF(var_using_socks_proxy);
var_using_socks_proxy = NULL;
Py_XDECREF(var_proxy_scheme);
var_proxy_scheme = NULL;
Py_XDECREF(var_url);
var_url = NULL;
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
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__19_proxy_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy = python_pars[1];
PyObject *var_headers = NULL;
PyObject *var_username = NULL;
PyObject *var_password = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__19_proxy_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__19_proxy_headers = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__19_proxy_headers)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__19_proxy_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__19_proxy_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__19_proxy_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_e0c9593b7938c9cc59edda809578dc0e, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__19_proxy_headers->m_type_description == NULL);
frame_frame_requests$adapters$$$function__19_proxy_headers = cache_frame_frame_requests$adapters$$$function__19_proxy_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__19_proxy_headers);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__19_proxy_headers) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_requests$adapters$get_auth_from_url(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_auth_from_url);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 606;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_proxy);
tmp_args_element_value_1 = par_proxy;
frame_frame_requests$adapters$$$function__19_proxy_headers->m_frame.f_lineno = 606;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 606;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 606;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 606;
type_description_1 = "ooooo";
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
assert(var_username == NULL);
Py_INCREF(tmp_assign_source_5);
var_username = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_password == NULL);
Py_INCREF(tmp_assign_source_6);
var_password = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_username);
tmp_truth_name_1 = CHECK_IF_TRUE(var_username);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_requests$adapters$_basic_auth_str(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__basic_auth_str);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 609;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_username);
tmp_args_element_value_2 = var_username;
CHECK_OBJECT(var_password);
tmp_args_element_value_3 = var_password;
frame_frame_requests$adapters$$$function__19_proxy_headers->m_frame.f_lineno = 609;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__19_proxy_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__19_proxy_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__19_proxy_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__19_proxy_headers,
    type_description_1,
    par_self,
    par_proxy,
    var_headers,
    var_username,
    var_password
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__19_proxy_headers == cache_frame_frame_requests$adapters$$$function__19_proxy_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__19_proxy_headers);
    cache_frame_frame_requests$adapters$$$function__19_proxy_headers = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__19_proxy_headers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_headers);
tmp_return_value = var_headers;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_username);
CHECK_OBJECT(var_username);
Py_DECREF(var_username);
var_username = NULL;
CHECK_OBJECT(var_password);
CHECK_OBJECT(var_password);
Py_DECREF(var_password);
var_password = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function__20_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_stream = python_pars[2];
PyObject *par_timeout = python_pars[3];
PyObject *par_verify = python_pars[4];
PyObject *par_cert = python_pars[5];
PyObject *par_proxies = python_pars[6];
PyObject *var_conn = NULL;
PyObject *var_e = NULL;
PyObject *var_url = NULL;
PyObject *var_chunked = NULL;
PyObject *var_connect = NULL;
PyObject *var_read = NULL;
PyObject *var_resp = NULL;
PyObject *var_err = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$function__20_send;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$adapters$$$function__20_send = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$adapters$$$function__20_send)) {
    Py_XDECREF(cache_frame_frame_requests$adapters$$$function__20_send);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$adapters$$$function__20_send == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$adapters$$$function__20_send = MAKE_FUNCTION_FRAME(tstate, code_objects_88969b0051d1275021ab1d5bf42ec826, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$adapters$$$function__20_send->m_type_description == NULL);
frame_frame_requests$adapters$$$function__20_send = cache_frame_frame_requests$adapters$$$function__20_send;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$function__20_send);
assert(Py_REFCNT(frame_frame_requests$adapters$$$function__20_send) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_connection_with_tls_context);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(par_verify);
tmp_kw_call_arg_value_1_1 = par_verify;
CHECK_OBJECT(par_proxies);
tmp_kw_call_dict_value_0_1 = par_proxies;
CHECK_OBJECT(par_cert);
tmp_kw_call_dict_value_1_1 = par_cert;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 633;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_proxies_str_plain_cert_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_conn == NULL);
var_conn = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__20_send, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__20_send, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = module_var_accessor_requests$adapters$LocationValueError(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationValueError);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 636;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "ooooooooooooooo";
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
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_2);
var_e = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_2 = module_var_accessor_requests$adapters$InvalidURL(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_2 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_2 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 637;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 637;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
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

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 632;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$adapters$$$function__20_send->m_frame)) {
        frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_cert_verify);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_conn);
tmp_args_element_value_1 = var_conn;
CHECK_OBJECT(par_request);
tmp_expression_value_3 = par_request;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_url);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 639;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_verify);
tmp_args_element_value_3 = par_verify;
CHECK_OBJECT(par_cert);
tmp_args_element_value_4 = par_cert;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 639;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_5 = par_request;
CHECK_OBJECT(par_proxies);
tmp_args_element_value_6 = par_proxies;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 640;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_request_url,
        call_args
    );
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_add_headers);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 641;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_3 = par_request;
CHECK_OBJECT(par_stream);
tmp_kw_call_dict_value_0_3 = par_stream;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_1_2 = par_timeout;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_2_1 = par_verify;
CHECK_OBJECT(par_cert);
tmp_kw_call_dict_value_3_1 = par_cert;
CHECK_OBJECT(par_proxies);
tmp_kw_call_dict_value_4_1 = par_proxies;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 641;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_3b182e7515c4beffcd20625e5b2f8cd9_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 641;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_request);
tmp_expression_value_5 = par_request;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_body);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_cmp_expr_left_3 = mod_consts.const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
CHECK_OBJECT(par_request);
tmp_expression_value_6 = par_request;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_headers);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_operand_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_operand_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_assign_source_4 = (tmp_res == 0) ? Py_True : Py_False;
assert(var_chunked == NULL);
Py_INCREF(tmp_assign_source_4);
var_chunked = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_timeout);
tmp_isinstance_inst_1 = par_timeout;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooooooooooooooo";
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
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_timeout);
tmp_iter_arg_1 = par_timeout;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "ooooooooooooooo";
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
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 654;
type_description_1 = "ooooooooooooooo";
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
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 654;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 654;
type_description_1 = "ooooooooooooooo";
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
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
assert(var_connect == NULL);
Py_INCREF(tmp_assign_source_8);
var_connect = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
assert(var_read == NULL);
Py_INCREF(tmp_assign_source_9);
var_read = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_5 = module_var_accessor_requests$adapters$TimeoutSauce(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutSauce);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 655;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_connect);
tmp_kw_call_value_0_1 = var_connect;
CHECK_OBJECT(var_read);
tmp_kw_call_value_1_1 = var_read;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 655;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_connect_str_plain_read_tuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = par_timeout;
    assert(old != NULL);
    par_timeout = tmp_assign_source_10;
    Py_DECREF(old);
}

}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__20_send, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__20_send, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_491c852b1d42b29f6e6948f0318c4ce1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_timeout);
tmp_format_value_1 = par_timeout;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_8e8f188db4e04013fdcca3e4bb4a6c3e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 657;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 657;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_8;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 653;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$adapters$$$function__20_send->m_frame)) {
        frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_8;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_timeout);
tmp_isinstance_inst_2 = par_timeout;
tmp_isinstance_cls_2 = module_var_accessor_requests$adapters$TimeoutSauce(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutSauce);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 661;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
tmp_called_value_6 = module_var_accessor_requests$adapters$TimeoutSauce(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutSauce);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 664;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_0_2 = par_timeout;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_1_2 = par_timeout;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 664;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_connect_str_plain_read_tuple);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_timeout;
    assert(old != NULL);
    par_timeout = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_4:;
branch_end_2:;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
CHECK_OBJECT(var_conn);
tmp_expression_value_7 = var_conn;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_urlopen);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(par_request);
tmp_expression_value_8 = par_request;
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_method);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 668;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_url);
tmp_kw_call_value_1_3 = var_url;
CHECK_OBJECT(par_request);
tmp_expression_value_9 = par_request;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_body);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 670;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(par_request);
tmp_expression_value_10 = par_request;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_headers);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 671;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_9;
}
tmp_kw_call_value_4_1 = Py_False;
tmp_kw_call_value_5_1 = Py_False;
tmp_kw_call_value_6_1 = Py_False;
tmp_kw_call_value_7_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_kw_call_value_8_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_max_retries);
if (tmp_kw_call_value_8_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_3_1);

exception_lineno = 676;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_9;
}
if (par_timeout == NULL) {
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_8_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 677;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_9;
}

tmp_kw_call_value_9_1 = par_timeout;
CHECK_OBJECT(var_chunked);
tmp_kw_call_value_10_1 = var_chunked;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 667;
{
    PyObject *kw_values[11] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1};

    tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_7149c57201452e78b39f8baab8556489_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_8_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_9;
}
assert(var_resp == NULL);
var_resp = tmp_assign_source_12;
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__20_send, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__20_send, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_tuple_element_2;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_tuple_element_2 = module_var_accessor_requests$adapters$ProtocolError(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 681;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_5, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = PyExc_OSError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_5, 1, tmp_tuple_element_2);
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 681;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_13); 
assert(var_err == NULL);
Py_INCREF(tmp_assign_source_13);
var_err = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
tmp_called_value_8 = module_var_accessor_requests$adapters$ConnectionError(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 682;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(var_err);
tmp_kw_call_arg_value_0_4 = var_err;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_4 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 682;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_11;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_11;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 682;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_11;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_err);
var_err = NULL;

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = module_var_accessor_requests$adapters$MaxRetryError(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MaxRetryError);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 684;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_14); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_14);
var_e = tmp_assign_source_14;
}
// Tried code:
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_e);
tmp_expression_value_12 = var_e;
tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_reason);
if (tmp_isinstance_inst_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_isinstance_cls_3 = module_var_accessor_requests$adapters$ConnectTimeoutError(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectTimeoutError);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_3);

exception_lineno = 685;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_inst_3);
Py_DECREF(tmp_isinstance_inst_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_e);
tmp_expression_value_13 = var_e;
tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_reason);
if (tmp_isinstance_inst_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_isinstance_cls_4 = module_var_accessor_requests$adapters$NewConnectionError(tstate);
if (unlikely(tmp_isinstance_cls_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NewConnectionError);
}

if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_4);

exception_lineno = 687;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_inst_4);
Py_DECREF(tmp_isinstance_inst_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_dict_value_0_5;
tmp_called_value_9 = module_var_accessor_requests$adapters$ConnectTimeout(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectTimeout);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 688;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_5 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_5 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 688;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
    tmp_raise_type_input_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 688;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_12;
}
branch_no_8:;
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_e);
tmp_expression_value_14 = var_e;
tmp_isinstance_inst_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_reason);
if (tmp_isinstance_inst_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_isinstance_cls_5 = module_var_accessor_requests$adapters$ResponseError(tstate);
if (unlikely(tmp_isinstance_cls_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseError);
}

if (tmp_isinstance_cls_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_5);

exception_lineno = 690;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
CHECK_OBJECT(tmp_isinstance_inst_5);
Py_DECREF(tmp_isinstance_inst_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_10;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_kw_call_dict_value_0_6;
tmp_called_value_10 = module_var_accessor_requests$adapters$RetryError(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RetryError);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 691;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_6 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_6 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 691;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
    tmp_raise_type_input_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 691;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_12;
}
branch_no_9:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_isinstance_inst_6;
PyObject *tmp_isinstance_cls_6;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_e);
tmp_expression_value_15 = var_e;
tmp_isinstance_inst_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_reason);
if (tmp_isinstance_inst_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 693;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_isinstance_cls_6 = module_var_accessor_requests$adapters$_ProxyError(tstate);
if (unlikely(tmp_isinstance_cls_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ProxyError);
}

if (tmp_isinstance_cls_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_6);

exception_lineno = 693;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
CHECK_OBJECT(tmp_isinstance_inst_6);
Py_DECREF(tmp_isinstance_inst_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 693;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_value_11;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_dict_value_0_7;
tmp_called_value_11 = module_var_accessor_requests$adapters$ProxyError(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 694;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_7 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_7 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 694;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
    tmp_raise_type_input_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_raise_type_6 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 694;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_12;
}
branch_no_10:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_isinstance_inst_7;
PyObject *tmp_isinstance_cls_7;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(var_e);
tmp_expression_value_16 = var_e;
tmp_isinstance_inst_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_reason);
if (tmp_isinstance_inst_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_isinstance_cls_7 = module_var_accessor_requests$adapters$_SSLError(tstate);
if (unlikely(tmp_isinstance_cls_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SSLError);
}

if (tmp_isinstance_cls_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_7);

exception_lineno = 696;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
CHECK_OBJECT(tmp_isinstance_inst_7);
Py_DECREF(tmp_isinstance_inst_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_raise_type_input_6;
PyObject *tmp_called_value_12;
PyObject *tmp_kw_call_arg_value_0_8;
PyObject *tmp_kw_call_dict_value_0_8;
tmp_called_value_12 = module_var_accessor_requests$adapters$SSLError(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 698;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_8 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_8 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 698;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_8};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
    tmp_raise_type_input_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 698;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_raise_type_7 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_6);
CHECK_OBJECT(tmp_raise_type_input_6);
Py_DECREF(tmp_raise_type_input_6);
if (tmp_raise_type_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 698;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 698;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_12;
}
branch_no_11:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_raise_type_input_7;
PyObject *tmp_called_value_13;
PyObject *tmp_kw_call_arg_value_0_9;
PyObject *tmp_kw_call_dict_value_0_9;
tmp_called_value_13 = module_var_accessor_requests$adapters$ConnectionError(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 700;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_9 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_9 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 700;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_9};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
    tmp_raise_type_input_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_raise_type_8 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_7);
CHECK_OBJECT(tmp_raise_type_input_7);
Py_DECREF(tmp_raise_type_input_7);
if (tmp_raise_type_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 700;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_12;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_10;
// End of try:
goto branch_end_6;
branch_no_6:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = module_var_accessor_requests$adapters$ClosedPoolError(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClosedPoolError);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 702;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 702;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_12 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_15); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_15);
var_e = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_raise_type_9;
PyObject *tmp_raise_type_input_8;
PyObject *tmp_called_value_14;
PyObject *tmp_kw_call_arg_value_0_10;
PyObject *tmp_kw_call_dict_value_0_10;
tmp_called_value_14 = module_var_accessor_requests$adapters$ConnectionError(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 703;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_10 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_10 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 703;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_10};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
    tmp_raise_type_input_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 703;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_13;
}
tmp_raise_type_9 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_8);
CHECK_OBJECT(tmp_raise_type_input_8);
Py_DECREF(tmp_raise_type_input_8);
if (tmp_raise_type_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 703;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_13;
}
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 703;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_13;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_10;
// End of try:
goto branch_end_12;
branch_no_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = module_var_accessor_requests$adapters$_ProxyError(tstate);
if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ProxyError);
}

if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 705;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_16); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_16);
var_e = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_raise_type_10;
PyObject *tmp_raise_type_input_9;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_7;
tmp_called_value_15 = module_var_accessor_requests$adapters$ProxyError(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 706;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(var_e);
tmp_args_element_value_7 = var_e;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 706;
tmp_raise_type_input_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_7);
if (tmp_raise_type_input_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_14;
}
tmp_raise_type_10 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_9);
CHECK_OBJECT(tmp_raise_type_input_9);
Py_DECREF(tmp_raise_type_input_9);
if (tmp_raise_type_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_14;
}
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 706;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
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

goto try_except_handler_10;
// End of try:
goto branch_end_13;
branch_no_13:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_tuple_element_3;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_tuple_element_3 = module_var_accessor_requests$adapters$_SSLError(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SSLError);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_9, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_requests$adapters$_HTTPError(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HTTPError);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_9, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_cmp_expr_right_9);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_17); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_17);
var_e = tmp_assign_source_17;
}
// Tried code:
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_isinstance_inst_8;
PyObject *tmp_isinstance_cls_8;
CHECK_OBJECT(var_e);
tmp_isinstance_inst_8 = var_e;
tmp_isinstance_cls_8 = module_var_accessor_requests$adapters$_SSLError(tstate);
if (unlikely(tmp_isinstance_cls_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SSLError);
}

if (tmp_isinstance_cls_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 709;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_8, tmp_isinstance_cls_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_raise_type_input_10;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_arg_value_0_11;
PyObject *tmp_kw_call_dict_value_0_11;
tmp_called_value_16 = module_var_accessor_requests$adapters$SSLError(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 711;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_11 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_11 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 711;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_11};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
    tmp_raise_type_input_10 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_raise_type_11 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_10);
CHECK_OBJECT(tmp_raise_type_input_10);
Py_DECREF(tmp_raise_type_input_10);
if (tmp_raise_type_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 711;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_15;
}
goto branch_end_15;
branch_no_15:;
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_isinstance_inst_9;
PyObject *tmp_isinstance_cls_9;
CHECK_OBJECT(var_e);
tmp_isinstance_inst_9 = var_e;
tmp_isinstance_cls_9 = module_var_accessor_requests$adapters$ReadTimeoutError(tstate);
if (unlikely(tmp_isinstance_cls_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadTimeoutError);
}

if (tmp_isinstance_cls_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 712;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_9, tmp_isinstance_cls_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_raise_type_input_11;
PyObject *tmp_called_value_17;
PyObject *tmp_kw_call_arg_value_0_12;
PyObject *tmp_kw_call_dict_value_0_12;
tmp_called_value_17 = module_var_accessor_requests$adapters$ReadTimeout(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadTimeout);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 713;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_12 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_12 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 713;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_12};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
    tmp_raise_type_input_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_raise_type_12 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_11);
CHECK_OBJECT(tmp_raise_type_input_11);
Py_DECREF(tmp_raise_type_input_11);
if (tmp_raise_type_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 713;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_15;
}
goto branch_end_16;
branch_no_16:;
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_isinstance_inst_10;
PyObject *tmp_isinstance_cls_10;
CHECK_OBJECT(var_e);
tmp_isinstance_inst_10 = var_e;
tmp_isinstance_cls_10 = module_var_accessor_requests$adapters$_InvalidHeader(tstate);
if (unlikely(tmp_isinstance_cls_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__InvalidHeader);
}

if (tmp_isinstance_cls_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 714;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_10, tmp_isinstance_cls_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 714;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_13;
PyObject *tmp_raise_type_input_12;
PyObject *tmp_called_value_18;
PyObject *tmp_kw_call_arg_value_0_13;
PyObject *tmp_kw_call_dict_value_0_13;
tmp_called_value_18 = module_var_accessor_requests$adapters$InvalidHeader(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 715;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_0_13 = var_e;
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_13 = par_request;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 715;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_13};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_13};
    tmp_raise_type_input_12 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts.const_tuple_str_plain_request_tuple);
}

if (tmp_raise_type_input_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
tmp_raise_type_13 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_12);
CHECK_OBJECT(tmp_raise_type_input_12);
Py_DECREF(tmp_raise_type_input_12);
if (tmp_raise_type_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_15;
}
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 715;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_15;
}
goto branch_end_17;
branch_no_17:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 717;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$adapters$$$function__20_send->m_frame)) {
        frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_15;
branch_end_17:;
branch_end_16:;
branch_end_15:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_10;
// End of try:
goto branch_end_14;
branch_no_14:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 666;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$adapters$$$function__20_send->m_frame)) {
        frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_10;
branch_end_14:;
branch_end_13:;
branch_end_12:;
branch_end_6:;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_8 = par_request;
CHECK_OBJECT(var_resp);
tmp_args_element_value_9 = var_resp;
frame_frame_requests$adapters$$$function__20_send->m_frame.f_lineno = 719;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_build_response,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$function__20_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$function__20_send->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$function__20_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$function__20_send,
    type_description_1,
    par_self,
    par_request,
    par_stream,
    par_timeout,
    par_verify,
    par_cert,
    par_proxies,
    var_conn,
    var_e,
    var_url,
    var_chunked,
    var_connect,
    var_read,
    var_resp,
    var_err
);


// Release cached frame if used for exception.
if (frame_frame_requests$adapters$$$function__20_send == cache_frame_frame_requests$adapters$$$function__20_send) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$adapters$$$function__20_send);
    cache_frame_frame_requests$adapters$$$function__20_send = NULL;
}

assertFrameObject(frame_frame_requests$adapters$$$function__20_send);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
CHECK_OBJECT(var_url);
CHECK_OBJECT(var_url);
Py_DECREF(var_url);
var_url = NULL;
CHECK_OBJECT(var_chunked);
CHECK_OBJECT(var_chunked);
Py_DECREF(var_chunked);
var_chunked = NULL;
Py_XDECREF(var_connect);
var_connect = NULL;
Py_XDECREF(var_read);
var_read = NULL;
CHECK_OBJECT(var_resp);
CHECK_OBJECT(var_resp);
Py_DECREF(var_resp);
var_resp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_timeout);
par_timeout = NULL;
Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_chunked);
var_chunked = NULL;
Py_XDECREF(var_connect);
var_connect = NULL;
Py_XDECREF(var_read);
var_read = NULL;
Py_XDECREF(var_resp);
var_resp = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_proxies);
Py_DECREF(par_proxies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__10_proxy_manager_for(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__10_proxy_manager_for,
        mod_consts.const_str_plain_proxy_manager_for,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5209e5e03de97a661af697c02841e7a,
#endif
        code_objects_6afdbd10e676a2e6a4d824614f39cdad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_bfa093c614acefeadc8693bd26119f2c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__11_cert_verify(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__11_cert_verify,
        mod_consts.const_str_plain_cert_verify,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_94f8254fa141c33ed65ea27f59ed9d62,
#endif
        code_objects_891879225e2de14371d0c1c5b7c86a35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_f0960f14478e5a2fef4fc81736af77be,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__12_build_response(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__12_build_response,
        mod_consts.const_str_plain_build_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9,
#endif
        code_objects_750f76332a61b81f01ca363b48c7ce97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_64ad7ce704a2035b2f3a90397c090ca7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__13_build_connection_pool_key_attributes(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__13_build_connection_pool_key_attributes,
        mod_consts.const_str_plain_build_connection_pool_key_attributes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_60d73be6981b4a412bfa703f4dbb9cb7,
#endif
        code_objects_23d6d14ebe39f4f4551e34f3cf9a8782,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_fc70d500cd9e3b9636f1d220bb53edd2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__14_get_connection_with_tls_context(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__14_get_connection_with_tls_context,
        mod_consts.const_str_plain_get_connection_with_tls_context,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e6d4030088215baa9393b629c293b48d,
#endif
        code_objects_570ee653490ab0c86933d43717980f2d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_dd0b53ddf647f77761c7bf199ddaa2fd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__15_get_connection(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__15_get_connection,
        mod_consts.const_str_plain_get_connection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3,
#endif
        code_objects_451432b54629ac2a89da6c993d499589,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_6a65f5010eb192e9c06f6704e1431f81,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__16_close(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__16_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f,
#endif
        code_objects_ed4e6fc619321b000c440666f63627d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_ab462680d0487f574012e6a7b3ea2cfd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__17_request_url(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__17_request_url,
        mod_consts.const_str_plain_request_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9e923e371e62d15476d82fc18912a89,
#endif
        code_objects_57a0eec6006546c5be34b428a4997961,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_cf164d66984f410735aac772ffcc2043,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__18_add_headers(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_add_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3d43a254760496216c28528a54f67ae7,
#endif
        code_objects_7bedcb34cc2a18886dd934dd5620205e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_0e90a733b836dccf8b7d0124401998c8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__19_proxy_headers(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__19_proxy_headers,
        mod_consts.const_str_plain_proxy_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bb4ba86a57b66cae0a694169c648e9c1,
#endif
        code_objects_e0c9593b7938c9cc59edda809578dc0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_dbc92a2b5167052219bbed5a2180ad0b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__1_SOCKSProxyManager(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__1_SOCKSProxyManager,
        mod_consts.const_str_plain_SOCKSProxyManager,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_357a53e03988e9c92be58206ab92fd9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__20_send(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__20_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8eda945652fc1bca806aa3da22ec6fa8,
#endif
        code_objects_88969b0051d1275021ab1d5bf42ec826,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_fff293e3e7fde90d706cca79c91fa423,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__2__urllib3_request_context(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__2__urllib3_request_context,
        mod_consts.const_str_plain__urllib3_request_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d39e12c0d373727865750beda4013629,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__3___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_58d849cc27a8bb92406c0789468590b3,
#endif
        code_objects_806f9e09b5256a226d8cd8b05c789430,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__4_send(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__4_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_46268be1785799fb5b96bebc078469e2,
#endif
        code_objects_42fff0e8769ed054c610469942e093db,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__5_close(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__5_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c2c00751ef6093a3f812bf922a66511f,
#endif
        code_objects_0889131b5e1461b70b4c4e1bcc5cd2e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_689f43089124f06b15e9987dc8e6f0cd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_afe1e7d238142b45d91be75903c1f969,
#endif
        code_objects_cf6b1c7f81440ace81fb5e9aa1038286,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__7___getstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__7___getstate__,
        mod_consts.const_str_plain___getstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_075bd0c67293e615df9afdc934c155c9,
#endif
        code_objects_6469f5447c0b5e9456cea7d56823ce2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__8___setstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__8___setstate__,
        mod_consts.const_str_plain___setstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2bdec81ec502026c4a660b15852a5925,
#endif
        code_objects_71619ec53f2fda1df02ca12edeab5539,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function__9_init_poolmanager(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function__9_init_poolmanager,
        mod_consts.const_str_plain_init_poolmanager,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc,
#endif
        code_objects_edcc9d2027b8f3da2aac0ff3e6e466d0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        mod_consts.const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd,
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

static function_impl_code const function_table_requests$adapters[] = {
impl_requests$adapters$$$function__1_SOCKSProxyManager,
impl_requests$adapters$$$function__2__urllib3_request_context,
impl_requests$adapters$$$function__3___init__,
impl_requests$adapters$$$function__4_send,
impl_requests$adapters$$$function__5_close,
impl_requests$adapters$$$function__6___init__,
impl_requests$adapters$$$function__7___getstate__,
impl_requests$adapters$$$function__8___setstate__,
impl_requests$adapters$$$function__9_init_poolmanager,
impl_requests$adapters$$$function__10_proxy_manager_for,
impl_requests$adapters$$$function__11_cert_verify,
impl_requests$adapters$$$function__12_build_response,
impl_requests$adapters$$$function__13_build_connection_pool_key_attributes,
impl_requests$adapters$$$function__14_get_connection_with_tls_context,
impl_requests$adapters$$$function__15_get_connection,
impl_requests$adapters$$$function__16_close,
impl_requests$adapters$$$function__17_request_url,
impl_requests$adapters$$$function__19_proxy_headers,
impl_requests$adapters$$$function__20_send,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$adapters);
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
        module_requests$adapters,
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
        function_table_requests$adapters,
        sizeof(function_table_requests$adapters) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests.adapters";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$adapters(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$adapters");

    // Store the module for future use.
    module_requests$adapters = module;

    moduledict_requests$adapters = MODULE_DICT(module_requests$adapters);

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
        PRINT_STRING("requests$adapters: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$adapters: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$adapters: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.adapters" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$adapters\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_requests$adapters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$adapters);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$adapters);
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

        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_requests$adapters$$$class__1_BaseAdapter_137 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_requests$adapters$$$class__2_HTTPAdapter_167 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$adapters$$$class__2_HTTPAdapter_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_872a4356679d08f82ae72f066772d944;
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$adapters = MAKE_MODULE_FRAME(code_objects_80f55e8a0c761011340eb536c08a8054, module_requests$adapters);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters);
assert(Py_REFCNT(frame_frame_requests$adapters) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_requests$adapters$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_requests$adapters$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_e399ba4554180f37de594a6743234f17;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 9;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 10;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_3 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 12;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_4 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ClosedPoolError_str_plain_ConnectTimeoutError_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 14;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ClosedPoolError,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ClosedPoolError);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ClosedPoolError, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ConnectTimeoutError,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ConnectTimeoutError);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_5 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_HTTPError_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 15;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_HTTPError,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HTTPError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__HTTPError, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_6 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_InvalidHeader_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 16;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_InvalidHeader,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_InvalidHeader);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__InvalidHeader, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_7 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_fb57c173311f35b536ea321b5229cd99_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 17;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_LocationValueError,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_LocationValueError);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_MaxRetryError,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_MaxRetryError);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_NewConnectionError,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_NewConnectionError);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_NewConnectionError, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_8 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ProxyError_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 23;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ProxyError,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ProxyError);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__ProxyError, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_9 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_ReadTimeoutError_str_plain_ResponseError_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 24;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ReadTimeoutError,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ReadTimeoutError);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ResponseError,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ResponseError);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError, tmp_assign_source_21);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_10 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_SSLError_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 25;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_SSLError,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_SSLError);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__SSLError, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
tmp_globals_arg_value_11 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 26;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_13 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_PoolManager,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_PoolManager);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_proxy_from_url,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_proxy_from_url);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_from_url, tmp_assign_source_25);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_867cf107290997ea3f46e9cff397e1db;
tmp_globals_arg_value_12 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_Timeout_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 27;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_Timeout,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Timeout);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutSauce, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_867cf107290997ea3f46e9cff397e1db;
tmp_globals_arg_value_13 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_parse_url_tuple;
tmp_level_value_13 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 28;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_parse_url,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_parse_url);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
tmp_globals_arg_value_14 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_Retry_tuple;
tmp_level_value_14 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 29;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_Retry,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Retry);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
tmp_globals_arg_value_15 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_create_urllib3_context_tuple;
tmp_level_value_15 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 30;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_create_urllib3_context,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_create_urllib3_context);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_auth;
tmp_globals_arg_value_16 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain__basic_auth_str_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_requests$adapters->m_frame.f_lineno = 32;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain__basic_auth_str,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain__basic_auth_str);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_compat;
tmp_globals_arg_value_17 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_basestring_str_plain_urlparse_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_requests$adapters->m_frame.f_lineno = 33;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_20 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_basestring,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_basestring);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_21 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_urlparse);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_33);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_cookies;
tmp_globals_arg_value_18 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_requests$adapters->m_frame.f_lineno = 34;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_extract_cookies_to_jar,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_extract_cookies_to_jar);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_19 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_74ab1cdfde183427e481177c0892bacc_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_requests$adapters->m_frame.f_lineno = 35;
tmp_assign_source_35 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_35;
}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_23 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ConnectionError,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_24 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ConnectTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_ConnectTimeout);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_25 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_InvalidHeader,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_26 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_InvalidProxyURL,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_InvalidProxyURL);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyURL, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_27 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_InvalidSchema,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_InvalidSchema);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchema, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_28 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_InvalidURL,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_29 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ProxyError,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ProxyError);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_30 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_ReadTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_ReadTimeout);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_31 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_RetryError,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_RetryError);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_RetryError, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_32 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_SSLError,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_SSLError);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError, tmp_assign_source_45);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_models;
tmp_globals_arg_value_20 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_Response_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_requests$adapters->m_frame.f_lineno = 47;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_Response);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_structures;
tmp_globals_arg_value_21 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_CaseInsensitiveDict_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_requests$adapters->m_frame.f_lineno = 48;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_CaseInsensitiveDict,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_CaseInsensitiveDict);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_CaseInsensitiveDict, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_22 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_cf6d9bf16affaa52981417e396a0cf83_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_requests$adapters->m_frame.f_lineno = 49;
tmp_assign_source_48 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_48;
}
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_35 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_36 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_extract_zipped_paths,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_extract_zipped_paths);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_zipped_paths, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_37 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_get_auth_from_url,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_get_auth_from_url);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_auth_from_url, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_38 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_get_encoding_from_headers,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_get_encoding_from_headers);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_get_encoding_from_headers, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_39 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_prepend_scheme_if_needed,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_prepend_scheme_if_needed);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_prepend_scheme_if_needed, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_40 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_select_proxy,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_select_proxy);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_select_proxy, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_41 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_urldefragauth,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_urldefragauth);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_urldefragauth, tmp_assign_source_55);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
tmp_globals_arg_value_23 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_SOCKSProxyManager_tuple;
tmp_level_value_23 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 60;
tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_8;
}
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_requests$adapters,
        mod_consts.const_str_plain_SOCKSProxyManager,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_SOCKSProxyManager);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKSProxyManager, tmp_assign_source_56);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
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
PyObject *tmp_assign_source_57;

tmp_assign_source_57 = MAKE_FUNCTION_requests$adapters$$$function__1_SOCKSProxyManager(tstate);

UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKSProxyManager, tmp_assign_source_57);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$adapters->m_frame)) {
        frame_frame_requests$adapters->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_9;
branch_end_1:;
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_8;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_8:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = Py_False;
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLBLOCK, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = mod_consts.const_int_pos_10;
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOLSIZE, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = const_int_0;
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RETRIES, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = Py_None;
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_POOL_TIMEOUT, tmp_assign_source_61);
}
// Tried code:
{
PyObject *tmp_assign_source_62;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_24 = (PyObject *)moduledict_requests$adapters;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = Py_None;
tmp_level_value_24 = const_int_0;
frame_frame_requests$adapters->m_frame.f_lineno = 78;
tmp_assign_source_62 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_requests$adapters$create_urllib3_context(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_urllib3_context);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto try_except_handler_10;
}
frame_frame_requests$adapters->m_frame.f_lineno = 80;
tmp_assign_source_63 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__preloaded_ssl_context, tmp_assign_source_63);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_requests$adapters$_preloaded_ssl_context(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_load_verify_locations);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_called_value_3 = module_var_accessor_requests$adapters$extract_zipped_paths(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_zipped_paths);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 82;

    goto try_except_handler_10;
}
tmp_args_element_value_2 = module_var_accessor_requests$adapters$DEFAULT_CA_BUNDLE_PATH(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_CA_BUNDLE_PATH);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 82;

    goto try_except_handler_10;
}
frame_frame_requests$adapters->m_frame.f_lineno = 82;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 82;

    goto try_except_handler_10;
}
frame_frame_requests$adapters->m_frame.f_lineno = 81;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_10);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = Py_None;
UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__preloaded_ssl_context, tmp_assign_source_64);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 77;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$adapters->m_frame)) {
        frame_frame_requests$adapters->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_11;
branch_end_2:;
goto try_end_11;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_10;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_10:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e458ea6e5114dd7edf980707d729f425);

tmp_assign_source_65 = MAKE_FUNCTION_requests$adapters$$$function__2__urllib3_request_context(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain__urllib3_request_context, tmp_assign_source_65);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_67;
}
// Tried code:
{
PyObject *tmp_assign_source_68;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_requests$adapters$$$class__1_BaseAdapter_137 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_BaseAdapter;
tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_137;
tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__3___init__(tstate, tmp_closure_1);

tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_false_none_true_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__4_send(tstate, tmp_defaults_1);

tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__5_close(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_requests$adapters$$$class__1_BaseAdapter_137, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_BaseAdapter;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_requests$adapters$$$class__1_BaseAdapter_137;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_requests$adapters->m_frame.f_lineno = 137;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto try_except_handler_14;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_69);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_68 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_68);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_requests$adapters$$$class__1_BaseAdapter_137);
locals_requests$adapters$$$class__1_BaseAdapter_137 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$adapters$$$class__1_BaseAdapter_137);
locals_requests$adapters$$$class__1_BaseAdapter_137 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 137;
goto try_except_handler_12;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAdapter, tmp_assign_source_68);
}
goto try_end_12;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_70;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_requests$adapters$BaseAdapter(tstate);
assert(!(tmp_tuple_element_2 == NULL));
tmp_assign_source_70 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_70, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_70;
}
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_71 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_73 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_73;
}
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_HTTPAdapter;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_requests$adapters->m_frame.f_lineno = 167;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_74;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_25, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_15;
}
frame_frame_requests$adapters->m_frame.f_lineno = 167;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 167;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_75;
}
branch_end_3:;
{
PyObject *tmp_assign_source_76;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_requests$adapters$$$class__2_HTTPAdapter_167 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_19fdcf2df08a408493d23f0c1c422714;
tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPAdapter;
tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_167;
tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
frame_frame_requests$adapters$$$class__2_HTTPAdapter_2 = MAKE_CLASS_FRAME(tstate, code_objects_cdca29450073120f89c2e4394585917f, module_requests$adapters, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$adapters$$$class__2_HTTPAdapter_2);
assert(Py_REFCNT(frame_frame_requests$adapters$$$class__2_HTTPAdapter_2) == 2);

// Framed code:
tmp_dictset_value = MAKE_LIST5(tstate, mod_consts.const_list_b210aeadbd087eaaf628d5f4d13acd25_list);
tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain___attrs__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_5;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_tuple_element_5 = PyObject_GetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_DEFAULT_POOLSIZE);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = module_var_accessor_requests$adapters$DEFAULT_POOLSIZE(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_POOLSIZE);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_DEFAULT_POOLSIZE);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = module_var_accessor_requests$adapters$DEFAULT_POOLSIZE(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_POOLSIZE);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_2 = "c";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_DEFAULT_RETRIES);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = module_var_accessor_requests$adapters$DEFAULT_RETRIES(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_RETRIES);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_2 = "c";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_DEFAULT_POOLBLOCK);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = module_var_accessor_requests$adapters$DEFAULT_POOLBLOCK(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "c";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_defaults_2, 3, tmp_tuple_element_5);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_defaults_2);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_closure_2[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__6___init__(tstate, tmp_defaults_2, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__7___getstate__(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain___getstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__8___setstate__(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain___setstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = PyObject_GetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_DEFAULT_POOLBLOCK);

if (tmp_tuple_element_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_6 = module_var_accessor_requests$adapters$DEFAULT_POOLBLOCK(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_POOLBLOCK);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_tuple_element_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_6);

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__9_init_poolmanager(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_init_poolmanager, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__10_proxy_manager_for(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_proxy_manager_for, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__11_cert_verify(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_cert_verify, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__12_build_response(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_build_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__13_build_connection_pool_key_attributes(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_build_connection_pool_key_attributes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__14_get_connection_with_tls_context(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_get_connection_with_tls_context, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__15_get_connection(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_get_connection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__16_close(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__17_request_url(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_request_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__18_add_headers(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_add_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__19_proxy_headers(tstate);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain_proxy_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_false_none_true_none_none_tuple;
Py_INCREF(tmp_defaults_7);

tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function__20_send(tstate, tmp_defaults_7);

tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters$$$class__2_HTTPAdapter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters$$$class__2_HTTPAdapter_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters$$$class__2_HTTPAdapter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$adapters$$$class__2_HTTPAdapter_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_requests$adapters$$$class__2_HTTPAdapter_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_17;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_d10ab4595070c929dbe860a3df229320_tuple;
tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$adapters$$$class__2_HTTPAdapter_167, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
branch_no_5:;
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_HTTPAdapter;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_requests$adapters$$$class__2_HTTPAdapter_167;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_requests$adapters->m_frame.f_lineno = 167;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto try_except_handler_17;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_77);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_76 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_76);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_requests$adapters$$$class__2_HTTPAdapter_167);
locals_requests$adapters$$$class__2_HTTPAdapter_167 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$adapters$$$class__2_HTTPAdapter_167);
locals_requests$adapters$$$class__2_HTTPAdapter_167 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 167;
goto try_except_handler_15;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPAdapter, tmp_assign_source_76);
}
goto try_end_13;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
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
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
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

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$adapters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$adapters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$adapters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$adapters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$adapters", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.adapters" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$adapters);
    return module_requests$adapters;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$adapters", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

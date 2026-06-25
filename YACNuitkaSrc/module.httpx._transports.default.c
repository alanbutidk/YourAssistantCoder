/* Generated code for Python module 'httpx$_transports$default'
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



/* The "module_httpx$_transports$default" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_transports$default;
PyDictObject *moduledict_httpx$_transports$default;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_httpcore;
PyObject *const_str_plain_TimeoutException;
PyObject *const_str_plain_ConnectTimeout;
PyObject *const_str_plain_ReadTimeout;
PyObject *const_str_plain_WriteTimeout;
PyObject *const_str_plain_PoolTimeout;
PyObject *const_str_plain_NetworkError;
PyObject *const_str_plain_ConnectError;
PyObject *const_str_plain_ReadError;
PyObject *const_str_plain_WriteError;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_plain_UnsupportedProtocol;
PyObject *const_str_plain_ProtocolError;
PyObject *const_str_plain_LocalProtocolError;
PyObject *const_str_plain_RemoteProtocolError;
PyObject *const_str_plain_HTTPCORE_EXC_MAP;
PyObject *const_str_plain__load_httpcore_exceptions;
PyObject *const_str_plain_items;
PyObject *const_str_plain_mapped_exc;
PyObject *const_str_plain_map_httpcore_exceptions;
PyObject *const_str_plain__httpcore_stream;
PyObject *const_str_plain_self;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_e8d3bc878ac2510fccc6057f62bca01e;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_Proxy;
PyObject *const_tuple_str_plain_url_tuple;
PyObject *const_str_plain_create_ssl_context;
PyObject *const_tuple_str_plain_verify_str_plain_cert_str_plain_trust_env_tuple;
PyObject *const_str_plain_ConnectionPool;
PyObject *const_str_plain_max_connections;
PyObject *const_str_plain_max_keepalive_connections;
PyObject *const_str_plain_keepalive_expiry;
PyObject *const_tuple_6eb59a831c54202e22952ab7abe2b83e_tuple;
PyObject *const_str_plain__pool;
PyObject *const_str_plain_url;
PyObject *const_str_plain_scheme;
PyObject *const_tuple_str_plain_http_str_plain_https_tuple;
PyObject *const_str_plain_HTTPProxy;
PyObject *const_str_plain_raw_scheme;
PyObject *const_str_plain_raw_host;
PyObject *const_str_plain_port;
PyObject *const_str_plain_raw_path;
PyObject *const_tuple_7aa59612627d14f2d60261820390ead2_tuple;
PyObject *const_str_plain_raw_auth;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_ssl_context;
PyObject *const_tuple_0a4bf6dcfcba872ce413eb9a3ad49f35_tuple;
PyObject *const_tuple_str_plain_socks5_str_plain_socks5h_tuple;
PyObject *const_str_plain_socksio;
PyObject *const_str_digest_eaef2ad4291985534ee077daac7f0d22;
PyObject *const_str_plain_SOCKSProxy;
PyObject *const_tuple_78559815235a037a9a59b5fece20f63b_tuple;
PyObject *const_str_digest_7fbb22645fbea02c3e367de2450e7022;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_SyncByteStream;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_method;
PyObject *const_str_plain_extensions;
PyObject *const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple;
PyObject *const_str_plain_handle_request;
PyObject *const_str_plain_resp;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_status;
PyObject *const_str_plain_ResponseStream;
PyObject *const_tuple_23db96708cf20f26a9e20bfe6ecd14ab_tuple;
PyObject *const_str_plain___aiter__;
PyObject *const_str_digest_0ae2d68c75a9843250163eebac253158;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_1edd66fa313ec2f1311efabea986863b;
PyObject *const_str_plain_AsyncConnectionPool;
PyObject *const_str_plain_AsyncHTTPProxy;
PyObject *const_tuple_e7f5737223c08b2ca5411a8fb424cc35_tuple;
PyObject *const_str_plain_AsyncSOCKSProxy;
PyObject *const_str_digest_133727e47d8f93179f6f7e8895c8a7b4;
PyObject *const_str_digest_40efb293971adc61ff4277900e596e7f;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain_traceback;
PyObject *const_str_digest_24897287dca52e56734caa170573a83e;
PyObject *const_str_plain_request;
PyObject *const_str_plain_AsyncByteStream;
PyObject *const_str_plain_handle_async_request;
PyObject *const_str_plain_AsyncIterable;
PyObject *const_str_plain_AsyncResponseStream;
PyObject *const_str_digest_e7decd8417e3f72711a535ae28ff3367;
PyObject *const_str_digest_840222267e6e16cc45a012f6ca58b769;
PyObject *const_str_digest_eb3d797dc5ea18a375ffcfb3a4e601b3;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_plain__config;
PyObject *const_tuple_349e7b7f915f642566a8cf8de9a6a7bb_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_DEFAULT_LIMITS;
PyObject *const_str_plain_Limits;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_47b999e48f9ed91e8ec801fc1399f71a_tuple;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_Request_str_plain_Response_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_43b5f5d1a83f76cf477b9b1230697e89_tuple;
PyObject *const_str_plain_CertTypes;
PyObject *const_str_plain_ProxyTypes;
PyObject *const_str_plain__urls;
PyObject *const_tuple_str_plain_URL_tuple;
PyObject *const_str_plain_base;
PyObject *const_tuple_str_plain_AsyncBaseTransport_str_plain_BaseTransport_tuple;
PyObject *const_str_plain_AsyncBaseTransport;
PyObject *const_str_plain_BaseTransport;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain_T_str_plain_HTTPTransport_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain_T;
PyObject *const_tuple_str_plain_A_str_plain_AsyncHTTPTransport_tuple;
PyObject *const_str_plain_A;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Tuple;
PyObject *const_tuple_type_int_type_int_type_int_tuple;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_tuple_type_int_type_int_none_type_int_tuple;
PyObject *const_str_plain_SOCKET_OPTION;
PyObject *const_str_plain_AsyncHTTPTransport;
PyObject *const_str_plain_HTTPTransport;
PyObject *const_str_digest_fd936862814466884dbc3c4566cd88a3;
PyObject *const_dict_aeded7d868009258d17a73b177502c22;
PyObject *const_str_plain_contextmanager;
PyObject *const_dict_293c969e9c670524ff9a46935f42e838;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_121;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_9b004efb1c300d14996eb9634213bc01;
PyObject *const_str_digest_20595aa2abfb02511dedc306f8a9c394;
PyObject *const_dict_792443ad00eade00425fbf2e698fefb3;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_0febfaabddbb5693eadb941240b5e438;
PyObject *const_tuple_str_plain__httpcore_stream_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_135;
PyObject *const_dict_c164baf280cc2a01cb2ea3e7f78af35c;
PyObject *const_str_digest_a50a2390f1c5cda2473d2d87f712ad80;
PyObject *const_dict_74db876f2eed57fce7eecdf8c70e5747;
PyObject *const_str_digest_e499e226dd2f9d29c18d78397a664541;
PyObject *const_dict_fe1ed8e2cb510605785a9bb17cc90b19;
PyObject *const_str_digest_5026254879305f54aba7e64418b54c2c;
PyObject *const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4;
PyObject *const_str_digest_cd9ef3d01e4f0838a846fb28a3d70aba;
PyObject *const_str_digest_8b091a9d09dcdd9ca92338f172a0715e;
PyObject *const_tuple_str_plain__pool_tuple;
PyObject *const_int_pos_265;
PyObject *const_dict_d9081c362e28860f6bc08524b998d86c;
PyObject *const_str_digest_7b75492f36ea1612c61417cfc7a3337c;
PyObject *const_dict_6f0eedf5fa97178f67c35f0129bdbeae;
PyObject *const_int_pos_279;
PyObject *const_str_digest_4c8cac8bca16b8e1ace50d7b62b433e8;
PyObject *const_dict_53b9fad8417623e59559725c432d2457;
PyObject *const_str_digest_be896b15c2d672d310f2c32715610987;
PyObject *const_str_digest_eab651bf2b10691b5bb1d22352bd9d54;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple;
PyObject *const_tuple_str_plain_self_str_plain_part_tuple;
PyObject *const_tuple_d2fd65563657d670e94d813057df3241_tuple;
PyObject *const_tuple_str_plain_self_str_plain_httpcore_stream_tuple;
PyObject *const_tuple_str_plain_httpcore_tuple;
PyObject *const_tuple_660537c82620f01e595341fc4ed4d47c_tuple;
PyObject *const_tuple_b51e174071ac3d0b3f39ed2a6d4b65dc_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[178];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._transports.default"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpcore);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutException);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteTimeout);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolTimeout);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkError);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectError);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadError);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteError);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_httpcore_exceptions);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_mapped_exc);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_map_httpcore_exceptions);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__httpcore_stream);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8d3bc878ac2510fccc6057f62bca01e);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Proxy);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_ssl_context);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_verify_str_plain_cert_str_plain_trust_env_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionPool);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_connections);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_keepalive_connections);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_keepalive_expiry);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_6eb59a831c54202e22952ab7abe2b83e_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__pool);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPProxy);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_scheme);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_host);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_auth);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_0a4bf6dcfcba872ce413eb9a3ad49f35_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socks5_str_plain_socks5h_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_socksio);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_eaef2ad4291985534ee077daac7f0d22);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKSProxy);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_78559815235a037a9a59b5fece20f63b_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_7fbb22645fbea02c3e367de2450e7022);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_request);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_resp);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseStream);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_23db96708cf20f26a9e20bfe6ecd14ab_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ae2d68c75a9843250163eebac253158);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_1edd66fa313ec2f1311efabea986863b);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPProxy);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_e7f5737223c08b2ca5411a8fb424cc35_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSOCKSProxy);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_133727e47d8f93179f6f7e8895c8a7b4);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_40efb293971adc61ff4277900e596e7f);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_exc_type);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_exc_value);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_traceback);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_24897287dca52e56734caa170573a83e);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResponseStream);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7decd8417e3f72711a535ae28ff3367);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_840222267e6e16cc45a012f6ca58b769);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb3d797dc5ea18a375ffcfb3a4e601b3);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__config);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_349e7b7f915f642566a8cf8de9a6a7bb_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_LIMITS);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_Limits);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_47b999e48f9ed91e8ec801fc1399f71a_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_43b5f5d1a83f76cf477b9b1230697e89_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertTypes);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyTypes);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__urls);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_base);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBaseTransport_str_plain_BaseTransport_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBaseTransport);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseTransport);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_str_plain_HTTPTransport_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_A_str_plain_AsyncHTTPTransport_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_A);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_none_type_int_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPTransport);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPTransport);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd936862814466884dbc3c4566cd88a3);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_aeded7d868009258d17a73b177502c22);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_293c969e9c670524ff9a46935f42e838);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_int_pos_121);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_9b004efb1c300d14996eb9634213bc01);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_20595aa2abfb02511dedc306f8a9c394);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_0febfaabddbb5693eadb941240b5e438);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__httpcore_stream_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_135);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_c164baf280cc2a01cb2ea3e7f78af35c);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_a50a2390f1c5cda2473d2d87f712ad80);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_74db876f2eed57fce7eecdf8c70e5747);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_e499e226dd2f9d29c18d78397a664541);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_5026254879305f54aba7e64418b54c2c);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd9ef3d01e4f0838a846fb28a3d70aba);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b091a9d09dcdd9ca92338f172a0715e);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pool_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_265);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_d9081c362e28860f6bc08524b998d86c);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b75492f36ea1612c61417cfc7a3337c);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_279);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c8cac8bca16b8e1ace50d7b62b433e8);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_dict_53b9fad8417623e59559725c432d2457);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_be896b15c2d672d310f2c32715610987);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_eab651bf2b10691b5bb1d22352bd9d54);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_part_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_d2fd65563657d670e94d813057df3241_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_httpcore_stream_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_httpcore_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_660537c82620f01e595341fc4ed4d47c_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_b51e174071ac3d0b3f39ed2a6d4b65dc_tuple);
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
void checkModuleConstants_httpx$_transports$default(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpcore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpcore);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutException);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectTimeout);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadTimeout);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteTimeout);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PoolTimeout);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NetworkError);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectError);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadError);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteError);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnsupportedProtocol);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocalProtocolError);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RemoteProtocolError);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPCORE_EXC_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_httpcore_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_httpcore_exceptions);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_mapped_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mapped_exc);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_map_httpcore_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_map_httpcore_exceptions);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__httpcore_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__httpcore_stream);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8d3bc878ac2510fccc6057f62bca01e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8d3bc878ac2510fccc6057f62bca01e);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Proxy);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_ssl_context);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_verify_str_plain_cert_str_plain_trust_env_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_verify_str_plain_cert_str_plain_trust_env_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionPool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionPool);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_connections);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_keepalive_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_keepalive_connections);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_keepalive_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keepalive_expiry);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_6eb59a831c54202e22952ab7abe2b83e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6eb59a831c54202e22952ab7abe2b83e_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__pool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pool);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_http_str_plain_https_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPProxy);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_scheme);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_host);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_path);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_auth);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl_context);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_0a4bf6dcfcba872ce413eb9a3ad49f35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a4bf6dcfcba872ce413eb9a3ad49f35_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socks5_str_plain_socks5h_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_socks5_str_plain_socks5h_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_socksio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socksio);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_eaef2ad4291985534ee077daac7f0d22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eaef2ad4291985534ee077daac7f0d22);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKSProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKSProxy);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_78559815235a037a9a59b5fece20f63b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_78559815235a037a9a59b5fece20f63b_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_7fbb22645fbea02c3e367de2450e7022));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7fbb22645fbea02c3e367de2450e7022);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncByteStream);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_request);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_resp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resp);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseStream);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_23db96708cf20f26a9e20bfe6ecd14ab_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_23db96708cf20f26a9e20bfe6ecd14ab_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___aiter__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ae2d68c75a9843250163eebac253158));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ae2d68c75a9843250163eebac253158);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_1edd66fa313ec2f1311efabea986863b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1edd66fa313ec2f1311efabea986863b);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConnectionPool);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTPProxy);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_e7f5737223c08b2ca5411a8fb424cc35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e7f5737223c08b2ca5411a8fb424cc35_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSOCKSProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncSOCKSProxy);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_133727e47d8f93179f6f7e8895c8a7b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_133727e47d8f93179f6f7e8895c8a7b4);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_40efb293971adc61ff4277900e596e7f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_40efb293971adc61ff4277900e596e7f);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_exc_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exc_type);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_exc_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exc_value);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_traceback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_traceback);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_24897287dca52e56734caa170573a83e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24897287dca52e56734caa170573a83e);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncByteStream);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_async_request);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterable);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResponseStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncResponseStream);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7decd8417e3f72711a535ae28ff3367));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7decd8417e3f72711a535ae28ff3367);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_840222267e6e16cc45a012f6ca58b769));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_840222267e6e16cc45a012f6ca58b769);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb3d797dc5ea18a375ffcfb3a4e601b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb3d797dc5ea18a375ffcfb3a4e601b3);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__config);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_349e7b7f915f642566a8cf8de9a6a7bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_349e7b7f915f642566a8cf8de9a6a7bb_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_LIMITS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_LIMITS);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_Limits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Limits);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_47b999e48f9ed91e8ec801fc1399f71a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_47b999e48f9ed91e8ec801fc1399f71a_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_43b5f5d1a83f76cf477b9b1230697e89_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43b5f5d1a83f76cf477b9b1230697e89_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CertTypes);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyTypes);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__urls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__urls);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_URL_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBaseTransport_str_plain_BaseTransport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncBaseTransport_str_plain_BaseTransport_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBaseTransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBaseTransport);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseTransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseTransport);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_str_plain_HTTPTransport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_str_plain_HTTPTransport_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_A_str_plain_AsyncHTTPTransport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_A_str_plain_AsyncHTTPTransport_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_A));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_A);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_int_type_int_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_none_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_int_none_type_int_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKET_OPTION);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPTransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTPTransport);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPTransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPTransport);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd936862814466884dbc3c4566cd88a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd936862814466884dbc3c4566cd88a3);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_aeded7d868009258d17a73b177502c22));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aeded7d868009258d17a73b177502c22);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_293c969e9c670524ff9a46935f42e838));
CHECK_OBJECT_DEEP(mod_consts.const_dict_293c969e9c670524ff9a46935f42e838);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_int_pos_121));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_121);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_9b004efb1c300d14996eb9634213bc01));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9b004efb1c300d14996eb9634213bc01);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_20595aa2abfb02511dedc306f8a9c394));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20595aa2abfb02511dedc306f8a9c394);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_0febfaabddbb5693eadb941240b5e438));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0febfaabddbb5693eadb941240b5e438);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__httpcore_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__httpcore_stream_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_135));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_135);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_c164baf280cc2a01cb2ea3e7f78af35c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c164baf280cc2a01cb2ea3e7f78af35c);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_a50a2390f1c5cda2473d2d87f712ad80));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a50a2390f1c5cda2473d2d87f712ad80);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_74db876f2eed57fce7eecdf8c70e5747));
CHECK_OBJECT_DEEP(mod_consts.const_dict_74db876f2eed57fce7eecdf8c70e5747);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_e499e226dd2f9d29c18d78397a664541));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e499e226dd2f9d29c18d78397a664541);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_5026254879305f54aba7e64418b54c2c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5026254879305f54aba7e64418b54c2c);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd9ef3d01e4f0838a846fb28a3d70aba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd9ef3d01e4f0838a846fb28a3d70aba);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b091a9d09dcdd9ca92338f172a0715e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b091a9d09dcdd9ca92338f172a0715e);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__pool_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_265));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_265);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_d9081c362e28860f6bc08524b998d86c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d9081c362e28860f6bc08524b998d86c);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b75492f36ea1612c61417cfc7a3337c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b75492f36ea1612c61417cfc7a3337c);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_279));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_279);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c8cac8bca16b8e1ace50d7b62b433e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c8cac8bca16b8e1ace50d7b62b433e8);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_dict_53b9fad8417623e59559725c432d2457));
CHECK_OBJECT_DEEP(mod_consts.const_dict_53b9fad8417623e59559725c432d2457);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_be896b15c2d672d310f2c32715610987));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be896b15c2d672d310f2c32715610987);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_eab651bf2b10691b5bb1d22352bd9d54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eab651bf2b10691b5bb1d22352bd9d54);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_part_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_part_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_d2fd65563657d670e94d813057df3241_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d2fd65563657d670e94d813057df3241_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_httpcore_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_httpcore_stream_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_httpcore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_httpcore_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_660537c82620f01e595341fc4ed4d47c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_660537c82620f01e595341fc4ed4d47c_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_b51e174071ac3d0b3f39ed2a6d4b65dc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b51e174071ac3d0b3f39ed2a6d4b65dc_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 31
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
static PyObject *module_var_accessor_httpx$_transports$default$AsyncBaseTransport(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncBaseTransport);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncBaseTransport, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncBaseTransport);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncBaseTransport, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$AsyncByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$AsyncResponseStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResponseStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncResponseStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncResponseStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncResponseStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncResponseStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResponseStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResponseStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResponseStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$BaseTransport(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseTransport);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseTransport, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseTransport);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseTransport, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$ConnectError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$ConnectTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$DEFAULT_LIMITS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_LIMITS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_LIMITS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_LIMITS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_LIMITS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_LIMITS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_LIMITS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_LIMITS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_LIMITS);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$HTTPCORE_EXC_MAP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPCORE_EXC_MAP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPCORE_EXC_MAP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$LocalProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocalProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocalProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocalProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocalProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$NetworkError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NetworkError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NetworkError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NetworkError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NetworkError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$PoolTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolTimeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolTimeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolTimeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolTimeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$ProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$Proxy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Proxy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Proxy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Proxy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Proxy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Proxy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Proxy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Proxy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Proxy);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$ProxyError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$ReadError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$ReadTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$RemoteProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RemoteProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RemoteProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RemoteProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RemoteProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$ResponseStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$SyncByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$TimeoutException(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutException);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutException, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutException);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutException, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$URL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$UnsupportedProtocol(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnsupportedProtocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnsupportedProtocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnsupportedProtocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnsupportedProtocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$WriteError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WriteError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WriteError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WriteError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WriteError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteError);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$WriteTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WriteTimeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WriteTimeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WriteTimeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WriteTimeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$_load_httpcore_exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain__load_httpcore_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_httpcore_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_httpcore_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_httpcore_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_httpcore_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain__load_httpcore_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain__load_httpcore_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__load_httpcore_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$contextlib(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$create_ssl_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_create_ssl_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_ssl_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_ssl_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_ssl_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_ssl_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_create_ssl_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_create_ssl_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_ssl_context);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$default$map_httpcore_exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$default->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$default->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_map_httpcore_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$default->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_map_httpcore_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_map_httpcore_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_map_httpcore_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_map_httpcore_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_map_httpcore_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_map_httpcore_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_map_httpcore_exceptions);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4d6bb9f139854f3361b8d9faa42e41db;
static PyCodeObject *code_objects_7ac9551b5beeef53d32f5aa89ca7faa8;
static PyCodeObject *code_objects_e211fedc286163f7d0fbbdff211be6b6;
static PyCodeObject *code_objects_0023dac8fb20e98aaee76c0f2b28f66c;
static PyCodeObject *code_objects_f135e1a5cce6675089909a7a4946684d;
static PyCodeObject *code_objects_3701d584c7695004f6ca6ebb771f6e76;
static PyCodeObject *code_objects_a6700f245503f8c8908339b2c6d559d5;
static PyCodeObject *code_objects_5fd149eb94ba2f7ad6749dc103b828ce;
static PyCodeObject *code_objects_7e4bacaf3cadd430e1060651ddb59e12;
static PyCodeObject *code_objects_2b558b3f90438fa94aec18c5bb0cfb76;
static PyCodeObject *code_objects_bf402a84fd7478e56fc8615baadb4b28;
static PyCodeObject *code_objects_3a74b4eceda36b6a45f9cfb39e577e5c;
static PyCodeObject *code_objects_1afc5cfca5f5925cfca169e551dd533b;
static PyCodeObject *code_objects_807ad1d69b96ab6e1d90f821f9ccaeb2;
static PyCodeObject *code_objects_726f30542686230bb3f598b128ab7eed;
static PyCodeObject *code_objects_e6de24aad1250b870387188ef10321c0;
static PyCodeObject *code_objects_ae09872eec21cb525b1c8d4b8c870d40;
static PyCodeObject *code_objects_0294505fe1a8bbf36fd00b0e63bb32be;
static PyCodeObject *code_objects_cf2cee29acfdb711c280d624f3aa741a;
static PyCodeObject *code_objects_d86abb3c9a84ca6e26971b2c98b9244f;
static PyCodeObject *code_objects_4f990ce73199b00a6ad2821b5c11a8b5;
static PyCodeObject *code_objects_91eec690f32a8694a62469d47576d770;
static PyCodeObject *code_objects_37553bf175825487bfa104382995a833;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_be896b15c2d672d310f2c32715610987); CHECK_OBJECT(module_filename_obj);
code_objects_4d6bb9f139854f3361b8d9faa42e41db = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_eab651bf2b10691b5bb1d22352bd9d54, mod_consts.const_str_digest_eab651bf2b10691b5bb1d22352bd9d54, NULL, NULL, 0, 0, 0);
code_objects_7ac9551b5beeef53d32f5aa89ca7faa8 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncHTTPTransport, mod_consts.const_str_plain_AsyncHTTPTransport, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e211fedc286163f7d0fbbdff211be6b6 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncResponseStream, mod_consts.const_str_plain_AsyncResponseStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0023dac8fb20e98aaee76c0f2b28f66c = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTPTransport, mod_consts.const_str_plain_HTTPTransport, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f135e1a5cce6675089909a7a4946684d = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ResponseStream, mod_consts.const_str_plain_ResponseStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3701d584c7695004f6ca6ebb771f6e76 = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aenter__, mod_consts.const_str_digest_40efb293971adc61ff4277900e596e7f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a6700f245503f8c8908339b2c6d559d5 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aexit__, mod_consts.const_str_digest_24897287dca52e56734caa170573a83e, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, NULL, 4, 0, 0);
code_objects_5fd149eb94ba2f7ad6749dc103b828ce = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_0ae2d68c75a9843250163eebac253158, mod_consts.const_tuple_str_plain_self_str_plain_part_tuple, NULL, 1, 0, 0);
code_objects_7e4bacaf3cadd430e1060651ddb59e12 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_e499e226dd2f9d29c18d78397a664541, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2b558b3f90438fa94aec18c5bb0cfb76 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_5026254879305f54aba7e64418b54c2c, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, NULL, 4, 0, 0);
code_objects_bf402a84fd7478e56fc8615baadb4b28 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4c8cac8bca16b8e1ace50d7b62b433e8, mod_consts.const_tuple_d2fd65563657d670e94d813057df3241_tuple, NULL, 12, 0, 0);
code_objects_3a74b4eceda36b6a45f9cfb39e577e5c = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_7b75492f36ea1612c61417cfc7a3337c, mod_consts.const_tuple_str_plain_self_str_plain_httpcore_stream_tuple, NULL, 2, 0, 0);
code_objects_1afc5cfca5f5925cfca169e551dd533b = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_a50a2390f1c5cda2473d2d87f712ad80, mod_consts.const_tuple_d2fd65563657d670e94d813057df3241_tuple, NULL, 12, 0, 0);
code_objects_807ad1d69b96ab6e1d90f821f9ccaeb2 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_20595aa2abfb02511dedc306f8a9c394, mod_consts.const_tuple_str_plain_self_str_plain_httpcore_stream_tuple, NULL, 2, 0, 0);
code_objects_726f30542686230bb3f598b128ab7eed = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_e8d3bc878ac2510fccc6057f62bca01e, mod_consts.const_tuple_str_plain_self_str_plain_part_tuple, NULL, 1, 0, 0);
code_objects_e6de24aad1250b870387188ef10321c0 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__load_httpcore_exceptions, mod_consts.const_str_plain__load_httpcore_exceptions, mod_consts.const_tuple_str_plain_httpcore_tuple, NULL, 0, 0, 0);
code_objects_ae09872eec21cb525b1c8d4b8c870d40 = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_840222267e6e16cc45a012f6ca58b769, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0294505fe1a8bbf36fd00b0e63bb32be = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_1edd66fa313ec2f1311efabea986863b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cf2cee29acfdb711c280d624f3aa741a = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_8b091a9d09dcdd9ca92338f172a0715e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d86abb3c9a84ca6e26971b2c98b9244f = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_0febfaabddbb5693eadb941240b5e438, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4f990ce73199b00a6ad2821b5c11a8b5 = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_async_request, mod_consts.const_str_digest_e7decd8417e3f72711a535ae28ff3367, mod_consts.const_tuple_660537c82620f01e595341fc4ed4d47c_tuple, NULL, 2, 0, 0);
code_objects_91eec690f32a8694a62469d47576d770 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_request, mod_consts.const_str_digest_cd9ef3d01e4f0838a846fb28a3d70aba, mod_consts.const_tuple_660537c82620f01e595341fc4ed4d47c_tuple, NULL, 2, 0, 0);
code_objects_37553bf175825487bfa104382995a833 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_map_httpcore_exceptions, mod_consts.const_str_plain_map_httpcore_exceptions, mod_consts.const_tuple_b51e174071ac3d0b3f39ed2a6d4b65dc_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions(PyThreadState *tstate);


static PyObject *MAKE_GENERATOR_httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__10_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__11___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__12___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__13_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__14___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__15___aenter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__16___aexit__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__17_handle_async_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__18_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__1__load_httpcore_exceptions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__2_map_httpcore_exceptions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__4___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__5_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__7___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__8___exit__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__9_handle_request(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_transports$default$$$function__1__load_httpcore_exceptions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_httpcore = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions = MAKE_FUNCTION_FRAME(tstate, code_objects_e6de24aad1250b870387188ef10321c0, module_httpx$_transports$default, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions = cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_httpcore;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions->m_frame.f_lineno = 75;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
assert(var_httpcore == NULL);
var_httpcore = tmp_assign_source_1;
}
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_1 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TimeoutException);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$TimeoutException(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutException);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = _PyDict_NewPresized( 14 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_2 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ConnectTimeout);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$ConnectTimeout(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectTimeout);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 79;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_3 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ReadTimeout);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$ReadTimeout(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadTimeout);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 80;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_4 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_WriteTimeout);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$WriteTimeout(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WriteTimeout);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 81;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_5 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_PoolTimeout);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$PoolTimeout(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolTimeout);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 82;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_6 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_NetworkError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$NetworkError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NetworkError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 83;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_7 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ConnectError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$ConnectError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 84;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_8 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ReadError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$ReadError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 85;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_9 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_WriteError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$WriteError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WriteError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 86;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_10 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ProxyError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$ProxyError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 87;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_11 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_UnsupportedProtocol);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$UnsupportedProtocol(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnsupportedProtocol);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 88;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_12 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_ProtocolError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$ProtocolError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 89;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_13 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_LocalProtocolError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$LocalProtocolError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 90;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_14 = var_httpcore;
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_RemoteProtocolError);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = module_var_accessor_httpx$_transports$default$RemoteProtocolError(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 91;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "o";
    goto dict_build_exception_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions,
    type_description_1,
    var_httpcore
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions == cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions);
    cache_frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__1__load_httpcore_exceptions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_httpcore);
CHECK_OBJECT(var_httpcore);
Py_DECREF(var_httpcore);
var_httpcore = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_httpcore);
var_httpcore = NULL;
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


static PyObject *impl_httpx$_transports$default$$$function__2_map_httpcore_exceptions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_GENERATOR_httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions(tstate);

goto function_return_exit;

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
struct httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions_locals {
PyObject *var_exc;
PyObject *var_mapped_exc;
PyObject *var_from_exc;
PyObject *var_to_exc;
PyObject *var_message;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions_locals *generator_heap = (struct httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_exc = NULL;
generator_heap->var_mapped_exc = NULL;
generator_heap->var_from_exc = NULL;
generator_heap->var_to_exc = NULL;
generator_heap->var_message = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_37553bf175825487bfa104382995a833, module_httpx$_transports$default, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
tmp_len_arg_1 = module_var_accessor_httpx$_transports$default$HTTPCORE_EXC_MAP(tstate);
if (unlikely(tmp_len_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
}

if (tmp_len_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 98;
generator_heap->type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 98;
generator_heap->type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 0;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_transports$default$_load_httpcore_exceptions(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__load_httpcore_exceptions);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 99;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPCORE_EXC_MAP, tmp_assign_source_1);
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_1 = Py_None;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 101;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_Exception;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_2);
generator_heap->var_exc = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(generator_heap->var_mapped_exc == NULL);
Py_INCREF(tmp_assign_source_3);
generator_heap->var_mapped_exc = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_httpx$_transports$default$HTTPCORE_EXC_MAP(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_HTTPCORE_EXC_MAP);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_items);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
generator->m_frame->m_frame.f_lineno = 105;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ooooo";
generator_heap->exception_lineno = 105;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = generator_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_7;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_from_exc;
    generator_heap->var_from_exc = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_from_exc);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_to_exc;
    generator_heap->var_to_exc = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_to_exc);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(generator_heap->var_exc);
tmp_isinstance_inst_1 = generator_heap->var_exc;
CHECK_OBJECT(generator_heap->var_from_exc);
tmp_isinstance_cls_1 = generator_heap->var_from_exc;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_start_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
if (generator_heap->var_mapped_exc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mapped_exc);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_cmp_expr_left_3 = generator_heap->var_mapped_exc;
tmp_cmp_expr_right_3 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(generator_heap->var_to_exc);
tmp_issubclass_cls_1 = generator_heap->var_to_exc;
if (generator_heap->var_mapped_exc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mapped_exc);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_issubclass_classes_1 = generator_heap->var_mapped_exc;
generator_heap->tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_or_right_value_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(generator_heap->var_to_exc);
tmp_assign_source_11 = generator_heap->var_to_exc;
{
    PyObject *old = generator_heap->var_mapped_exc;
    generator_heap->var_mapped_exc = tmp_assign_source_11;
    Py_INCREF(generator_heap->var_mapped_exc);
    Py_XDECREF(old);
}

}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (generator_heap->var_mapped_exc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mapped_exc);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 114;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_cmp_expr_left_4 = generator_heap->var_mapped_exc;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 115;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ooooo";
goto try_except_handler_4;
branch_no_5:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(generator_heap->var_exc);
tmp_unicode_arg_1 = generator_heap->var_exc;
tmp_assign_source_12 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(generator_heap->var_message == NULL);
generator_heap->var_message = tmp_assign_source_12;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_raise_cause_1;
if (generator_heap->var_mapped_exc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_mapped_exc);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 118;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_called_value_3 = generator_heap->var_mapped_exc;
CHECK_OBJECT(generator_heap->var_message);
tmp_args_element_value_1 = generator_heap->var_message;
generator->m_frame->m_frame.f_lineno = 118;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 118;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 118;
generator_heap->type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_exc);
tmp_raise_cause_1 = generator_heap->var_exc;
generator_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
generator_heap->exception_lineno = 118;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &generator_heap->exception_state, tmp_raise_cause_1);
generator_heap->type_description_1 = "ooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 100;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
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
    generator_heap->var_exc,
    generator_heap->var_mapped_exc,
    generator_heap->var_from_exc,
    generator_heap->var_to_exc,
    generator_heap->var_message
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
goto try_end_5;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_mapped_exc);
generator_heap->var_mapped_exc = NULL;
Py_XDECREF(generator_heap->var_from_exc);
generator_heap->var_from_exc = NULL;
Py_XDECREF(generator_heap->var_to_exc);
generator_heap->var_to_exc = NULL;
Py_XDECREF(generator_heap->var_message);
generator_heap->var_message = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:
try_end_5:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions(PyThreadState *tstate) {
    return Nuitka_Generator_New(
        httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions_context,
        module_httpx$_transports$default,
        mod_consts.const_str_plain_map_httpcore_exceptions,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_37553bf175825487bfa104382995a833,
        NULL,
        0,
#if 1
        sizeof(struct httpx$_transports$default$$$function__2_map_httpcore_exceptions$$$genobj__1_map_httpcore_exceptions_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$default$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_httpcore_stream = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_807ad1d69b96ab6e1d90f821f9ccaeb2, module_httpx$_transports$default, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__3___init__->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__3___init__ = cache_frame_frame_httpx$_transports$default$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__3___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_httpcore_stream);
tmp_assattr_value_1 = par_httpcore_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__httpcore_stream, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__3___init__,
    type_description_1,
    par_self,
    par_httpcore_stream
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__3___init__ == cache_frame_frame_httpx$_transports$default$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__3___init__);
    cache_frame_frame_httpx$_transports$default$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__3___init__);

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
CHECK_OBJECT(par_httpcore_stream);
Py_DECREF(par_httpcore_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_httpcore_stream);
Py_DECREF(par_httpcore_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$default$$$function__4___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
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
struct httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter___locals {
PyObject *var_part;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_part = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_726f30542686230bb3f598b128ab7eed, module_httpx$_transports$default, sizeof(void *)+sizeof(void *));
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
tmp_called_value_1 = module_var_accessor_httpx$_transports$default$map_httpcore_exceptions(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_map_httpcore_exceptions);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 126;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_1 = generator_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 126;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_2 = generator_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "co";
    goto try_except_handler_4;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__httpcore_stream);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 127;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_7 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_part;
    generator_heap->var_part = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_part);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_part);
tmp_expression_value_4 = generator_heap->var_part;
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_2);
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
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_3 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 126;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_6;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_6;
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
    generator_heap->exception_lineno = 126;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "co";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 126;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "co";
goto try_except_handler_6;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 126;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_4);

generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 126;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;

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
    generator->m_closure[0],
    generator_heap->var_part
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
goto try_end_6;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_part);
generator_heap->var_part = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:
try_end_6:;
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
Py_XDECREF(generator_heap->var_part);
generator_heap->var_part = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter___context,
        module_httpx$_transports$default,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_e8d3bc878ac2510fccc6057f62bca01e,
#endif
        code_objects_726f30542686230bb3f598b128ab7eed,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$default$$$function__4___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$default$$$function__5_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__5_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__5_close = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__5_close)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__5_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__5_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__5_close = MAKE_FUNCTION_FRAME(tstate, code_objects_d86abb3c9a84ca6e26971b2c98b9244f, module_httpx$_transports$default, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__5_close->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__5_close = cache_frame_frame_httpx$_transports$default$$$function__5_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__5_close);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__5_close) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__httpcore_stream);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain_close);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__httpcore_stream);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__5_close->m_frame.f_lineno = 132;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__5_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__5_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__5_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__5_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__5_close == cache_frame_frame_httpx$_transports$default$$$function__5_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__5_close);
    cache_frame_frame_httpx$_transports$default$$$function__5_close = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__5_close);

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


static PyObject *impl_httpx$_transports$default$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_verify = python_pars[1];
PyObject *par_cert = python_pars[2];
PyObject *par_trust_env = python_pars[3];
PyObject *par_http1 = python_pars[4];
PyObject *par_http2 = python_pars[5];
PyObject *par_limits = python_pars[6];
PyObject *par_proxy = python_pars[7];
PyObject *par_uds = python_pars[8];
PyObject *par_local_address = python_pars[9];
PyObject *par_retries = python_pars[10];
PyObject *par_socket_options = python_pars[11];
PyObject *var_httpcore = NULL;
PyObject *var_ssl_context = NULL;
PyObject *var_socksio = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1afc5cfca5f5925cfca169e551dd533b, module_httpx$_transports$default, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__6___init__->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__6___init__ = cache_frame_frame_httpx$_transports$default$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__6___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_httpcore;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 150;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_httpcore == NULL);
var_httpcore = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_proxy);
tmp_isinstance_inst_1 = par_proxy;
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_httpx$_transports$default$URL(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_URL);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_isinstance_cls_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_httpx$_transports$default$Proxy(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Proxy);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_kw_call_value_0_1 = par_proxy;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 152;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_url_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_proxy);
tmp_assign_source_2 = par_proxy;
Py_INCREF(tmp_assign_source_2);
condexpr_end_1:;
{
    PyObject *old = par_proxy;
    assert(old != NULL);
    par_proxy = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_2 = module_var_accessor_httpx$_transports$default$create_ssl_context(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_ssl_context);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_verify);
tmp_kw_call_value_0_2 = par_verify;
CHECK_OBJECT(par_cert);
tmp_kw_call_value_1_1 = par_cert;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_value_2_1 = par_trust_env;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 153;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_verify_str_plain_cert_str_plain_trust_env_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ssl_context == NULL);
var_ssl_context = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_proxy);
tmp_cmp_expr_left_1 = par_proxy;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_1 = var_httpcore;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ConnectionPool);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ssl_context);
tmp_kw_call_value_0_3 = var_ssl_context;
CHECK_OBJECT(par_limits);
tmp_expression_value_2 = par_limits;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_max_connections);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 158;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_3 = par_limits;
tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_max_keepalive_connections);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 159;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_4 = par_limits;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_keepalive_expiry);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_2);

exception_lineno = 160;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http1);
tmp_kw_call_value_4_1 = par_http1;
CHECK_OBJECT(par_http2);
tmp_kw_call_value_5_1 = par_http2;
CHECK_OBJECT(par_uds);
tmp_kw_call_value_6_1 = par_uds;
CHECK_OBJECT(par_local_address);
tmp_kw_call_value_7_1 = par_local_address;
CHECK_OBJECT(par_retries);
tmp_kw_call_value_8_1 = par_retries;
CHECK_OBJECT(par_socket_options);
tmp_kw_call_value_9_1 = par_socket_options;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 156;
{
    PyObject *kw_values[10] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

    tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_6eb59a831c54202e22952ab7abe2b83e_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__pool, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_proxy);
tmp_expression_value_6 = par_proxy;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_url);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_http_str_plain_https_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_value_2_4;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_value_3_3;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_value_5_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_value_6_2;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_value_7_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_value_8_2;
PyObject *tmp_kw_call_value_9_2;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_7 = var_httpcore;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_HTTPProxy);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_8 = var_httpcore;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_URL);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 170;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_10 = par_proxy;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_url);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 171;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_raw_scheme);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_kw_call_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 171;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_12 = par_proxy;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_url);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);

exception_lineno = 172;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_raw_host);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);

exception_lineno = 172;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_14 = par_proxy;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_url);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 173;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 173;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_16 = par_proxy;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_url);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);

exception_lineno = 174;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);

exception_lineno = 174;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 170;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_2};

    tmp_kw_call_value_0_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_0_5);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 170;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_17 = par_proxy;
tmp_kw_call_value_1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_raw_auth);
if (tmp_kw_call_value_1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 176;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_19 = par_proxy;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_headers);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);

exception_lineno = 177;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_raw);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_kw_call_value_2_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);

exception_lineno = 177;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ssl_context);
tmp_kw_call_value_3_3 = var_ssl_context;
CHECK_OBJECT(par_proxy);
tmp_expression_value_20 = par_proxy;
tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_ssl_context);
if (tmp_kw_call_value_4_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);

exception_lineno = 179;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_21 = par_limits;
tmp_kw_call_value_5_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_max_connections);
if (tmp_kw_call_value_5_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_4_2);

exception_lineno = 180;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_22 = par_limits;
tmp_kw_call_value_6_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_max_keepalive_connections);
if (tmp_kw_call_value_6_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);

exception_lineno = 181;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_23 = par_limits;
tmp_kw_call_value_7_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_keepalive_expiry);
if (tmp_kw_call_value_7_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_6_2);

exception_lineno = 182;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http1);
tmp_kw_call_value_8_2 = par_http1;
CHECK_OBJECT(par_http2);
tmp_kw_call_value_9_2 = par_http2;
CHECK_OBJECT(par_socket_options);
tmp_kw_call_value_10_1 = par_socket_options;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 169;
{
    PyObject *kw_values[11] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_3, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_2, tmp_kw_call_value_10_1};

    tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_0a4bf6dcfcba872ce413eb9a3ad49f35_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
CHECK_OBJECT(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_1_4);
CHECK_OBJECT(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_2_4);
CHECK_OBJECT(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_4_2);
CHECK_OBJECT(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_5_2);
CHECK_OBJECT(tmp_kw_call_value_6_2);
Py_DECREF(tmp_kw_call_value_6_2);
CHECK_OBJECT(tmp_kw_call_value_7_2);
Py_DECREF(tmp_kw_call_value_7_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__pool, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_proxy);
tmp_expression_value_25 = par_proxy;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_url);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_str_plain_socks5_str_plain_socks5h_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_socksio;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 189;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_socksio == NULL);
var_socksio = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__6___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__6___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_eaef2ad4291985534ee077daac7f0d22;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 191;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 194;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_3;
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 188;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_transports$default$$$function__6___init__->m_frame)) {
        frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_3;
branch_end_4:;
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_kw_call_value_0_7;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_value_1_5;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_kw_call_value_2_5;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_kw_call_value_3_4;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_kw_call_value_1_6;
PyObject *tmp_expression_value_36;
PyObject *tmp_kw_call_value_2_6;
PyObject *tmp_kw_call_value_3_5;
PyObject *tmp_expression_value_37;
PyObject *tmp_kw_call_value_4_3;
PyObject *tmp_expression_value_38;
PyObject *tmp_kw_call_value_5_3;
PyObject *tmp_expression_value_39;
PyObject *tmp_kw_call_value_6_3;
PyObject *tmp_kw_call_value_7_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_26 = var_httpcore;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_SOCKSProxy);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_27 = var_httpcore;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_URL);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 197;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_29 = par_proxy;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_url);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);

exception_lineno = 198;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_raw_scheme);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_kw_call_value_0_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);

exception_lineno = 198;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_31 = par_proxy;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_url);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);

exception_lineno = 199;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_raw_host);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_kw_call_value_1_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);

exception_lineno = 199;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_33 = par_proxy;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_url);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);

exception_lineno = 200;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_kw_call_value_2_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);

exception_lineno = 200;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_35 = par_proxy;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_url);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_2_5);

exception_lineno = 201;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_kw_call_value_3_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_2_5);

exception_lineno = 201;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 197;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_4};

    tmp_kw_call_value_0_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_0_7);
CHECK_OBJECT(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_1_5);
CHECK_OBJECT(tmp_kw_call_value_2_5);
Py_DECREF(tmp_kw_call_value_2_5);
CHECK_OBJECT(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_3_4);
if (tmp_kw_call_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 197;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_36 = par_proxy;
tmp_kw_call_value_1_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_raw_auth);
if (tmp_kw_call_value_1_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);

exception_lineno = 203;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ssl_context);
tmp_kw_call_value_2_6 = var_ssl_context;
CHECK_OBJECT(par_limits);
tmp_expression_value_37 = par_limits;
tmp_kw_call_value_3_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_max_connections);
if (tmp_kw_call_value_3_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_1_6);

exception_lineno = 205;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_38 = par_limits;
tmp_kw_call_value_4_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_max_keepalive_connections);
if (tmp_kw_call_value_4_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_1_6);
Py_DECREF(tmp_kw_call_value_3_5);

exception_lineno = 206;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_39 = par_limits;
tmp_kw_call_value_5_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_keepalive_expiry);
if (tmp_kw_call_value_5_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_1_6);
Py_DECREF(tmp_kw_call_value_3_5);
Py_DECREF(tmp_kw_call_value_4_3);

exception_lineno = 207;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http1);
tmp_kw_call_value_6_3 = par_http1;
CHECK_OBJECT(par_http2);
tmp_kw_call_value_7_3 = par_http2;
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 196;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_5, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3};

    tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_78559815235a037a9a59b5fece20f63b_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_0_6);
CHECK_OBJECT(tmp_kw_call_value_1_6);
Py_DECREF(tmp_kw_call_value_1_6);
CHECK_OBJECT(tmp_kw_call_value_3_5);
Py_DECREF(tmp_kw_call_value_3_5);
CHECK_OBJECT(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_4_3);
CHECK_OBJECT(tmp_kw_call_value_5_3);
Py_DECREF(tmp_kw_call_value_5_3);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__pool, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_7fbb22645fbea02c3e367de2450e7022;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_proxy);
tmp_expression_value_41 = par_proxy;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_url);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_httpx$_transports$default$$$function__6___init__->m_frame.f_lineno = 212;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 212;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__6___init__,
    type_description_1,
    par_self,
    par_verify,
    par_cert,
    par_trust_env,
    par_http1,
    par_http2,
    par_limits,
    par_proxy,
    par_uds,
    par_local_address,
    par_retries,
    par_socket_options,
    var_httpcore,
    var_ssl_context,
    var_socksio
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__6___init__ == cache_frame_frame_httpx$_transports$default$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__6___init__);
    cache_frame_frame_httpx$_transports$default$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__6___init__);

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
CHECK_OBJECT(par_proxy);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
par_proxy = NULL;
CHECK_OBJECT(var_httpcore);
CHECK_OBJECT(var_httpcore);
Py_DECREF(var_httpcore);
var_httpcore = NULL;
CHECK_OBJECT(var_ssl_context);
CHECK_OBJECT(var_ssl_context);
Py_DECREF(var_ssl_context);
var_ssl_context = NULL;
Py_XDECREF(var_socksio);
var_socksio = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_proxy);
par_proxy = NULL;
Py_XDECREF(var_httpcore);
var_httpcore = NULL;
Py_XDECREF(var_ssl_context);
var_ssl_context = NULL;
Py_XDECREF(var_socksio);
var_socksio = NULL;
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
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_limits);
Py_DECREF(par_limits);
CHECK_OBJECT(par_uds);
Py_DECREF(par_uds);
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_limits);
Py_DECREF(par_limits);
CHECK_OBJECT(par_uds);
Py_DECREF(par_uds);
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$default$$$function__7___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__7___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__7___enter__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__7___enter__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__7___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__7___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__7___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7e4bacaf3cadd430e1060651ddb59e12, module_httpx$_transports$default, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__7___enter__->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__7___enter__ = cache_frame_frame_httpx$_transports$default$$$function__7___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__7___enter__);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__7___enter__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pool);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__7___enter__->m_frame.f_lineno = 218;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___enter__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__7___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__7___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__7___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__7___enter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__7___enter__ == cache_frame_frame_httpx$_transports$default$$$function__7___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__7___enter__);
    cache_frame_frame_httpx$_transports$default$$$function__7___enter__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__7___enter__);

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


static PyObject *impl_httpx$_transports$default$$$function__8___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_value = python_pars[2];
PyObject *par_traceback = python_pars[3];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__8___exit__;
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
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__8___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__8___exit__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__8___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__8___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__8___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2b558b3f90438fa94aec18c5bb0cfb76, module_httpx$_transports$default, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__8___exit__->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__8___exit__ = cache_frame_frame_httpx$_transports$default$$$function__8___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__8___exit__);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__8___exit__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_transports$default$map_httpcore_exceptions(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_map_httpcore_exceptions);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = 227;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_1;
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


exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = 227;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_1;
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


exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__pool);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_exc_type);
tmp_args_element_value_1 = par_exc_type;
CHECK_OBJECT(par_exc_value);
tmp_args_element_value_2 = par_exc_value;
CHECK_OBJECT(par_traceback);
tmp_args_element_value_3 = par_traceback;
frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        const_str_plain___exit__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__8___exit__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__8___exit__, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = 227;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_4;
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
    exception_lineno = 227;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame)) {
        frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 227;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame)) {
        frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
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
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = 227;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
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
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame.f_lineno = 227;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__8___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__8___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__8___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__8___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_value,
    par_traceback
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__8___exit__ == cache_frame_frame_httpx$_transports$default$$$function__8___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__8___exit__);
    cache_frame_frame_httpx$_transports$default$$$function__8___exit__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__8___exit__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
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
goto function_return_exit;

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


static PyObject *impl_httpx$_transports$default$$$function__9_handle_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_httpcore = NULL;
PyObject *var_req = NULL;
PyObject *var_resp = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__9_handle_request;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__9_handle_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__9_handle_request)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__9_handle_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__9_handle_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__9_handle_request = MAKE_FUNCTION_FRAME(tstate, code_objects_91eec690f32a8694a62469d47576d770, module_httpx$_transports$default, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__9_handle_request->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__9_handle_request = cache_frame_frame_httpx$_transports$default$$$function__9_handle_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__9_handle_request);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__9_handle_request) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_request);
tmp_expression_value_1 = par_request;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_httpx$_transports$default$SyncByteStream(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
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
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 234;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 234;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_httpcore;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 235;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_httpcore == NULL);
var_httpcore = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_2 = var_httpcore;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Request);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_3 = par_request;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_method);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 238;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_4 = var_httpcore;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_URL);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_6 = par_request;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_url);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_raw_scheme);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_8 = par_request;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_url);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 241;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_raw_host);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 241;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_10 = par_request;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_url);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 242;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 242;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_12 = par_request;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_url);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 243;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 243;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 239;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_14 = par_request;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_headers);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 245;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_raw);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 245;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_15 = par_request;
tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_stream);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_2);

exception_lineno = 246;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_16 = par_request;
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_3_2);

exception_lineno = 247;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 237;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_req == NULL);
var_req = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_httpx$_transports$default$map_httpcore_exceptions(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_map_httpcore_exceptions);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 249;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_17 = tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_17, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 249;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_18 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_18, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__pool);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_req);
tmp_args_element_value_1 = var_req;
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 250;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_handle_request, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(var_resp == NULL);
var_resp = tmp_assign_source_7;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__9_handle_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__9_handle_request, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 249;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 249;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame)) {
        frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 249;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame)) {
        frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_end_2:;
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
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 249;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 249;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
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
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
if (var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = var_resp;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_stream);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_21 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_21 == NULL));
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Iterable);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 252;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_2;
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 252;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 252;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_kw_call_value_3_3;
PyObject *tmp_expression_value_25;
tmp_called_value_8 = module_var_accessor_httpx$_transports$default$Response(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = var_resp;
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_status);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_resp == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = var_resp;
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_headers);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 256;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_httpx$_transports$default$ResponseStream(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseStream);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 257;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_resp == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = var_resp;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_stream);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 257;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 257;
tmp_kw_call_value_2_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 257;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_resp == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = var_resp;
tmp_kw_call_value_3_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_3_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);

exception_lineno = 258;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame.f_lineno = 254;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_23db96708cf20f26a9e20bfe6ecd14ab_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
CHECK_OBJECT(tmp_kw_call_value_3_3);
Py_DECREF(tmp_kw_call_value_3_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__9_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__9_handle_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__9_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__9_handle_request,
    type_description_1,
    par_self,
    par_request,
    var_httpcore,
    var_req,
    var_resp
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__9_handle_request == cache_frame_frame_httpx$_transports$default$$$function__9_handle_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__9_handle_request);
    cache_frame_frame_httpx$_transports$default$$$function__9_handle_request = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__9_handle_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_httpcore);
CHECK_OBJECT(var_httpcore);
Py_DECREF(var_httpcore);
var_httpcore = NULL;
CHECK_OBJECT(var_req);
CHECK_OBJECT(var_req);
Py_DECREF(var_req);
var_req = NULL;
Py_XDECREF(var_resp);
var_resp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_httpcore);
var_httpcore = NULL;
Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_resp);
var_resp = NULL;
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


static PyObject *impl_httpx$_transports$default$$$function__10_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__10_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__10_close = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__10_close)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__10_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__10_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__10_close = MAKE_FUNCTION_FRAME(tstate, code_objects_cf2cee29acfdb711c280d624f3aa741a, module_httpx$_transports$default, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__10_close->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__10_close = cache_frame_frame_httpx$_transports$default$$$function__10_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__10_close);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__10_close) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pool);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__10_close->m_frame.f_lineno = 262;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__10_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__10_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__10_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__10_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__10_close == cache_frame_frame_httpx$_transports$default$$$function__10_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__10_close);
    cache_frame_frame_httpx$_transports$default$$$function__10_close = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__10_close);

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


static PyObject *impl_httpx$_transports$default$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_httpcore_stream = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3a74b4eceda36b6a45f9cfb39e577e5c, module_httpx$_transports$default, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__11___init__->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__11___init__ = cache_frame_frame_httpx$_transports$default$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__11___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__11___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_httpcore_stream);
tmp_assattr_value_1 = par_httpcore_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__httpcore_stream, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__11___init__,
    type_description_1,
    par_self,
    par_httpcore_stream
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__11___init__ == cache_frame_frame_httpx$_transports$default$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__11___init__);
    cache_frame_frame_httpx$_transports$default$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__11___init__);

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
CHECK_OBJECT(par_httpcore_stream);
Py_DECREF(par_httpcore_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_httpcore_stream);
Py_DECREF(par_httpcore_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$default$$$function__12___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_ASYNCGEN_httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter__(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
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
struct httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter___locals {
PyObject *var_part;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_part = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
asyncgen_heap->tmp_with_1__enter = NULL;
asyncgen_heap->tmp_with_1__exit = NULL;
asyncgen_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
asyncgen_heap->tmp_with_1__source = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5fd149eb94ba2f7ad6749dc103b828ce, module_httpx$_transports$default, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_transports$default$map_httpcore_exceptions(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_map_httpcore_exceptions);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 270;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
assert(asyncgen_heap->tmp_with_1__source == NULL);
asyncgen_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
tmp_expression_value_1 = asyncgen_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
asyncgen->m_frame->m_frame.f_lineno = 270;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
assert(asyncgen_heap->tmp_with_1__enter == NULL);
asyncgen_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
tmp_expression_value_2 = asyncgen_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
assert(asyncgen_heap->tmp_with_1__exit == NULL);
asyncgen_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 271;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_4;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__httpcore_stream);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 271;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
tmp_expression_value_3 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 271;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_3;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 271;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
tmp_assign_source_5 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_5 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 271;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_5;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 271;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_6;
}
tmp_assign_source_6 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_5;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_7 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_part;
    asyncgen_heap->var_part = tmp_assign_source_7;
    Py_INCREF(asyncgen_heap->var_part);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_part);
tmp_expression_value_6 = asyncgen_heap->var_part;
Py_INCREF(tmp_expression_value_6);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_6;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 272;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 271;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 1.
asyncgen_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_3, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_2 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_3 = asyncgen_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
asyncgen->m_frame->m_frame.f_lineno = 270;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_7;
}
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_7;
}
tmp_condition_result_3 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 270;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "co";
goto try_except_handler_7;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 270;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "co";
goto try_except_handler_7;
branch_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_5 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = asyncgen_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_4 = asyncgen_heap->tmp_with_1__exit;
asyncgen->m_frame->m_frame.f_lineno = 270;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_5);

asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_5;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = asyncgen_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_5 = asyncgen_heap->tmp_with_1__exit;
asyncgen->m_frame->m_frame.f_lineno = 270;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 270;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_6 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_6 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_with_1__source);
asyncgen_heap->tmp_with_1__source = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_1__enter);
asyncgen_heap->tmp_with_1__enter = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_1__exit);
asyncgen_heap->tmp_with_1__exit = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_6;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[0],
    asyncgen_heap->var_part
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
Py_DECREF(asyncgen_heap->tmp_with_1__source);
asyncgen_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
Py_DECREF(asyncgen_heap->tmp_with_1__enter);
asyncgen_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
Py_DECREF(asyncgen_heap->tmp_with_1__exit);
asyncgen_heap->tmp_with_1__exit = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_part);
asyncgen_heap->var_part = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_7 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_7 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_part);
asyncgen_heap->var_part = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_7;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_transports$default,
        mod_consts.const_str_plain___aiter__,
        mod_consts.const_str_digest_0ae2d68c75a9843250163eebac253158,
        code_objects_5fd149eb94ba2f7ad6749dc103b828ce,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$default$$$function__12___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$default$$$function__13_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
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
struct httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0294505fe1a8bbf36fd00b0e63bb32be, module_httpx$_transports$default, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 275;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__httpcore_stream);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 275;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 275;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 276;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__httpcore_stream);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 276;
tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_1:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose_context,
        module_httpx$_transports$default,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_1edd66fa313ec2f1311efabea986863b,
        code_objects_0294505fe1a8bbf36fd00b0e63bb32be,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$default$$$function__13_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$default$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_verify = python_pars[1];
PyObject *par_cert = python_pars[2];
PyObject *par_trust_env = python_pars[3];
PyObject *par_http1 = python_pars[4];
PyObject *par_http2 = python_pars[5];
PyObject *par_limits = python_pars[6];
PyObject *par_proxy = python_pars[7];
PyObject *par_uds = python_pars[8];
PyObject *par_local_address = python_pars[9];
PyObject *par_retries = python_pars[10];
PyObject *par_socket_options = python_pars[11];
PyObject *var_httpcore = NULL;
PyObject *var_ssl_context = NULL;
PyObject *var_socksio = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$default$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$default$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$default$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$default$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$default$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bf402a84fd7478e56fc8615baadb4b28, module_httpx$_transports$default, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$default$$$function__14___init__->m_type_description == NULL);
frame_frame_httpx$_transports$default$$$function__14___init__ = cache_frame_frame_httpx$_transports$default$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$function__14___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$function__14___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_httpcore;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 294;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_httpcore == NULL);
var_httpcore = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_proxy);
tmp_isinstance_inst_1 = par_proxy;
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_httpx$_transports$default$URL(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_URL);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_isinstance_cls_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_httpx$_transports$default$Proxy(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Proxy);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_kw_call_value_0_1 = par_proxy;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 296;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_url_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_proxy);
tmp_assign_source_2 = par_proxy;
Py_INCREF(tmp_assign_source_2);
condexpr_end_1:;
{
    PyObject *old = par_proxy;
    assert(old != NULL);
    par_proxy = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_2 = module_var_accessor_httpx$_transports$default$create_ssl_context(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_ssl_context);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_verify);
tmp_kw_call_value_0_2 = par_verify;
CHECK_OBJECT(par_cert);
tmp_kw_call_value_1_1 = par_cert;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_value_2_1 = par_trust_env;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 297;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_verify_str_plain_cert_str_plain_trust_env_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ssl_context == NULL);
var_ssl_context = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_proxy);
tmp_cmp_expr_left_1 = par_proxy;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_1 = var_httpcore;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_AsyncConnectionPool);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ssl_context);
tmp_kw_call_value_0_3 = var_ssl_context;
CHECK_OBJECT(par_limits);
tmp_expression_value_2 = par_limits;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_max_connections);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 302;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_3 = par_limits;
tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_max_keepalive_connections);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 303;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_4 = par_limits;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_keepalive_expiry);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_2);

exception_lineno = 304;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http1);
tmp_kw_call_value_4_1 = par_http1;
CHECK_OBJECT(par_http2);
tmp_kw_call_value_5_1 = par_http2;
CHECK_OBJECT(par_uds);
tmp_kw_call_value_6_1 = par_uds;
CHECK_OBJECT(par_local_address);
tmp_kw_call_value_7_1 = par_local_address;
CHECK_OBJECT(par_retries);
tmp_kw_call_value_8_1 = par_retries;
CHECK_OBJECT(par_socket_options);
tmp_kw_call_value_9_1 = par_socket_options;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 300;
{
    PyObject *kw_values[10] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

    tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_6eb59a831c54202e22952ab7abe2b83e_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__pool, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_proxy);
tmp_expression_value_6 = par_proxy;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_url);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_http_str_plain_https_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_value_2_4;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_value_3_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_kw_call_value_5_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_value_6_2;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_value_7_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_value_8_2;
PyObject *tmp_kw_call_value_9_2;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_7 = var_httpcore;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_AsyncHTTPProxy);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_8 = var_httpcore;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_URL);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 314;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_10 = par_proxy;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_url);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 315;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_raw_scheme);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_kw_call_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 315;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_12 = par_proxy;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_url);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);

exception_lineno = 316;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_raw_host);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);

exception_lineno = 316;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_14 = par_proxy;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_url);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 317;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 317;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_16 = par_proxy;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_url);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);

exception_lineno = 318;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);

exception_lineno = 318;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 314;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_2};

    tmp_kw_call_value_0_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_0_5);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 314;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_17 = par_proxy;
tmp_kw_call_value_1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_raw_auth);
if (tmp_kw_call_value_1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);

exception_lineno = 320;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_19 = par_proxy;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_headers);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);

exception_lineno = 321;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_raw);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_kw_call_value_2_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);

exception_lineno = 321;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_20 = par_proxy;
tmp_kw_call_value_3_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_ssl_context);
if (tmp_kw_call_value_3_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);

exception_lineno = 322;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ssl_context);
tmp_kw_call_value_4_2 = var_ssl_context;
CHECK_OBJECT(par_limits);
tmp_expression_value_21 = par_limits;
tmp_kw_call_value_5_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_max_connections);
if (tmp_kw_call_value_5_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_3);

exception_lineno = 324;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_22 = par_limits;
tmp_kw_call_value_6_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_max_keepalive_connections);
if (tmp_kw_call_value_6_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_3);
Py_DECREF(tmp_kw_call_value_5_2);

exception_lineno = 325;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_23 = par_limits;
tmp_kw_call_value_7_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_keepalive_expiry);
if (tmp_kw_call_value_7_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_3);
Py_DECREF(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_6_2);

exception_lineno = 326;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http1);
tmp_kw_call_value_8_2 = par_http1;
CHECK_OBJECT(par_http2);
tmp_kw_call_value_9_2 = par_http2;
CHECK_OBJECT(par_socket_options);
tmp_kw_call_value_10_1 = par_socket_options;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 313;
{
    PyObject *kw_values[11] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_3, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_2, tmp_kw_call_value_10_1};

    tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_e7f5737223c08b2ca5411a8fb424cc35_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
CHECK_OBJECT(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_1_4);
CHECK_OBJECT(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_2_4);
CHECK_OBJECT(tmp_kw_call_value_3_3);
Py_DECREF(tmp_kw_call_value_3_3);
CHECK_OBJECT(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_5_2);
CHECK_OBJECT(tmp_kw_call_value_6_2);
Py_DECREF(tmp_kw_call_value_6_2);
CHECK_OBJECT(tmp_kw_call_value_7_2);
Py_DECREF(tmp_kw_call_value_7_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__pool, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_proxy);
tmp_expression_value_25 = par_proxy;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_url);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_str_plain_socks5_str_plain_socks5h_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_socksio;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 333;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_socksio == NULL);
var_socksio = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__14___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__14___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_eaef2ad4291985534ee077daac7f0d22;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 335;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 338;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_3;
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 332;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_transports$default$$$function__14___init__->m_frame)) {
        frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_3;
branch_end_4:;
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_kw_call_value_0_7;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_value_1_5;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_kw_call_value_2_5;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_kw_call_value_3_4;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_kw_call_value_1_6;
PyObject *tmp_expression_value_36;
PyObject *tmp_kw_call_value_2_6;
PyObject *tmp_kw_call_value_3_5;
PyObject *tmp_expression_value_37;
PyObject *tmp_kw_call_value_4_3;
PyObject *tmp_expression_value_38;
PyObject *tmp_kw_call_value_5_3;
PyObject *tmp_expression_value_39;
PyObject *tmp_kw_call_value_6_3;
PyObject *tmp_kw_call_value_7_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_httpcore);
tmp_expression_value_26 = var_httpcore;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_AsyncSOCKSProxy);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_httpcore);
tmp_expression_value_27 = var_httpcore;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_URL);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 341;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_29 = par_proxy;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_url);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);

exception_lineno = 342;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_raw_scheme);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_kw_call_value_0_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);

exception_lineno = 342;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_31 = par_proxy;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_url);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);

exception_lineno = 343;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_raw_host);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_kw_call_value_1_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);

exception_lineno = 343;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_33 = par_proxy;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_url);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);

exception_lineno = 344;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_kw_call_value_2_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);

exception_lineno = 344;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_35 = par_proxy;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_url);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_2_5);

exception_lineno = 345;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_kw_call_value_3_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_2_5);

exception_lineno = 345;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 341;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_4};

    tmp_kw_call_value_0_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_0_7);
CHECK_OBJECT(tmp_kw_call_value_1_5);
Py_DECREF(tmp_kw_call_value_1_5);
CHECK_OBJECT(tmp_kw_call_value_2_5);
Py_DECREF(tmp_kw_call_value_2_5);
CHECK_OBJECT(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_3_4);
if (tmp_kw_call_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 341;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy);
tmp_expression_value_36 = par_proxy;
tmp_kw_call_value_1_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_raw_auth);
if (tmp_kw_call_value_1_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);

exception_lineno = 347;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ssl_context);
tmp_kw_call_value_2_6 = var_ssl_context;
CHECK_OBJECT(par_limits);
tmp_expression_value_37 = par_limits;
tmp_kw_call_value_3_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_max_connections);
if (tmp_kw_call_value_3_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_1_6);

exception_lineno = 349;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_38 = par_limits;
tmp_kw_call_value_4_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_max_keepalive_connections);
if (tmp_kw_call_value_4_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_1_6);
Py_DECREF(tmp_kw_call_value_3_5);

exception_lineno = 350;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_limits);
tmp_expression_value_39 = par_limits;
tmp_kw_call_value_5_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_keepalive_expiry);
if (tmp_kw_call_value_5_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_1_6);
Py_DECREF(tmp_kw_call_value_3_5);
Py_DECREF(tmp_kw_call_value_4_3);

exception_lineno = 351;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_http1);
tmp_kw_call_value_6_3 = par_http1;
CHECK_OBJECT(par_http2);
tmp_kw_call_value_7_3 = par_http2;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 340;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_5, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3};

    tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_78559815235a037a9a59b5fece20f63b_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_0_6);
CHECK_OBJECT(tmp_kw_call_value_1_6);
Py_DECREF(tmp_kw_call_value_1_6);
CHECK_OBJECT(tmp_kw_call_value_3_5);
Py_DECREF(tmp_kw_call_value_3_5);
CHECK_OBJECT(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_4_3);
CHECK_OBJECT(tmp_kw_call_value_5_3);
Py_DECREF(tmp_kw_call_value_5_3);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__pool, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_133727e47d8f93179f6f7e8895c8a7b4;
frame_frame_httpx$_transports$default$$$function__14___init__->m_frame.f_lineno = 356;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 356;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$function__14___init__,
    type_description_1,
    par_self,
    par_verify,
    par_cert,
    par_trust_env,
    par_http1,
    par_http2,
    par_limits,
    par_proxy,
    par_uds,
    par_local_address,
    par_retries,
    par_socket_options,
    var_httpcore,
    var_ssl_context,
    var_socksio
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$default$$$function__14___init__ == cache_frame_frame_httpx$_transports$default$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$default$$$function__14___init__);
    cache_frame_frame_httpx$_transports$default$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$default$$$function__14___init__);

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
CHECK_OBJECT(par_proxy);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
par_proxy = NULL;
CHECK_OBJECT(var_httpcore);
CHECK_OBJECT(var_httpcore);
Py_DECREF(var_httpcore);
var_httpcore = NULL;
CHECK_OBJECT(var_ssl_context);
CHECK_OBJECT(var_ssl_context);
Py_DECREF(var_ssl_context);
var_ssl_context = NULL;
Py_XDECREF(var_socksio);
var_socksio = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_proxy);
par_proxy = NULL;
Py_XDECREF(var_httpcore);
var_httpcore = NULL;
Py_XDECREF(var_ssl_context);
var_ssl_context = NULL;
Py_XDECREF(var_socksio);
var_socksio = NULL;
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
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_limits);
Py_DECREF(par_limits);
CHECK_OBJECT(par_uds);
Py_DECREF(par_uds);
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_limits);
Py_DECREF(par_limits);
CHECK_OBJECT(par_uds);
Py_DECREF(par_uds);
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$default$$$function__15___aenter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter__(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
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
struct httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3701d584c7695004f6ca6ebb771f6e76, module_httpx$_transports$default, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 362;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 362;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__pool);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 362;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 362;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___aenter__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 362;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 362;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 362;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 363;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter___context,
        module_httpx$_transports$default,
        const_str_plain___aenter__,
        mod_consts.const_str_digest_40efb293971adc61ff4277900e596e7f,
        code_objects_3701d584c7695004f6ca6ebb771f6e76,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$default$$$function__15___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$default$$$function__16___aexit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_exc_type = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_exc_value = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_traceback = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_exc_type;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_exc_value;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_traceback;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit__(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_exc_type);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
par_exc_type = NULL;
CHECK_OBJECT(par_exc_value);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
par_exc_value = NULL;
CHECK_OBJECT(par_traceback);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);
par_traceback = NULL;
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
struct httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit___locals {
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
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
PyObject *tmp_return_value;
};
#endif

static PyObject *httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a6700f245503f8c8908339b2c6d559d5, module_httpx$_transports$default, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_transports$default$map_httpcore_exceptions(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_map_httpcore_exceptions);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 371;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 371;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 372;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__pool);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___aexit__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exc_type);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exc_value);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_traceback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 372;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 371;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 371;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccc";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 371;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccc";
goto try_except_handler_4;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 371;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 371;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit___context,
        module_httpx$_transports$default,
        const_str_plain___aexit__,
        mod_consts.const_str_digest_24897287dca52e56734caa170573a83e,
        code_objects_a6700f245503f8c8908339b2c6d559d5,
        closure,
        4,
#if 1
        sizeof(struct httpx$_transports$default$$$function__16___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$default$$$function__17_handle_async_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_request = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_request;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_request);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
par_request = NULL;
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
struct httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request_locals {
PyObject *var_httpcore;
PyObject *var_req;
PyObject *var_resp;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request_locals *coroutine_heap = (struct httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_httpcore = NULL;
coroutine_heap->var_req = NULL;
coroutine_heap->var_resp = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4f990ce73199b00a6ad2821b5c11a8b5, module_httpx$_transports$default, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_httpx$_transports$default$AsyncByteStream(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_isinstance_inst_1);

coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
coroutine->m_frame->m_frame.f_lineno = 378;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 378;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_httpcore;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
coroutine->m_frame->m_frame.f_lineno = 379;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 379;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_httpcore == NULL);
coroutine_heap->var_httpcore = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(coroutine_heap->var_httpcore);
tmp_expression_value_2 = coroutine_heap->var_httpcore;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Request);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_method);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_httpcore);
tmp_expression_value_4 = coroutine_heap->var_httpcore;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_URL);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_url);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_raw_scheme);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_url);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_raw_host);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_url);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_url);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_1);

coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_1);

coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 383;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 389;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_headers);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 389;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_raw);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 389;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 390;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_stream);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_2);

coroutine_heap->exception_lineno = 390;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_3_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_3_2);

coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 381;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_req == NULL);
coroutine_heap->var_req = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_httpx$_transports$default$map_httpcore_exceptions(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_map_httpcore_exceptions);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 393;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_17 = coroutine_heap->tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_17, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 393;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_18 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_18, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 394;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__pool);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_req);
tmp_args_element_value_1 = coroutine_heap->var_req;
coroutine->m_frame->m_frame.f_lineno = 394;
tmp_expression_value_20 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_handle_async_request, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_expression_value_19 = ASYNC_AWAIT(tstate, tmp_expression_value_20, await_normal);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_19;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = yield_return_value;
assert(coroutine_heap->var_resp == NULL);
coroutine_heap->var_resp = tmp_assign_source_7;
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 393;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 393;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 393;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 393;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 393;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 393;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = coroutine_heap->var_resp;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_stream);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_23 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_23 == NULL));
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_AsyncIterable);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_isinstance_inst_2);

coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
coroutine->m_frame->m_frame.f_lineno = 396;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 396;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_26;
PyObject *tmp_kw_call_value_3_3;
PyObject *tmp_expression_value_27;
tmp_called_value_8 = module_var_accessor_httpx$_transports$default$Response(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 399;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = coroutine_heap->var_resp;
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_status);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 399;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (coroutine_heap->var_resp == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 400;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = coroutine_heap->var_resp;
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_headers);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_3);

coroutine_heap->exception_lineno = 400;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_httpx$_transports$default$AsyncResponseStream(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncResponseStream);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (coroutine_heap->var_resp == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = coroutine_heap->var_resp;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_stream);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 401;
tmp_kw_call_value_2_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (coroutine_heap->var_resp == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = coroutine_heap->var_resp;
tmp_kw_call_value_3_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_3_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);

coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 398;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3};

    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_23db96708cf20f26a9e20bfe6ecd14ab_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
CHECK_OBJECT(tmp_kw_call_value_3_3);
Py_DECREF(tmp_kw_call_value_3_3);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_httpcore,
    coroutine_heap->var_req,
    coroutine_heap->var_resp
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_httpcore);
CHECK_OBJECT(coroutine_heap->var_httpcore);
Py_DECREF(coroutine_heap->var_httpcore);
coroutine_heap->var_httpcore = NULL;
CHECK_OBJECT(coroutine_heap->var_req);
CHECK_OBJECT(coroutine_heap->var_req);
Py_DECREF(coroutine_heap->var_req);
coroutine_heap->var_req = NULL;
Py_XDECREF(coroutine_heap->var_resp);
coroutine_heap->var_resp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_httpcore);
coroutine_heap->var_httpcore = NULL;
Py_XDECREF(coroutine_heap->var_req);
coroutine_heap->var_req = NULL;
Py_XDECREF(coroutine_heap->var_resp);
coroutine_heap->var_resp = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request_context,
        module_httpx$_transports$default,
        mod_consts.const_str_plain_handle_async_request,
        mod_consts.const_str_digest_e7decd8417e3f72711a535ae28ff3367,
        code_objects_4f990ce73199b00a6ad2821b5c11a8b5,
        closure,
        2,
#if 1
        sizeof(struct httpx$_transports$default$$$function__17_handle_async_request$$$coroutine__1_handle_async_request_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$default$$$function__18_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
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
struct httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ae09872eec21cb525b1c8d4b8c870d40, module_httpx$_transports$default, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 406;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__pool);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 406;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose_context,
        module_httpx$_transports$default,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_840222267e6e16cc45a012f6ca58b769,
        code_objects_ae09872eec21cb525b1c8d4b8c870d40,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$default$$$function__18_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__10_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__10_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b091a9d09dcdd9ca92338f172a0715e,
#endif
        code_objects_cf2cee29acfdb711c280d624f3aa741a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__11___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b75492f36ea1612c61417cfc7a3337c,
#endif
        code_objects_3a74b4eceda36b6a45f9cfb39e577e5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__12___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__12___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0ae2d68c75a9843250163eebac253158,
#endif
        code_objects_5fd149eb94ba2f7ad6749dc103b828ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__13_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__13_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1edd66fa313ec2f1311efabea986863b,
#endif
        code_objects_0294505fe1a8bbf36fd00b0e63bb32be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__14___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c8cac8bca16b8e1ace50d7b62b433e8,
#endif
        code_objects_bf402a84fd7478e56fc8615baadb4b28,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__15___aenter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__15___aenter__,
        const_str_plain___aenter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_40efb293971adc61ff4277900e596e7f,
#endif
        code_objects_3701d584c7695004f6ca6ebb771f6e76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__16___aexit__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__16___aexit__,
        const_str_plain___aexit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_24897287dca52e56734caa170573a83e,
#endif
        code_objects_a6700f245503f8c8908339b2c6d559d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__17_handle_async_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__17_handle_async_request,
        mod_consts.const_str_plain_handle_async_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e7decd8417e3f72711a535ae28ff3367,
#endif
        code_objects_4f990ce73199b00a6ad2821b5c11a8b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__18_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__18_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_840222267e6e16cc45a012f6ca58b769,
#endif
        code_objects_ae09872eec21cb525b1c8d4b8c870d40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__1__load_httpcore_exceptions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__1__load_httpcore_exceptions,
        mod_consts.const_str_plain__load_httpcore_exceptions,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e6de24aad1250b870387188ef10321c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__2_map_httpcore_exceptions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__2_map_httpcore_exceptions,
        mod_consts.const_str_plain_map_httpcore_exceptions,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_37553bf175825487bfa104382995a833,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_20595aa2abfb02511dedc306f8a9c394,
#endif
        code_objects_807ad1d69b96ab6e1d90f821f9ccaeb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__4___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__4___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e8d3bc878ac2510fccc6057f62bca01e,
#endif
        code_objects_726f30542686230bb3f598b128ab7eed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__5_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__5_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0febfaabddbb5693eadb941240b5e438,
#endif
        code_objects_d86abb3c9a84ca6e26971b2c98b9244f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a50a2390f1c5cda2473d2d87f712ad80,
#endif
        code_objects_1afc5cfca5f5925cfca169e551dd533b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__7___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__7___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e499e226dd2f9d29c18d78397a664541,
#endif
        code_objects_7e4bacaf3cadd430e1060651ddb59e12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__8___exit__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__8___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5026254879305f54aba7e64418b54c2c,
#endif
        code_objects_2b558b3f90438fa94aec18c5bb0cfb76,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$default$$$function__9_handle_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$default$$$function__9_handle_request,
        mod_consts.const_str_plain_handle_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cd9ef3d01e4f0838a846fb28a3d70aba,
#endif
        code_objects_91eec690f32a8694a62469d47576d770,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$default,
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

static function_impl_code const function_table_httpx$_transports$default[] = {
impl_httpx$_transports$default$$$function__1__load_httpcore_exceptions,
impl_httpx$_transports$default$$$function__2_map_httpcore_exceptions,
impl_httpx$_transports$default$$$function__3___init__,
impl_httpx$_transports$default$$$function__4___iter__,
impl_httpx$_transports$default$$$function__5_close,
impl_httpx$_transports$default$$$function__6___init__,
impl_httpx$_transports$default$$$function__7___enter__,
impl_httpx$_transports$default$$$function__8___exit__,
impl_httpx$_transports$default$$$function__9_handle_request,
impl_httpx$_transports$default$$$function__10_close,
impl_httpx$_transports$default$$$function__11___init__,
impl_httpx$_transports$default$$$function__12___aiter__,
impl_httpx$_transports$default$$$function__13_aclose,
impl_httpx$_transports$default$$$function__14___init__,
impl_httpx$_transports$default$$$function__15___aenter__,
impl_httpx$_transports$default$$$function__16___aexit__,
impl_httpx$_transports$default$$$function__17_handle_async_request,
impl_httpx$_transports$default$$$function__18_aclose,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_transports$default);
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
        module_httpx$_transports$default,
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
        function_table_httpx$_transports$default,
        sizeof(function_table_httpx$_transports$default) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._transports.default";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_transports$default(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_transports$default");

    // Store the module for future use.
    module_httpx$_transports$default = module;

    moduledict_httpx$_transports$default = MODULE_DICT(module_httpx$_transports$default);

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
        PRINT_STRING("httpx$_transports$default: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_transports$default: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_transports$default: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._transports.default" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_transports$default\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_transports$default,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$default,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$default,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$default,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$default,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_transports$default);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_transports$default);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_httpx$_transports$default$$$class__1_ResponseStream_121 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_httpx$_transports$default$$$class__2_HTTPTransport_135 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
tmp_assign_source_1 = mod_consts.const_str_digest_eb3d797dc5ea18a375ffcfb3a4e601b3;
UPDATE_STRING_DICT0(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_transports$default = MAKE_MODULE_FRAME(code_objects_4d6bb9f139854f3361b8d9faa42e41db, module_httpx$_transports$default);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default);
assert(Py_REFCNT(frame_frame_httpx$_transports$default) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_transports$default$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_transports$default$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 29;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__config;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_349e7b7f915f642566a8cf8de9a6a7bb_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 38;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_DEFAULT_LIMITS,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_DEFAULT_LIMITS);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_LIMITS, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_Limits,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Limits);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Limits, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_Proxy,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Proxy);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Proxy, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_create_ssl_context,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_create_ssl_context);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_create_ssl_context, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_47b999e48f9ed91e8ec801fc1399f71a_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 39;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_ConnectError,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ConnectError);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectError, tmp_assign_source_15);
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
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_ConnectTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ConnectTimeout);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout, tmp_assign_source_16);
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
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_LocalProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_NetworkError,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_NetworkError);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_PoolTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_PoolTimeout);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolTimeout, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_ProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_ProxyError,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ProxyError);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_ReadError,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ReadError);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadError, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_ReadTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_ReadTimeout);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_RemoteProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_TimeoutException,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_TimeoutException);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_UnsupportedProtocol,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_UnsupportedProtocol);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_WriteError,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_WriteError);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteError, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_19 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_WriteTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_WriteTimeout);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteTimeout, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 55;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_21 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_31);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_43b5f5d1a83f76cf477b9b1230697e89_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 56;
tmp_assign_source_32 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_32;
}
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_AsyncByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_23 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_CertTypes,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_CertTypes);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_CertTypes, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_24 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_ProxyTypes,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_ProxyTypes);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyTypes, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_25 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_SyncByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream, tmp_assign_source_36);
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
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__urls;
tmp_globals_arg_value_6 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_URL_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 57;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_URL,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_URL);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_URL, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_base;
tmp_globals_arg_value_7 = (PyObject *)moduledict_httpx$_transports$default;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_AsyncBaseTransport_str_plain_BaseTransport_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 58;
tmp_assign_source_38 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_38;
}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_27 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_AsyncBaseTransport,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_AsyncBaseTransport);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_28 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_httpx$_transports$default,
        mod_consts.const_str_plain_BaseTransport,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_BaseTransport);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport, tmp_assign_source_40);
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
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TypeVar);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default->m_frame.f_lineno = 60;
tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_T_str_plain_HTTPTransport_tuple, 0), mod_consts.const_tuple_str_plain_bound_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_TypeVar);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$default->m_frame.f_lineno = 61;
tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_A_str_plain_AsyncHTTPTransport_tuple, 0), mod_consts.const_tuple_str_plain_bound_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_A, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
tmp_expression_value_4 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Union);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_3);

exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_tuple_type_int_type_int_type_int_tuple;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_3);

exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_5;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_8 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
tmp_expression_value_10 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_10 == NULL));
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Union);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto tuple_build_exception_2;
}
tmp_subscript_value_4 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_7);
Py_DECREF(tmp_subscript_value_3);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_expression_value_12 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_12 == NULL));
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto tuple_build_exception_1;
}
tmp_subscript_value_5 = mod_consts.const_tuple_type_int_type_int_none_type_int_tuple;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_3);
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKET_OPTION, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_LIST2(tstate, mod_consts.const_str_plain_AsyncHTTPTransport,mod_consts.const_str_plain_HTTPTransport);
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPCORE_EXC_MAP, tmp_assign_source_45);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_fd936862814466884dbc3c4566cd88a3;
tmp_ass_subscribed_1 = module_var_accessor_httpx$_transports$default$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_HTTPCORE_EXC_MAP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_aeded7d868009258d17a73b177502c22);

tmp_assign_source_46 = MAKE_FUNCTION_httpx$_transports$default$$$function__1__load_httpcore_exceptions(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain__load_httpcore_exceptions, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_instance_1 = module_var_accessor_httpx$_transports$default$contextlib(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_293c969e9c670524ff9a46935f42e838);

tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_transports$default$$$function__2_map_httpcore_exceptions(tstate, tmp_annotations_2);

frame_frame_httpx$_transports$default->m_frame.f_lineno = 95;
tmp_assign_source_47 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_map_httpcore_exceptions, tmp_assign_source_47);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_48;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_httpx$_transports$default$SyncByteStream(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto try_except_handler_6;
}
tmp_assign_source_48 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_48, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_49 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_6, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_51 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_51;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_ResponseStream;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 121;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_52;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_6;
}
frame_frame_httpx$_transports$default->m_frame.f_lineno = 121;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 121;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_53;
}
branch_end_1:;
{
PyObject *tmp_assign_source_54;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_transports$default$$$class__1_ResponseStream_121 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_ResponseStream;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_121;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_8;
}
frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2 = MAKE_CLASS_FRAME(tstate, code_objects_f135e1a5cce6675089909a7a4946684d, module_httpx$_transports$default, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_9b004efb1c300d14996eb9634213bc01);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__3___init__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__4___iter__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__5_close(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$default$$$class__1_ResponseStream_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__httpcore_stream_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_8;
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


exception_lineno = 121;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__1_ResponseStream_121, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_ResponseStream;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_httpx$_transports$default$$$class__1_ResponseStream_121;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 121;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_55;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_54 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_54);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_httpx$_transports$default$$$class__1_ResponseStream_121);
locals_httpx$_transports$default$$$class__1_ResponseStream_121 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$default$$$class__1_ResponseStream_121);
locals_httpx$_transports$default$$$class__1_ResponseStream_121 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 121;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseStream, tmp_assign_source_54);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_56;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_httpx$_transports$default$BaseTransport(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseTransport);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto try_except_handler_9;
}
tmp_assign_source_56 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_56, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_57 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_7, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_59 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_59;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_HTTPTransport;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 135;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_60;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
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
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_9;
}
frame_frame_httpx$_transports$default->m_frame.f_lineno = 135;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 135;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_61;
}
branch_end_4:;
{
PyObject *tmp_assign_source_62;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpx$_transports$default$$$class__2_HTTPTransport_135 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPTransport;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_135;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_11;
}
frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3 = MAKE_CLASS_FRAME(tstate, code_objects_0023dac8fb20e98aaee76c0f2b28f66c, module_httpx$_transports$default, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_10;
PyObject *tmp_annotations_6;
tmp_tuple_element_10 = Py_True;
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 11);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_10);
tmp_tuple_element_10 = PyObject_GetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, mod_consts.const_str_plain_DEFAULT_LIMITS);

if (tmp_tuple_element_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_10 = module_var_accessor_httpx$_transports$default$DEFAULT_LIMITS(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_LIMITS);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_tuple_element_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

PyTuple_SET_ITEM(tmp_defaults_1, 5, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_10);
tmp_tuple_element_10 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_10);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_defaults_1);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c164baf280cc2a01cb2ea3e7f78af35c);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__6___init__(tstate, tmp_defaults_1, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_74db876f2eed57fce7eecdf8c70e5747);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__7___enter__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_8;
tmp_defaults_2 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__8___exit__(tstate, tmp_defaults_2, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__9_handle_request(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, mod_consts.const_str_plain_handle_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__10_close(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$default$$$class__2_HTTPTransport_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__pool_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_11;
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


exception_lineno = 135;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__2_HTTPTransport_135, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_HTTPTransport;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_httpx$_transports$default$$$class__2_HTTPTransport_135;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 135;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_11;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_63;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_62 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_62);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_httpx$_transports$default$$$class__2_HTTPTransport_135);
locals_httpx$_transports$default$$$class__2_HTTPTransport_135 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$default$$$class__2_HTTPTransport_135);
locals_httpx$_transports$default$$$class__2_HTTPTransport_135 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 135;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPTransport, tmp_assign_source_62);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_httpx$_transports$default$AsyncByteStream(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;

    goto try_except_handler_12;
}
tmp_assign_source_64 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_64, 0, tmp_tuple_element_12);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_65 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_8, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_67 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_67;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_AsyncResponseStream;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 265;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_68;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_10, tmp_default_value_3);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_12;
}
frame_frame_httpx$_transports$default->m_frame.f_lineno = 265;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 265;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_69;
}
branch_end_7:;
{
PyObject *tmp_assign_source_70;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncResponseStream;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_265;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_14;
}
frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4 = MAKE_CLASS_FRAME(tstate, code_objects_e211fedc286163f7d0fbbdff211be6b6, module_httpx$_transports$default, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_d9081c362e28860f6bc08524b998d86c);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__11___init__(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__12___aiter__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__13_aclose(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$default$$$class__3_AsyncResponseStream_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__httpcore_stream_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_14;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_14;
}
branch_no_9:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_AsyncResponseStream;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 265;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_14;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_71;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_70 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_70);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265);
locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265);
locals_httpx$_transports$default$$$class__3_AsyncResponseStream_265 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 265;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResponseStream, tmp_assign_source_70);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_72;
PyObject *tmp_tuple_element_16;
tmp_tuple_element_16 = module_var_accessor_httpx$_transports$default$AsyncBaseTransport(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncBaseTransport);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;

    goto try_except_handler_15;
}
tmp_assign_source_72 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_72, 0, tmp_tuple_element_16);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_73 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_9, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_75 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_75;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_AsyncHTTPTransport;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 279;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_76;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_11, tmp_default_value_4);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
frame_frame_httpx$_transports$default->m_frame.f_lineno = 279;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 279;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_77;
}
branch_end_10:;
{
PyObject *tmp_assign_source_78;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8673a9a9d2444dbe06ccd5854ec0c795;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncHTTPTransport;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_279;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_17;
}
frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5 = MAKE_CLASS_FRAME(tstate, code_objects_7ac9551b5beeef53d32f5aa89ca7faa8, module_httpx$_transports$default, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5);
assert(Py_REFCNT(frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_19;
PyObject *tmp_annotations_14;
tmp_tuple_element_19 = Py_True;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 11);
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_19);
tmp_tuple_element_19 = PyObject_GetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, mod_consts.const_str_plain_DEFAULT_LIMITS);

if (tmp_tuple_element_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_19 = module_var_accessor_httpx$_transports$default$DEFAULT_LIMITS(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_LIMITS);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_2 = "o";
    goto tuple_build_exception_8;
}
        Py_INCREF(tmp_tuple_element_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_8;
    }
}

PyTuple_SET_ITEM(tmp_defaults_3, 5, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 6, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 7, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 8, tmp_tuple_element_19);
tmp_tuple_element_19 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_3, 9, tmp_tuple_element_19);
tmp_tuple_element_19 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 10, tmp_tuple_element_19);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_c164baf280cc2a01cb2ea3e7f78af35c);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__14___init__(tstate, tmp_defaults_3, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_53b9fad8417623e59559725c432d2457);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__15___aenter__(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, const_str_plain___aenter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_16;
tmp_defaults_4 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__16___aexit__(tstate, tmp_defaults_4, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, const_str_plain___aexit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__17_handle_async_request(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, mod_consts.const_str_plain_handle_async_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$default$$$function__18_aclose(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$default$$$class__4_AsyncHTTPTransport_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_17;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__pool_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_17;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_17;
}
branch_no_12:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_20 = mod_consts.const_str_plain_AsyncHTTPTransport;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_httpx$_transports$default->m_frame.f_lineno = 279;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_17;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_79;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_78 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_78);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279);
locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279);
locals_httpx$_transports$default$$$class__4_AsyncHTTPTransport_279 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 279;
goto try_except_handler_15;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$default, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPTransport, tmp_assign_source_78);
}
goto try_end_9;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
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
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$default->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_transports$default);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_transports$default", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._transports.default" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_transports$default);
    return module_httpx$_transports$default;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$default, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_transports$default", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'httpcore$_async$socks_proxy'
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



/* The "module_httpcore$_async$socks_proxy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_async$socks_proxy;
PyDictObject *moduledict_httpcore$_async$socks_proxy;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_socksio;
PyObject *const_str_plain_socks5;
PyObject *const_str_plain_SOCKS5Connection;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_SOCKS5AuthMethod;
PyObject *const_str_plain_NO_AUTH_REQUIRED;
PyObject *const_str_plain_USERNAME_PASSWORD;
PyObject *const_str_plain_SOCKS5AuthMethodsRequest;
PyObject *const_str_plain_data_to_send;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_write;
PyObject *const_tuple_int_pos_4096_tuple;
PyObject *const_tuple_str_plain_max_bytes_tuple;
PyObject *const_str_plain_receive_data;
PyObject *const_str_plain_SOCKS5AuthReply;
PyObject *const_str_plain_method;
PyObject *const_str_plain_AUTH_METHODS;
PyObject *const_str_plain_UNKNOWN;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_digest_3f1f16863ef795c86d7193563ad4007f;
PyObject *const_str_digest_733e878e5a06f73c04f18889f156a130;
PyObject *const_str_plain_SOCKS5UsernamePasswordRequest;
PyObject *const_str_plain_SOCKS5UsernamePasswordReply;
PyObject *const_str_plain_success;
PyObject *const_tuple_str_digest_bdfeefc8af325a811fc8ed55044844e4_tuple;
PyObject *const_str_plain_SOCKS5CommandRequest;
PyObject *const_str_plain_from_address;
PyObject *const_str_plain_SOCKS5Command;
PyObject *const_str_plain_CONNECT;
PyObject *const_str_plain_host;
PyObject *const_str_plain_port;
PyObject *const_str_plain_SOCKS5Reply;
PyObject *const_str_plain_reply_code;
PyObject *const_str_plain_SOCKS5ReplyCode;
PyObject *const_str_plain_SUCCEEDED;
PyObject *const_str_plain_REPLY_CODES;
PyObject *const_str_plain_UNKOWN;
PyObject *const_str_digest_36e7bceddcaad235e03dabd1b5715e8a;
PyObject *const_str_plain__init_socks5_connection;
PyObject *const_tuple_584d438a1b950e12506ceb210f3e7b1b_tuple;
PyObject *const_str_plain__ssl_context;
PyObject *const_str_plain_enforce_url;
PyObject *const_dict_e8cfb0b982ccbe43c16c46ef5a041797;
PyObject *const_str_plain__proxy_url;
PyObject *const_str_plain_enforce_bytes;
PyObject *const_dict_a837522e82526ac63b5805e45b1d06ab;
PyObject *const_str_plain__proxy_auth;
PyObject *const_str_digest_a74b1e62886da4928b7e7ebece05bde2;
PyObject *const_str_plain_AsyncSocks5Connection;
PyObject *const_str_plain_origin;
PyObject *const_str_plain__keepalive_expiry;
PyObject *const_str_plain__http1;
PyObject *const_str_plain__http2;
PyObject *const_str_plain__network_backend;
PyObject *const_tuple_6973327924dea59366ccac80a260a504_tuple;
PyObject *const_str_plain__proxy_origin;
PyObject *const_str_plain__remote_origin;
PyObject *const_str_plain_AutoBackend;
PyObject *const_str_plain_AsyncLock;
PyObject *const_str_plain__connect_lock;
PyObject *const_str_plain__connection;
PyObject *const_str_plain__connect_failed;
PyObject *const_str_plain_request;
PyObject *const_str_plain_extensions;
PyObject *const_str_plain_timeout;
PyObject *const_tuple_str_plain_sni_hostname_none_tuple;
PyObject *const_tuple_str_plain_connect_none_tuple;
PyObject *const_str_plain_self;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_Trace;
PyObject *const_str_plain_connect_tcp;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_return_value;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_setup_socks5_connection;
PyObject *const_str_plain_scheme;
PyObject *const_bytes_digest_fd824d10b71da0d36a7043730be56d9f;
PyObject *const_str_plain_default_ssl_context;
PyObject *const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac;
PyObject *const_str_plain_h2;
PyObject *const_str_plain_set_alpn_protocols;
PyObject *const_str_plain_ssl_context;
PyObject *const_str_plain_server_hostname;
PyObject *const_str_plain_start_tls;
PyObject *const_str_plain_get_extra_info;
PyObject *const_tuple_str_plain_ssl_object_tuple;
PyObject *const_str_plain_selected_alpn_protocol;
PyObject *const_str_plain_http2;
PyObject *const_tuple_str_plain_AsyncHTTP2Connection_tuple;
PyObject *const_str_plain_AsyncHTTP2Connection;
PyObject *const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple;
PyObject *const_str_plain_AsyncHTTP11Connection;
PyObject *const_str_plain_is_available;
PyObject *const_str_plain_ConnectionNotAvailable;
PyObject *const_str_plain_handle_async_request;
PyObject *const_str_digest_fa7185e20a17830c96177e7c265294f9;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_29f482d84bb0282eebe3216cabfcbac8;
PyObject *const_str_plain_has_expired;
PyObject *const_str_plain_is_idle;
PyObject *const_str_plain_is_closed;
PyObject *const_str_digest_94ddc32f1f35d5f2568c88e5ee19bcdc;
PyObject *const_str_plain_CONNECTING;
PyObject *const_str_plain_info;
PyObject *const_str_chr_60;
PyObject *const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyObject *const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_ssl;
PyObject *const_str_digest_a7e613b85ae97ed5dd5cf79d1352168d;
PyObject *const_tuple_str_plain_AutoBackend_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
PyObject *const_tuple_str_plain_AsyncNetworkBackend_str_plain_AsyncNetworkStream_tuple;
PyObject *const_str_plain_AsyncNetworkBackend;
PyObject *const_str_plain_AsyncNetworkStream;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_ConnectionNotAvailable_str_plain_ProxyError_tuple;
PyObject *const_str_plain__models;
PyObject *const_tuple_1e97d781dc24c2cc3518976d28368d8c_tuple;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_Origin;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_Response;
PyObject *const_str_plain__ssl;
PyObject *const_tuple_str_plain_default_ssl_context_tuple;
PyObject *const_str_plain__synchronization;
PyObject *const_tuple_str_plain_AsyncLock_tuple;
PyObject *const_str_plain__trace;
PyObject *const_tuple_str_plain_Trace_tuple;
PyObject *const_str_plain_connection_pool;
PyObject *const_tuple_str_plain_AsyncConnectionPool_tuple;
PyObject *const_str_plain_AsyncConnectionPool;
PyObject *const_str_plain_http11;
PyObject *const_tuple_str_plain_AsyncHTTP11Connection_tuple;
PyObject *const_str_plain_interfaces;
PyObject *const_tuple_str_plain_AsyncConnectionInterface_tuple;
PyObject *const_str_plain_AsyncConnectionInterface;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_ea82faf34f0599bfeebad7694c6f8d60_tuple;
PyObject *const_dict_a1fb49205ab2b7c12eb911196f337113;
PyObject *const_dict_3e9450acf95e75c23046a155d2b8ae38;
PyObject *const_dict_a767a9b08b9f9c71fccd8947318860e5;
PyObject *const_dict_c9cff1a205288565c27785331cc4fbe5;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_AsyncSOCKSProxy;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_96840c6442204637b2a7ad82cb22fcf9;
PyObject *const_str_digest_b4f94e07c384f06e24adb007ddd01145;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_105;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_int_pos_10_none_none_true_false_int_0_none_tuple;
PyObject *const_dict_27006a116bb6df7bdf48d1193e66c431;
PyObject *const_str_digest_abaf54e6cdb1008cc648e4f9b6fca74b;
PyObject *const_dict_b633884e38fcfd2baba56b8248acc916;
PyObject *const_str_plain_create_connection;
PyObject *const_str_digest_d716feadebbb5ee20dee2841f1f56ae3;
PyObject *const_tuple_0577337803bc0093f50da22f37ce0b12_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_189;
PyObject *const_tuple_none_none_none_true_false_none_tuple;
PyObject *const_dict_5f26e560622962ba35d8b5d5e76efb45;
PyObject *const_str_digest_c5cccf18cc637290d853dd2f44d7afc9;
PyObject *const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4;
PyObject *const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb;
PyObject *const_str_plain_can_handle_request;
PyObject *const_str_digest_0ee1b06971288a2f680706bd121e28e5;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_0271121404f41a9175ed13b8cfd71979;
PyObject *const_str_digest_bdc31163bcb13b7a8eca4fe15d88880b;
PyObject *const_str_digest_fe4f6a678e3cfbd22a627d3bb04815a1;
PyObject *const_str_digest_0435c2febb2b8b3f90d61eb7910c3377;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_0b593b08c880fb20255f8e530ce80d4e;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_0b80faf152a1d0bd164bc7d63a7d5db0;
PyObject *const_tuple_15b3d664bfd15464b79c4c8f62f42c0a_tuple;
PyObject *const_str_digest_ad696ed73319a7508e1f20cb6ddd4920;
PyObject *const_str_digest_064dea18cc50235231b2286a339f82d8;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_6215bb90ed63acb2fb53254eb1af6f68_tuple;
PyObject *const_tuple_21358ffa4caf3bea43182c1a4c63e91a_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_97825daef60b9efc45ac12d08b3ad6ce_tuple;
PyObject *const_tuple_str_plain_self_str_plain_origin_tuple;
PyObject *const_tuple_3a28733811d7b55216ec96f6edab5c0e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[194];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpcore._async.socks_proxy"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_socksio);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_socks5);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5Connection);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5AuthMethod);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_AUTH_REQUIRED);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_USERNAME_PASSWORD);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5AuthMethodsRequest);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_to_send);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4096_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_bytes_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5AuthReply);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_AUTH_METHODS);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNKNOWN);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f1f16863ef795c86d7193563ad4007f);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_733e878e5a06f73c04f18889f156a130);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5UsernamePasswordRequest);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5UsernamePasswordReply);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_success);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bdfeefc8af325a811fc8ed55044844e4_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5CommandRequest);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_address);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5Command);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONNECT);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5Reply);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_reply_code);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5ReplyCode);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUCCEEDED);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_REPLY_CODES);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNKOWN);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_36e7bceddcaad235e03dabd1b5715e8a);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__init_socks5_connection);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_584d438a1b950e12506ceb210f3e7b1b_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_context);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_url);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_url);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_bytes);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_auth);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_a74b1e62886da4928b7e7ebece05bde2);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSocks5Connection);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__keepalive_expiry);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__http1);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__http2);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__network_backend);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_6973327924dea59366ccac80a260a504_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_origin);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__remote_origin);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_AutoBackend);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncLock);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__connect_lock);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain__connection);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__connect_failed);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sni_hostname_none_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_none_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Trace);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect_tcp);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_return_value);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_setup_socks5_connection);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_fd824d10b71da0d36a7043730be56d9f);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_ssl_context);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_h2);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_alpn_protocols);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_server_hostname);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_tls);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_extra_info);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_object_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_selected_alpn_protocol);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_http2);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP2Connection);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP11Connection);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_available);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionNotAvailable);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa7185e20a17830c96177e7c265294f9);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_29f482d84bb0282eebe3216cabfcbac8);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_expired);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_idle);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_94ddc32f1f35d5f2568c88e5ee19bcdc);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONNECTING);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7e613b85ae97ed5dd5cf79d1352168d);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AutoBackend_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncNetworkBackend_str_plain_AsyncNetworkStream_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkBackend);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkStream);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectionNotAvailable_str_plain_ProxyError_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_1e97d781dc24c2cc3518976d28368d8c_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Origin);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_ssl_context_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain__synchronization);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncLock_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__trace);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Trace_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_http11);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_interfaces);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionInterface);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ea82faf34f0599bfeebad7694c6f8d60_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_a1fb49205ab2b7c12eb911196f337113);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_3e9450acf95e75c23046a155d2b8ae38);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_a767a9b08b9f9c71fccd8947318860e5);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_c9cff1a205288565c27785331cc4fbe5);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSOCKSProxy);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_96840c6442204637b2a7ad82cb22fcf9);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_int_pos_105);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_int_pos_10_none_none_true_false_int_0_none_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_27006a116bb6df7bdf48d1193e66c431);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_abaf54e6cdb1008cc648e4f9b6fca74b);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_d716feadebbb5ee20dee2841f1f56ae3);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_0577337803bc0093f50da22f37ce0b12_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_189);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_false_none_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_5f26e560622962ba35d8b5d5e76efb45);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5cccf18cc637290d853dd2f44d7afc9);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_handle_request);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ee1b06971288a2f680706bd121e28e5);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_0271121404f41a9175ed13b8cfd71979);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdc31163bcb13b7a8eca4fe15d88880b);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe4f6a678e3cfbd22a627d3bb04815a1);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_0435c2febb2b8b3f90d61eb7910c3377);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b593b08c880fb20255f8e530ce80d4e);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b80faf152a1d0bd164bc7d63a7d5db0);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_15b3d664bfd15464b79c4c8f62f42c0a_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad696ed73319a7508e1f20cb6ddd4920);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_064dea18cc50235231b2286a339f82d8);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_6215bb90ed63acb2fb53254eb1af6f68_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_21358ffa4caf3bea43182c1a4c63e91a_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_97825daef60b9efc45ac12d08b3ad6ce_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_3a28733811d7b55216ec96f6edab5c0e_tuple);
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
void checkModuleConstants_httpcore$_async$socks_proxy(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_socksio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socksio);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_socks5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socks5);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5Connection);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5AuthMethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5AuthMethod);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_AUTH_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_AUTH_REQUIRED);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_USERNAME_PASSWORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_USERNAME_PASSWORD);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5AuthMethodsRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5AuthMethodsRequest);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_to_send));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data_to_send);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4096_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_4096_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_max_bytes_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive_data);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5AuthReply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5AuthReply);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_AUTH_METHODS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AUTH_METHODS);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNKNOWN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNKNOWN);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f1f16863ef795c86d7193563ad4007f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f1f16863ef795c86d7193563ad4007f);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_733e878e5a06f73c04f18889f156a130));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_733e878e5a06f73c04f18889f156a130);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5UsernamePasswordRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5UsernamePasswordRequest);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5UsernamePasswordReply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5UsernamePasswordReply);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_success));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_success);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bdfeefc8af325a811fc8ed55044844e4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_bdfeefc8af325a811fc8ed55044844e4_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5CommandRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5CommandRequest);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_address);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5Command));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5Command);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONNECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONNECT);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5Reply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5Reply);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_reply_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reply_code);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKS5ReplyCode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKS5ReplyCode);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUCCEEDED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SUCCEEDED);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_REPLY_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REPLY_CODES);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNKOWN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNKOWN);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_36e7bceddcaad235e03dabd1b5715e8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36e7bceddcaad235e03dabd1b5715e8a);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__init_socks5_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__init_socks5_connection);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_584d438a1b950e12506ceb210f3e7b1b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_584d438a1b950e12506ceb210f3e7b1b_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ssl_context);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enforce_url);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy_url);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enforce_bytes);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy_auth);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_a74b1e62886da4928b7e7ebece05bde2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a74b1e62886da4928b7e7ebece05bde2);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSocks5Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncSocks5Connection);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__keepalive_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__keepalive_expiry);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__http1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http1);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__http2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http2);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__network_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__network_backend);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_6973327924dea59366ccac80a260a504_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6973327924dea59366ccac80a260a504_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy_origin);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__remote_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__remote_origin);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_AutoBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AutoBackend);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncLock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncLock);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__connect_lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connect_lock);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain__connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connection);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__connect_failed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connect_failed);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sni_hostname_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sni_hostname_none_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_connect_none_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Trace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Trace);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect_tcp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connect_tcp);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_return_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return_value);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_setup_socks5_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setup_socks5_connection);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_fd824d10b71da0d36a7043730be56d9f));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_fd824d10b71da0d36a7043730be56d9f);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_ssl_context);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_h2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_h2);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_alpn_protocols));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_alpn_protocols);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl_context);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_server_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server_hostname);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_tls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_tls);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_extra_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_extra_info);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ssl_object_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_selected_alpn_protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selected_alpn_protocol);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_http2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http2);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP2Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTP2Connection);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP11Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTP11Connection);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_available));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_available);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionNotAvailable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionNotAvailable);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_async_request);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa7185e20a17830c96177e7c265294f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa7185e20a17830c96177e7c265294f9);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_29f482d84bb0282eebe3216cabfcbac8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29f482d84bb0282eebe3216cabfcbac8);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_expired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_expired);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_idle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_idle);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_closed);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_94ddc32f1f35d5f2568c88e5ee19bcdc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94ddc32f1f35d5f2568c88e5ee19bcdc);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONNECTING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONNECTING);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7e613b85ae97ed5dd5cf79d1352168d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7e613b85ae97ed5dd5cf79d1352168d);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AutoBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AutoBackend_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncNetworkBackend_str_plain_AsyncNetworkStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncNetworkBackend_str_plain_AsyncNetworkStream_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncNetworkBackend);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncNetworkStream);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectionNotAvailable_str_plain_ProxyError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConnectionNotAvailable_str_plain_ProxyError_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_1e97d781dc24c2cc3518976d28368d8c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1e97d781dc24c2cc3518976d28368d8c_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Origin);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ssl);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_ssl_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_ssl_context_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain__synchronization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__synchronization);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncLock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncLock_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__trace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__trace);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Trace_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Trace_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection_pool);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConnectionPool);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_http11));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http11);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_interfaces));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_interfaces);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionInterface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConnectionInterface);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ea82faf34f0599bfeebad7694c6f8d60_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ea82faf34f0599bfeebad7694c6f8d60_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_a1fb49205ab2b7c12eb911196f337113));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a1fb49205ab2b7c12eb911196f337113);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_3e9450acf95e75c23046a155d2b8ae38));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3e9450acf95e75c23046a155d2b8ae38);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_a767a9b08b9f9c71fccd8947318860e5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a767a9b08b9f9c71fccd8947318860e5);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_c9cff1a205288565c27785331cc4fbe5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c9cff1a205288565c27785331cc4fbe5);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSOCKSProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncSOCKSProxy);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_96840c6442204637b2a7ad82cb22fcf9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96840c6442204637b2a7ad82cb22fcf9);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_int_pos_105));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_105);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_int_pos_10_none_none_true_false_int_0_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_int_pos_10_none_none_true_false_int_0_none_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_27006a116bb6df7bdf48d1193e66c431));
CHECK_OBJECT_DEEP(mod_consts.const_dict_27006a116bb6df7bdf48d1193e66c431);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_abaf54e6cdb1008cc648e4f9b6fca74b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abaf54e6cdb1008cc648e4f9b6fca74b);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_connection);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_d716feadebbb5ee20dee2841f1f56ae3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d716feadebbb5ee20dee2841f1f56ae3);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_0577337803bc0093f50da22f37ce0b12_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0577337803bc0093f50da22f37ce0b12_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_189));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_189);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_true_false_none_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_5f26e560622962ba35d8b5d5e76efb45));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f26e560622962ba35d8b5d5e76efb45);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5cccf18cc637290d853dd2f44d7afc9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5cccf18cc637290d853dd2f44d7afc9);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_handle_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_handle_request);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ee1b06971288a2f680706bd121e28e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ee1b06971288a2f680706bd121e28e5);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_0271121404f41a9175ed13b8cfd71979));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0271121404f41a9175ed13b8cfd71979);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdc31163bcb13b7a8eca4fe15d88880b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bdc31163bcb13b7a8eca4fe15d88880b);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe4f6a678e3cfbd22a627d3bb04815a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe4f6a678e3cfbd22a627d3bb04815a1);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_0435c2febb2b8b3f90d61eb7910c3377));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0435c2febb2b8b3f90d61eb7910c3377);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b593b08c880fb20255f8e530ce80d4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b593b08c880fb20255f8e530ce80d4e);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b80faf152a1d0bd164bc7d63a7d5db0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b80faf152a1d0bd164bc7d63a7d5db0);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_15b3d664bfd15464b79c4c8f62f42c0a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_15b3d664bfd15464b79c4c8f62f42c0a_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad696ed73319a7508e1f20cb6ddd4920));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad696ed73319a7508e1f20cb6ddd4920);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_064dea18cc50235231b2286a339f82d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_064dea18cc50235231b2286a339f82d8);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_6215bb90ed63acb2fb53254eb1af6f68_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6215bb90ed63acb2fb53254eb1af6f68_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_21358ffa4caf3bea43182c1a4c63e91a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_21358ffa4caf3bea43182c1a4c63e91a_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_97825daef60b9efc45ac12d08b3ad6ce_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_97825daef60b9efc45ac12d08b3ad6ce_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_3a28733811d7b55216ec96f6edab5c0e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a28733811d7b55216ec96f6edab5c0e_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 19
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
static PyObject *module_var_accessor_httpcore$_async$socks_proxy$AUTH_METHODS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTH_METHODS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTH_METHODS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTH_METHODS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTH_METHODS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTH_METHODS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTH_METHODS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTH_METHODS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTH_METHODS);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$AsyncConnectionInterface(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConnectionInterface);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConnectionInterface, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConnectionInterface);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConnectionInterface, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$AsyncConnectionPool(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConnectionPool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConnectionPool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConnectionPool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConnectionPool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$AsyncHTTP11Connection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncHTTP11Connection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncHTTP11Connection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncHTTP11Connection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncHTTP11Connection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$AsyncLock(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncLock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncLock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncLock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncLock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$AsyncSocks5Connection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncSocks5Connection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncSocks5Connection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncSocks5Connection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncSocks5Connection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncSocks5Connection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncSocks5Connection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncSocks5Connection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncSocks5Connection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$AutoBackend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AutoBackend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AutoBackend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AutoBackend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AutoBackend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AutoBackend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AutoBackend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AutoBackend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AutoBackend);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$ConnectionNotAvailable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionNotAvailable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionNotAvailable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionNotAvailable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionNotAvailable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$ProxyError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$REPLY_CODES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLY_CODES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REPLY_CODES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REPLY_CODES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REPLY_CODES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REPLY_CODES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLY_CODES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLY_CODES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLY_CODES);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$Trace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Trace);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Trace, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Trace);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Trace, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$_init_socks5_connection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain__init_socks5_connection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__init_socks5_connection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__init_socks5_connection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__init_socks5_connection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__init_socks5_connection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain__init_socks5_connection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain__init_socks5_connection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__init_socks5_connection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$default_ssl_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_default_ssl_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_default_ssl_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_default_ssl_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_default_ssl_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$enforce_bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enforce_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enforce_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enforce_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enforce_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$enforce_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enforce_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enforce_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enforce_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enforce_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$socks_proxy$socksio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$socks_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$socks_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_socksio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$socks_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socksio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socksio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socksio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socksio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_socksio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_socksio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_socksio);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cb521cf929bbf8f19875ce42b285c9da;
static PyCodeObject *code_objects_b475fc93fee46f9d9aa5b37f80697b64;
static PyCodeObject *code_objects_8e7d210d257710ad47f2f4c5f36b41dc;
static PyCodeObject *code_objects_a21feb389769f23d8ab7e4ab5a5bdd71;
static PyCodeObject *code_objects_6b0aaef53c972bf9f284ba6a92d1fae3;
static PyCodeObject *code_objects_fa0eb63a78f0abeb46aa989057bfaeea;
static PyCodeObject *code_objects_23dfd3afd5c394028422c4400d57b1c3;
static PyCodeObject *code_objects_73b8c340592bf90fc50235435d52533f;
static PyCodeObject *code_objects_1a7fff30e72f9e76a3c5eeb13c7da2ba;
static PyCodeObject *code_objects_06adc3f24ca802c843dd493a88ffa071;
static PyCodeObject *code_objects_fb35783c4b16938d999d1dbadb32f806;
static PyCodeObject *code_objects_c7df146048d80648ea45f85b674a1d9b;
static PyCodeObject *code_objects_484abf3b3d9783b1d85b6b51ab3bdce9;
static PyCodeObject *code_objects_3f5e2452656d02019c05254b2adbf30b;
static PyCodeObject *code_objects_ee4beed070d16271eddf5b0ed520aa33;
static PyCodeObject *code_objects_28fc2375a8cfa89763e49c452ca0a431;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ad696ed73319a7508e1f20cb6ddd4920); CHECK_OBJECT(module_filename_obj);
code_objects_cb521cf929bbf8f19875ce42b285c9da = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_064dea18cc50235231b2286a339f82d8, mod_consts.const_str_digest_064dea18cc50235231b2286a339f82d8, NULL, NULL, 0, 0, 0);
code_objects_b475fc93fee46f9d9aa5b37f80697b64 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncSOCKSProxy, mod_consts.const_str_plain_AsyncSOCKSProxy, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8e7d210d257710ad47f2f4c5f36b41dc = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncSocks5Connection, mod_consts.const_str_plain_AsyncSocks5Connection, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a21feb389769f23d8ab7e4ab5a5bdd71 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_abaf54e6cdb1008cc648e4f9b6fca74b, mod_consts.const_tuple_6215bb90ed63acb2fb53254eb1af6f68_tuple, mod_consts.const_tuple_str_plain___class___tuple, 11, 0, 0);
code_objects_6b0aaef53c972bf9f284ba6a92d1fae3 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_c5cccf18cc637290d853dd2f44d7afc9, mod_consts.const_tuple_21358ffa4caf3bea43182c1a4c63e91a_tuple, NULL, 9, 0, 0);
code_objects_fa0eb63a78f0abeb46aa989057bfaeea = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_0b80faf152a1d0bd164bc7d63a7d5db0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_23dfd3afd5c394028422c4400d57b1c3 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__init_socks5_connection, mod_consts.const_str_plain__init_socks5_connection, mod_consts.const_tuple_97825daef60b9efc45ac12d08b3ad6ce_tuple, NULL, 1, 3, 0);
code_objects_73b8c340592bf90fc50235435d52533f = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_29f482d84bb0282eebe3216cabfcbac8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1a7fff30e72f9e76a3c5eeb13c7da2ba = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_can_handle_request, mod_consts.const_str_digest_0ee1b06971288a2f680706bd121e28e5, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple, NULL, 2, 0, 0);
code_objects_06adc3f24ca802c843dd493a88ffa071 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_connection, mod_consts.const_str_digest_d716feadebbb5ee20dee2841f1f56ae3, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple, NULL, 2, 0, 0);
code_objects_fb35783c4b16938d999d1dbadb32f806 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_async_request, mod_consts.const_str_digest_fa7185e20a17830c96177e7c265294f9, mod_consts.const_tuple_3a28733811d7b55216ec96f6edab5c0e_tuple, NULL, 2, 0, 0);
code_objects_c7df146048d80648ea45f85b674a1d9b = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_has_expired, mod_consts.const_str_digest_bdc31163bcb13b7a8eca4fe15d88880b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_484abf3b3d9783b1d85b6b51ab3bdce9 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_info, mod_consts.const_str_digest_0b593b08c880fb20255f8e530ce80d4e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3f5e2452656d02019c05254b2adbf30b = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_available, mod_consts.const_str_digest_0271121404f41a9175ed13b8cfd71979, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ee4beed070d16271eddf5b0ed520aa33 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_closed, mod_consts.const_str_digest_0435c2febb2b8b3f90d61eb7910c3377, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_28fc2375a8cfa89763e49c452ca0a431 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_idle, mod_consts.const_str_digest_fe4f6a678e3cfbd22a627d3bb04815a1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__10_is_idle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__11_is_closed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__12_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__3_create_connection(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__5_handle_async_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__6_can_handle_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__7_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__8_is_available(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__9_has_expired(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_port = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_auth = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_auth;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_host;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_port;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_stream;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_stream);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(par_host);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
par_host = NULL;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
CHECK_OBJECT(par_auth);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
par_auth = NULL;
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
struct httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection_locals {
PyObject *var_conn;
PyObject *var_auth_method;
PyObject *var_outgoing_bytes;
PyObject *var_incoming_bytes;
PyObject *var_response;
PyObject *var_requested;
PyObject *var_responded;
PyObject *var_username;
PyObject *var_password;
PyObject *var_reply_code;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection_locals *coroutine_heap = (struct httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_conn = NULL;
coroutine_heap->var_auth_method = NULL;
coroutine_heap->var_outgoing_bytes = NULL;
coroutine_heap->var_incoming_bytes = NULL;
coroutine_heap->var_response = NULL;
coroutine_heap->var_requested = NULL;
coroutine_heap->var_responded = NULL;
coroutine_heap->var_username = NULL;
coroutine_heap->var_password = NULL;
coroutine_heap->var_reply_code = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_23dfd3afd5c394028422c4400d57b1c3, module_httpcore$_async$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 49;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socks5);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 49;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 49;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_SOCKS5Connection);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 49;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_conn == NULL);
coroutine_heap->var_conn = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_auth);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 54;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_4 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 53;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 53;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SOCKS5AuthMethod);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 53;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_NO_AUTH_REQUIRED);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 53;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_7 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SOCKS5AuthMethod);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_USERNAME_PASSWORD);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(coroutine_heap->var_auth_method == NULL);
coroutine_heap->var_auth_method = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_1;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_expression_value_8 = coroutine_heap->var_conn;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_send);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_socks5);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_auth_method);
tmp_list_element_1 = coroutine_heap->var_auth_method;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
coroutine->m_frame->m_frame.f_lineno = 57;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_SOCKS5AuthMethodsRequest, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_called_instance_3 = coroutine_heap->var_conn;
coroutine->m_frame->m_frame.f_lineno = 58;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 58;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_outgoing_bytes == NULL);
coroutine_heap->var_outgoing_bytes = tmp_assign_source_3;
}
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 59;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
CHECK_OBJECT(coroutine_heap->var_outgoing_bytes);
tmp_args_element_value_3 = coroutine_heap->var_outgoing_bytes;
coroutine->m_frame->m_frame.f_lineno = 59;
tmp_expression_value_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_write, tmp_args_element_value_3);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = ASYNC_AWAIT(tstate, tmp_expression_value_11, await_normal);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_10;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_14;
coroutine->m_frame->m_frame.f_lineno = 62;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_read);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 62;
tmp_expression_value_13 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_4096_tuple, 0), mod_consts.const_tuple_str_plain_max_bytes_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = ASYNC_AWAIT(tstate, tmp_expression_value_13, await_normal);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_12;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = yield_return_value;
assert(coroutine_heap->var_incoming_bytes == NULL);
coroutine_heap->var_incoming_bytes = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_called_instance_5 = coroutine_heap->var_conn;
CHECK_OBJECT(coroutine_heap->var_incoming_bytes);
tmp_args_element_value_4 = coroutine_heap->var_incoming_bytes;
coroutine->m_frame->m_frame.f_lineno = 63;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_receive_data, tmp_args_element_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_response == NULL);
coroutine_heap->var_response = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_isinstance_inst_1 = coroutine_heap->var_response;
tmp_expression_value_16 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 64;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 64;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_SOCKS5AuthReply);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 64;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 64;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 64;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
coroutine->m_frame->m_frame.f_lineno = 64;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_17 = coroutine_heap->var_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_method);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 65;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_auth_method);
tmp_cmp_expr_right_2 = coroutine_heap->var_auth_method;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 65;
coroutine_heap->type_description_1 = "ccccoooooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_18 = module_var_accessor_httpcore$_async$socks_proxy$AUTH_METHODS(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AUTH_METHODS);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 66;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 66;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_auth_method);
tmp_args_element_value_5 = coroutine_heap->var_auth_method;
tmp_args_element_value_6 = mod_consts.const_str_plain_UNKNOWN;
coroutine->m_frame->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 66;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_requested == NULL);
coroutine_heap->var_requested = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_8;
tmp_expression_value_19 = module_var_accessor_httpcore$_async$socks_proxy$AUTH_METHODS(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AUTH_METHODS);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_20 = coroutine_heap->var_response;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_method);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_UNKNOWN;
coroutine->m_frame->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_responded == NULL);
coroutine_heap->var_responded = tmp_assign_source_7;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_5 = module_var_accessor_httpcore$_async$socks_proxy$ProxyError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 68;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_3f1f16863ef795c86d7193563ad4007f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_requested);
tmp_format_value_1 = coroutine_heap->var_requested;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 69;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_733e878e5a06f73c04f18889f156a130;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_responded);
tmp_format_value_2 = coroutine_heap->var_responded;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 69;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_9 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_9 == NULL));
coroutine->m_frame->m_frame.f_lineno = 68;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 68;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 68;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 68;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_21 = coroutine_heap->var_response;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_method);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_24 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_SOCKS5AuthMethod);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_USERNAME_PASSWORD);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_auth);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 74;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
coroutine->m_frame->m_frame.f_lineno = 74;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_3;
coroutine_heap->exception_lineno = 74;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_auth);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 75;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto try_except_handler_2;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 75;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 75;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 75;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 75;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_11 = coroutine_heap->tmp_tuple_unpack_1__element_1;
assert(coroutine_heap->var_username == NULL);
Py_INCREF(tmp_assign_source_11);
coroutine_heap->var_username = tmp_assign_source_11;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_12 = coroutine_heap->tmp_tuple_unpack_1__element_2;
assert(coroutine_heap->var_password == NULL);
Py_INCREF(tmp_assign_source_12);
coroutine_heap->var_password = tmp_assign_source_12;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_instance_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_expression_value_25 = coroutine_heap->var_conn;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_send);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 76;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_26 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_6);

coroutine_heap->exception_lineno = 76;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_socks5);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_6);

coroutine_heap->exception_lineno = 76;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_username);
tmp_args_element_value_11 = coroutine_heap->var_username;
CHECK_OBJECT(coroutine_heap->var_password);
tmp_args_element_value_12 = coroutine_heap->var_password;
coroutine->m_frame->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_args_element_value_10 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain_SOCKS5UsernamePasswordRequest,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_6);

coroutine_heap->exception_lineno = 76;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 76;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 76;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_7;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_called_instance_7 = coroutine_heap->var_conn;
coroutine->m_frame->m_frame.f_lineno = 77;
tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 77;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_outgoing_bytes;
    assert(old != NULL);
    coroutine_heap->var_outgoing_bytes = tmp_assign_source_13;
    Py_DECREF(old);
}

}
{
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_13;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 78;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_8 = Nuitka_Cell_GET(coroutine->m_closure[3]);
CHECK_OBJECT(coroutine_heap->var_outgoing_bytes);
tmp_args_element_value_13 = coroutine_heap->var_outgoing_bytes;
coroutine->m_frame->m_frame.f_lineno = 78;
tmp_expression_value_28 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_write, tmp_args_element_value_13);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_27 = ASYNC_AWAIT(tstate, tmp_expression_value_28, await_normal);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_instance_8, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_27;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_instance_8, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_31;
coroutine->m_frame->m_frame.f_lineno = 81;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_31 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain_read);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 81;
tmp_expression_value_30 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_4096_tuple, 0), mod_consts.const_tuple_str_plain_max_bytes_tuple);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_29 = ASYNC_AWAIT(tstate, tmp_expression_value_30, await_normal);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_31, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_29;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_31, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_incoming_bytes;
    assert(old != NULL);
    coroutine_heap->var_incoming_bytes = tmp_assign_source_14;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_called_instance_9 = coroutine_heap->var_conn;
CHECK_OBJECT(coroutine_heap->var_incoming_bytes);
tmp_args_element_value_14 = coroutine_heap->var_incoming_bytes;
coroutine->m_frame->m_frame.f_lineno = 82;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_receive_data, tmp_args_element_value_14);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 82;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_response;
    assert(old != NULL);
    coroutine_heap->var_response = tmp_assign_source_15;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_isinstance_inst_2 = coroutine_heap->var_response;
tmp_expression_value_33 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_SOCKS5UsernamePasswordReply);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_4;
coroutine->m_frame->m_frame.f_lineno = 83;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_4;
coroutine_heap->exception_lineno = 83;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_34 = coroutine_heap->var_response;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_success);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 84;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 84;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_8;
tmp_called_value_8 = module_var_accessor_httpcore$_async$socks_proxy$ProxyError(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 85;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_digest_bdfeefc8af325a811fc8ed55044844e4_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_5;
coroutine_heap->exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
branch_no_3:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_15;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_17;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_expression_value_35 = coroutine_heap->var_conn;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain_send);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_38 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_9);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_9);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_SOCKS5CommandRequest);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_9);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_from_address);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_9);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_41 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);

coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);

coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_SOCKS5Command);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);

coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_CONNECT);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);

coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_16);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_args_element_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_17, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_port);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto tuple_build_exception_2;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
PyTuple_SET_ITEM0(tmp_args_element_value_17, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_17);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
coroutine->m_frame->m_frame.f_lineno = 89;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_9);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 88;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_10;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_called_instance_10 = coroutine_heap->var_conn;
coroutine->m_frame->m_frame.f_lineno = 93;
tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_outgoing_bytes;
    coroutine_heap->var_outgoing_bytes = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_called_instance_11;
PyObject *tmp_args_element_value_18;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 94;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 94;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_11 = Nuitka_Cell_GET(coroutine->m_closure[3]);
CHECK_OBJECT(coroutine_heap->var_outgoing_bytes);
tmp_args_element_value_18 = coroutine_heap->var_outgoing_bytes;
coroutine->m_frame->m_frame.f_lineno = 94;
tmp_expression_value_43 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts.const_str_plain_write, tmp_args_element_value_18);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 94;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_42 = ASYNC_AWAIT(tstate, tmp_expression_value_43, await_normal);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 94;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_43, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_42;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_43, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 94;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_46;
coroutine->m_frame->m_frame.f_lineno = 97;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_46 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, const_str_plain_read);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 97;
tmp_expression_value_45 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_4096_tuple, 0), mod_consts.const_tuple_str_plain_max_bytes_tuple);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_44 = ASYNC_AWAIT(tstate, tmp_expression_value_45, await_normal);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_46, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 6;
coroutine->m_yield_from = tmp_expression_value_44;
coroutine->m_awaiting = true;
return NULL;

yield_return_6:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_46, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_incoming_bytes;
    coroutine_heap->var_incoming_bytes = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_12;
PyObject *tmp_args_element_value_19;
CHECK_OBJECT(coroutine_heap->var_conn);
tmp_called_instance_12 = coroutine_heap->var_conn;
CHECK_OBJECT(coroutine_heap->var_incoming_bytes);
tmp_args_element_value_19 = coroutine_heap->var_incoming_bytes;
coroutine->m_frame->m_frame.f_lineno = 98;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_receive_data, tmp_args_element_value_19);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 98;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_response;
    coroutine_heap->var_response = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_isinstance_inst_3 = coroutine_heap->var_response;
tmp_expression_value_48 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_SOCKS5Reply);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_4 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_6;
coroutine->m_frame->m_frame.f_lineno = 99;
tmp_raise_type_6 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_6 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_6;
coroutine_heap->exception_lineno = 99;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoooooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_49 = coroutine_heap->var_response;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_reply_code);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_52 = module_var_accessor_httpcore$_async$socks_proxy$socksio(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socksio);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_socks5);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_SOCKS5ReplyCode);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_SUCCEEDED);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_54;
PyObject *tmp_args_element_value_21;
tmp_expression_value_53 = module_var_accessor_httpcore$_async$socks_proxy$REPLY_CODES(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_REPLY_CODES);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_54 = coroutine_heap->var_response;
tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_reply_code);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_12);

coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_21 = mod_consts.const_str_plain_UNKOWN;
coroutine->m_frame->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_reply_code == NULL);
coroutine_heap->var_reply_code = tmp_assign_source_19;
}
{
PyObject *tmp_raise_type_7;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_22;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_called_value_13 = module_var_accessor_httpcore$_async$socks_proxy$ProxyError(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_36e7bceddcaad235e03dabd1b5715e8a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(coroutine_heap->var_reply_code);
tmp_format_value_3 = coroutine_heap->var_reply_code;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_22 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_22 == NULL));
coroutine->m_frame->m_frame.f_lineno = 102;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_22);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_7 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "ccccoooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_7;
coroutine_heap->exception_lineno = 102;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccoooooooooo";
goto frame_exception_exit_1;
}
branch_no_8:;

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
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine_heap->var_conn,
    coroutine_heap->var_auth_method,
    coroutine_heap->var_outgoing_bytes,
    coroutine_heap->var_incoming_bytes,
    coroutine_heap->var_response,
    coroutine_heap->var_requested,
    coroutine_heap->var_responded,
    coroutine_heap->var_username,
    coroutine_heap->var_password,
    coroutine_heap->var_reply_code
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_conn);
CHECK_OBJECT(coroutine_heap->var_conn);
Py_DECREF(coroutine_heap->var_conn);
coroutine_heap->var_conn = NULL;
CHECK_OBJECT(coroutine_heap->var_auth_method);
CHECK_OBJECT(coroutine_heap->var_auth_method);
Py_DECREF(coroutine_heap->var_auth_method);
coroutine_heap->var_auth_method = NULL;
CHECK_OBJECT(coroutine_heap->var_outgoing_bytes);
CHECK_OBJECT(coroutine_heap->var_outgoing_bytes);
Py_DECREF(coroutine_heap->var_outgoing_bytes);
coroutine_heap->var_outgoing_bytes = NULL;
CHECK_OBJECT(coroutine_heap->var_incoming_bytes);
CHECK_OBJECT(coroutine_heap->var_incoming_bytes);
Py_DECREF(coroutine_heap->var_incoming_bytes);
coroutine_heap->var_incoming_bytes = NULL;
CHECK_OBJECT(coroutine_heap->var_response);
CHECK_OBJECT(coroutine_heap->var_response);
Py_DECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
Py_XDECREF(coroutine_heap->var_username);
coroutine_heap->var_username = NULL;
Py_XDECREF(coroutine_heap->var_password);
coroutine_heap->var_password = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_conn);
coroutine_heap->var_conn = NULL;
Py_XDECREF(coroutine_heap->var_auth_method);
coroutine_heap->var_auth_method = NULL;
Py_XDECREF(coroutine_heap->var_outgoing_bytes);
coroutine_heap->var_outgoing_bytes = NULL;
Py_XDECREF(coroutine_heap->var_incoming_bytes);
coroutine_heap->var_incoming_bytes = NULL;
Py_XDECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
Py_XDECREF(coroutine_heap->var_requested);
coroutine_heap->var_requested = NULL;
Py_XDECREF(coroutine_heap->var_responded);
coroutine_heap->var_responded = NULL;
Py_XDECREF(coroutine_heap->var_username);
coroutine_heap->var_username = NULL;
Py_XDECREF(coroutine_heap->var_password);
coroutine_heap->var_password = NULL;
Py_XDECREF(coroutine_heap->var_reply_code);
coroutine_heap->var_reply_code = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

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

static PyObject *MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection_context,
        module_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain__init_socks5_connection,
        NULL,
        code_objects_23dfd3afd5c394028422c4400d57b1c3,
        closure,
        4,
#if 1
        sizeof(struct httpcore$_async$socks_proxy$$$function__1__init_socks5_connection$$$coroutine__1__init_socks5_connection_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$socks_proxy$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy_url = python_pars[1];
PyObject *par_proxy_auth = python_pars[2];
PyObject *par_ssl_context = python_pars[3];
PyObject *par_max_connections = python_pars[4];
PyObject *par_max_keepalive_connections = python_pars[5];
PyObject *par_keepalive_expiry = python_pars[6];
PyObject *par_http1 = python_pars[7];
PyObject *par_http2 = python_pars[8];
PyObject *par_retries = python_pars[9];
PyObject *par_network_backend = python_pars[10];
PyObject *var_username = NULL;
PyObject *var_password = NULL;
PyObject *var_username_bytes = NULL;
PyObject *var_password_bytes = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a21feb389769f23d8ab7e4ab5a5bdd71, module_httpcore$_async$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__2___init__ = cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__2___init__);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_httpcore$_async$socks_proxy, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ssl_context);
tmp_kw_call_value_0_1 = par_ssl_context;
CHECK_OBJECT(par_max_connections);
tmp_kw_call_value_1_1 = par_max_connections;
CHECK_OBJECT(par_max_keepalive_connections);
tmp_kw_call_value_2_1 = par_max_keepalive_connections;
CHECK_OBJECT(par_keepalive_expiry);
tmp_kw_call_value_3_1 = par_keepalive_expiry;
CHECK_OBJECT(par_http1);
tmp_kw_call_value_4_1 = par_http1;
CHECK_OBJECT(par_http2);
tmp_kw_call_value_5_1 = par_http2;
CHECK_OBJECT(par_network_backend);
tmp_kw_call_value_6_1 = par_network_backend;
CHECK_OBJECT(par_retries);
tmp_kw_call_value_7_1 = par_retries;
frame_frame_httpcore$_async$socks_proxy$$$function__2___init__->m_frame.f_lineno = 153;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_584d438a1b950e12506ceb210f3e7b1b_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_ssl_context);
tmp_assattr_value_1 = par_ssl_context;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__ssl_context, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_2 = module_var_accessor_httpcore$_async$socks_proxy$enforce_url(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_url);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_url);
tmp_tuple_element_1 = par_proxy_url;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797);
frame_frame_httpcore$_async$socks_proxy$$$function__2___init__->m_frame.f_lineno = 164;
tmp_assattr_value_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__proxy_url, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_proxy_auth);
tmp_cmp_expr_left_1 = par_proxy_auth;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_proxy_auth);
tmp_iter_arg_1 = par_proxy_auth;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooc";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooooooooooooc";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooooooooooooc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooooooooooooc";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_username == NULL);
Py_INCREF(tmp_assign_source_4);
var_username = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_password == NULL);
Py_INCREF(tmp_assign_source_5);
var_password = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_3 = module_var_accessor_httpcore$_async$socks_proxy$enforce_bytes(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_bytes);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_username);
tmp_tuple_element_2 = var_username;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
frame_frame_httpcore$_async$socks_proxy$$$function__2___init__->m_frame.f_lineno = 167;
tmp_assign_source_6 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_username_bytes == NULL);
var_username_bytes = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_3;
tmp_called_value_4 = module_var_accessor_httpcore$_async$socks_proxy$enforce_bytes(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_bytes);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_password);
tmp_tuple_element_3 = var_password;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
frame_frame_httpcore$_async$socks_proxy$$$function__2___init__->m_frame.f_lineno = 168;
tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_password_bytes == NULL);
var_password_bytes = tmp_assign_source_7;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_username_bytes);
tmp_tuple_element_4 = var_username_bytes;
tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assattr_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_password_bytes);
tmp_tuple_element_4 = var_password_bytes;
PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__proxy_auth, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__proxy_auth, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooooc";
    goto frame_exception_exit_1;
}
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__2___init__,
    type_description_1,
    par_self,
    par_proxy_url,
    par_proxy_auth,
    par_ssl_context,
    par_max_connections,
    par_max_keepalive_connections,
    par_keepalive_expiry,
    par_http1,
    par_http2,
    par_retries,
    par_network_backend,
    var_username,
    var_password,
    var_username_bytes,
    var_password_bytes,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__2___init__ == cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__2___init__);

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
Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
Py_XDECREF(var_username_bytes);
var_username_bytes = NULL;
Py_XDECREF(var_password_bytes);
var_password_bytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
Py_XDECREF(var_username_bytes);
var_username_bytes = NULL;
Py_XDECREF(var_password_bytes);
var_password_bytes = NULL;
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
CHECK_OBJECT(par_proxy_url);
Py_DECREF(par_proxy_url);
CHECK_OBJECT(par_proxy_auth);
Py_DECREF(par_proxy_auth);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_max_connections);
Py_DECREF(par_max_connections);
CHECK_OBJECT(par_max_keepalive_connections);
Py_DECREF(par_max_keepalive_connections);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxy_url);
Py_DECREF(par_proxy_url);
CHECK_OBJECT(par_proxy_auth);
Py_DECREF(par_proxy_auth);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_max_connections);
Py_DECREF(par_max_connections);
CHECK_OBJECT(par_max_keepalive_connections);
Py_DECREF(par_max_keepalive_connections);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_async$socks_proxy$$$function__3_create_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_origin = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_06adc3f24ca802c843dd493a88ffa071, module_httpcore$_async$socks_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection = cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_expression_value_8;
tmp_called_value_1 = module_var_accessor_httpcore$_async$socks_proxy$AsyncSocks5Connection(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncSocks5Connection);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__proxy_url);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_origin);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_origin);
tmp_kw_call_value_1_1 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__proxy_auth);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 180;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__ssl_context);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 181;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_3_1);

exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__http1);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_4_1);

exception_lineno = 183;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__http2);
if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);

exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__network_backend);
if (tmp_kw_call_value_7_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);

exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection->m_frame.f_lineno = 177;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_6973327924dea59366ccac80a260a504_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
CHECK_OBJECT(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_6_1);
CHECK_OBJECT(tmp_kw_call_value_7_1);
Py_DECREF(tmp_kw_call_value_7_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection,
    type_description_1,
    par_self,
    par_origin
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection == cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__3_create_connection);

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
CHECK_OBJECT(par_origin);
Py_DECREF(par_origin);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_origin);
Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_async$socks_proxy$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy_origin = python_pars[1];
PyObject *par_remote_origin = python_pars[2];
PyObject *par_proxy_auth = python_pars[3];
PyObject *par_ssl_context = python_pars[4];
PyObject *par_keepalive_expiry = python_pars[5];
PyObject *par_http1 = python_pars[6];
PyObject *par_http2 = python_pars[7];
PyObject *par_network_backend = python_pars[8];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6b0aaef53c972bf9f284ba6a92d1fae3, module_httpcore$_async$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__4___init__ = cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__4___init__);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_proxy_origin);
tmp_assattr_value_1 = par_proxy_origin;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__proxy_origin, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_remote_origin);
tmp_assattr_value_2 = par_remote_origin;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__remote_origin, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_proxy_auth);
tmp_assattr_value_3 = par_proxy_auth;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__proxy_auth, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_ssl_context);
tmp_assattr_value_4 = par_ssl_context;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__ssl_context, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_keepalive_expiry);
tmp_assattr_value_5 = par_keepalive_expiry;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__keepalive_expiry, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_http1);
tmp_assattr_value_6 = par_http1;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__http1, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_http2);
tmp_assattr_value_7 = par_http2;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__http2, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_network_backend);
tmp_cmp_expr_left_1 = par_network_backend;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_httpcore$_async$socks_proxy$AutoBackend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AutoBackend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__4___init__->m_frame.f_lineno = 210;
tmp_assattr_value_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_network_backend);
tmp_assattr_value_8 = par_network_backend;
Py_INCREF(tmp_assattr_value_8);
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__network_backend, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_called_value_2;
PyObject *tmp_assattr_target_9;
tmp_called_value_2 = module_var_accessor_httpcore$_async$socks_proxy$AsyncLock(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncLock);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__4___init__->m_frame.f_lineno = 212;
tmp_assattr_value_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__connect_lock, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__connection, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__connect_failed, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__4___init__,
    type_description_1,
    par_self,
    par_proxy_origin,
    par_remote_origin,
    par_proxy_auth,
    par_ssl_context,
    par_keepalive_expiry,
    par_http1,
    par_http2,
    par_network_backend
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__4___init__ == cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__4___init__);

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
CHECK_OBJECT(par_proxy_origin);
Py_DECREF(par_proxy_origin);
CHECK_OBJECT(par_remote_origin);
Py_DECREF(par_remote_origin);
CHECK_OBJECT(par_proxy_auth);
Py_DECREF(par_proxy_auth);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxy_origin);
Py_DECREF(par_proxy_origin);
CHECK_OBJECT(par_remote_origin);
Py_DECREF(par_remote_origin);
CHECK_OBJECT(par_proxy_auth);
Py_DECREF(par_proxy_auth);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_async$socks_proxy$$$function__5_handle_async_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(tstate, tmp_closure_1);

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
struct httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals {
PyObject *var_timeouts;
PyObject *var_sni_hostname;
PyObject *var_timeout;
PyObject *var_kwargs;
PyObject *var_trace;
PyObject *var_stream;
PyObject *var_ssl_context;
PyObject *var_alpn_protocols;
PyObject *var_ssl_object;
PyObject *var_http2_negotiated;
PyObject *var_AsyncHTTP2Connection;
PyObject *var_exc;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
PyObject *tmp_with_3__enter;
PyObject *tmp_with_3__exit;
nuitka_bool tmp_with_3__indicator;
PyObject *tmp_with_3__source;
PyObject *tmp_with_4__enter;
PyObject *tmp_with_4__exit;
nuitka_bool tmp_with_4__indicator;
PyObject *tmp_with_4__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
int exception_keeper_lineno_16;
struct Nuitka_ExceptionStackItem exception_preserved_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
int exception_keeper_lineno_19;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
int exception_keeper_lineno_20;
};
#endif

static PyObject *httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals *coroutine_heap = (struct httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 20: goto yield_return_20;
case 19: goto yield_return_19;
case 18: goto yield_return_18;
case 17: goto yield_return_17;
case 16: goto yield_return_16;
case 15: goto yield_return_15;
case 14: goto yield_return_14;
case 13: goto yield_return_13;
case 12: goto yield_return_12;
case 11: goto yield_return_11;
case 10: goto yield_return_10;
case 9: goto yield_return_9;
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_timeouts = NULL;
coroutine_heap->var_sni_hostname = NULL;
coroutine_heap->var_timeout = NULL;
coroutine_heap->var_kwargs = NULL;
coroutine_heap->var_trace = NULL;
coroutine_heap->var_stream = NULL;
coroutine_heap->var_ssl_context = NULL;
coroutine_heap->var_alpn_protocols = NULL;
coroutine_heap->var_ssl_object = NULL;
coroutine_heap->var_http2_negotiated = NULL;
coroutine_heap->var_AsyncHTTP2Connection = NULL;
coroutine_heap->var_exc = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
coroutine_heap->tmp_with_3__enter = NULL;
coroutine_heap->tmp_with_3__exit = NULL;
coroutine_heap->tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_3__source = NULL;
coroutine_heap->tmp_with_4__enter = NULL;
coroutine_heap->tmp_with_4__exit = NULL;
coroutine_heap->tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_4__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_fb35783c4b16938d999d1dbadb32f806, module_httpcore$_async$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_extensions);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_timeout;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
coroutine->m_frame->m_frame.f_lineno = 217;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_timeouts == NULL);
coroutine_heap->var_timeouts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 218;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_extensions);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 218;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 218;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 218;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_sni_hostname_none_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 218;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sni_hostname == NULL);
coroutine_heap->var_sni_hostname = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->var_timeouts);
tmp_expression_value_5 = coroutine_heap->var_timeouts;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 219;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_connect_none_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_timeout == NULL);
coroutine_heap->var_timeout = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__connect_lock);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_4__source == NULL);
coroutine_heap->tmp_with_4__source = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_7 = coroutine_heap->tmp_with_4__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___aenter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 221;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_4__enter == NULL);
coroutine_heap->tmp_with_4__enter = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_8 = coroutine_heap->tmp_with_4__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___aexit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_4__exit == NULL);
coroutine_heap->tmp_with_4__exit = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
coroutine->m_frame->m_frame.f_lineno = 221;
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
tmp_expression_value_10 = coroutine_heap->tmp_with_4__enter;
tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_enter);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_9;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_4__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_4__enter = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_11;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 222;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 222;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
tmp_dict_key_1 = mod_consts.const_str_plain_host;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 226;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 226;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 226;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 226;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 226;
tmp_dict_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 226;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_9 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_port;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 227;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_1;
}

tmp_expression_value_16 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 227;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 227;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(coroutine_heap->var_timeout);
tmp_dict_value_1 = coroutine_heap->var_timeout;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_9);
goto try_except_handler_5;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(coroutine_heap->var_kwargs == NULL);
coroutine_heap->var_kwargs = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_6 = module_var_accessor_httpcore$_async$socks_proxy$Trace(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Trace);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_connect_tcp;
tmp_args_element_value_2 = module_var_accessor_httpcore$_async$socks_proxy$logger(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_args_element_value_4 = coroutine_heap->var_kwargs;
coroutine->m_frame->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_17 = coroutine_heap->tmp_with_1__source;
tmp_called_value_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_17, const_str_plain___aenter__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
coroutine->m_frame->m_frame.f_lineno = 230;
tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_18 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_12 = LOOKUP_SPECIAL(tstate, tmp_expression_value_18, const_str_plain___aexit__);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
coroutine->m_frame->m_frame.f_lineno = 230;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_20 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_19 = ASYNC_AWAIT(tstate, tmp_expression_value_20, await_enter);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_19;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_13 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_13;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_15 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_trace == NULL);
Py_INCREF(tmp_assign_source_15);
coroutine_heap->var_trace = tmp_assign_source_15;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_direct_call_arg2_1;
coroutine->m_frame->m_frame.f_lineno = 231;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 231;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_24 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__network_backend);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 231;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_8;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_connect_tcp);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 231;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_direct_call_arg2_1 = coroutine_heap->var_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_expression_value_22 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 231;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_21 = ASYNC_AWAIT(tstate, tmp_expression_value_22, await_normal);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 231;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_21;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 231;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_16 = yield_return_value;
assert(coroutine_heap->var_stream == NULL);
coroutine_heap->var_stream = tmp_assign_source_16;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(coroutine_heap->var_stream);
tmp_assattr_value_1 = coroutine_heap->var_stream;
CHECK_OBJECT(coroutine_heap->var_trace);
tmp_assattr_target_1 = coroutine_heap->var_trace;
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_return_value, tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 232;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_8:;
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
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_17;
tmp_assign_source_17 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_17;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
coroutine->m_frame->m_frame.f_lineno = 230;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_8 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_expression_value_26 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_25 = ASYNC_AWAIT(tstate, tmp_expression_value_26, await_exit);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_9;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_26, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_25;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_26, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_9;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_9;
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
    coroutine_heap->exception_lineno = 230;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_9;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 230;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_9;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_7;
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
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

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
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_called_value_9;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 230;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_9 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 230;
tmp_expression_value_28 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_27 = ASYNC_AWAIT(tstate, tmp_expression_value_28, await_exit);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_27;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_called_value_10;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 230;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_10 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 230;
tmp_expression_value_30 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_29 = ASYNC_AWAIT(tstate, tmp_expression_value_30, await_exit);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 6;
coroutine->m_yield_from = tmp_expression_value_29;
coroutine->m_awaiting = true;
return NULL;

yield_return_6:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 230;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_6;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
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
PyObject *tmp_assign_source_18;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_stream;
if (coroutine_heap->var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 236;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_dict_value_2 = coroutine_heap->var_stream;
tmp_assign_source_18 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_host;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 237;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}

tmp_expression_value_33 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 237;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 237;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 237;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}
coroutine->m_frame->m_frame.f_lineno = 237;
tmp_dict_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 237;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_port;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 238;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}

tmp_expression_value_35 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 238;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 238;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_auth;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 239;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}

tmp_expression_value_36 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain__proxy_auth);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 239;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_2;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(coroutine_heap->tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_18);
goto try_except_handler_5;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
{
    PyObject *old = coroutine_heap->var_kwargs;
    assert(old != NULL);
    coroutine_heap->var_kwargs = tmp_assign_source_18;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_12 = module_var_accessor_httpcore$_async$socks_proxy$Trace(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Trace);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_setup_socks5_connection;
tmp_args_element_value_9 = module_var_accessor_httpcore$_async$socks_proxy$logger(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 242;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 242;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_args_element_value_11 = coroutine_heap->var_kwargs;
coroutine->m_frame->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_12, call_args);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_37 = coroutine_heap->tmp_with_2__source;
tmp_called_value_13 = LOOKUP_SPECIAL(tstate, tmp_expression_value_37, const_str_plain___aenter__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
coroutine->m_frame->m_frame.f_lineno = 241;
tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_38 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_21 = LOOKUP_SPECIAL(tstate, tmp_expression_value_38, const_str_plain___aexit__);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
coroutine->m_frame->m_frame.f_lineno = 241;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
tmp_expression_value_40 = coroutine_heap->tmp_with_2__enter;
tmp_expression_value_39 = ASYNC_AWAIT(tstate, tmp_expression_value_40, await_enter);
if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 7;
coroutine->m_yield_from = tmp_expression_value_39;
coroutine->m_awaiting = true;
return NULL;

yield_return_7:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_22 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_2__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_2__enter = tmp_assign_source_22;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_23;
tmp_assign_source_23 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
tmp_assign_source_24 = coroutine_heap->tmp_with_2__enter;
{
    PyObject *old = coroutine_heap->var_trace;
    assert(old != NULL);
    coroutine_heap->var_trace = tmp_assign_source_24;
    Py_INCREF(coroutine_heap->var_trace);
    Py_DECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 244;
tmp_direct_call_arg1_2 = module_var_accessor_httpcore$_async$socks_proxy$_init_socks5_connection(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__init_socks5_connection);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 244;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_direct_call_arg2_2 = coroutine_heap->var_kwargs;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_expression_value_42 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 244;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_12;
}
tmp_expression_value_41 = ASYNC_AWAIT(tstate, tmp_expression_value_42, await_normal);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 244;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_12;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_42, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_direct_call_arg2_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 8;
coroutine->m_yield_from = tmp_expression_value_41;
coroutine->m_awaiting = true;
return NULL;

yield_return_8:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_42, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_direct_call_arg2_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 244;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_12;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
if (coroutine_heap->var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 245;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_12;
}

tmp_assattr_value_2 = coroutine_heap->var_stream;
CHECK_OBJECT(coroutine_heap->var_trace);
tmp_assattr_target_2 = coroutine_heap->var_trace;
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_return_value, tmp_assattr_value_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 245;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_12;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_12:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_assign_source_25;
tmp_assign_source_25 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_25;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
coroutine->m_frame->m_frame.f_lineno = 241;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_14 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_12 = EXC_TYPE(tstate);
tmp_args_element_value_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_13); 
tmp_args_element_value_14 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_14 == NULL) {
    tmp_args_element_value_14 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_expression_value_44 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_13;
}
tmp_expression_value_43 = ASYNC_AWAIT(tstate, tmp_expression_value_44, await_exit);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_13;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_7, sizeof(bool), &tmp_expression_value_44, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 9;
coroutine->m_yield_from = tmp_expression_value_43;
coroutine->m_awaiting = true;
return NULL;

yield_return_9:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_7, sizeof(bool), &tmp_expression_value_44, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_13;
}
tmp_operand_value_2 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_7 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 241;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_13;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 241;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_13;
branch_end_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_13:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_11;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = coroutine_heap->tmp_with_2__indicator;
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
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_called_value_15;
PyObject *tmp_await_result_4;
coroutine->m_frame->m_frame.f_lineno = 241;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_15 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 241;
tmp_expression_value_46 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
tmp_expression_value_45 = ASYNC_AWAIT(tstate, tmp_expression_value_46, await_exit);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_46, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 10;
coroutine->m_yield_from = tmp_expression_value_45;
coroutine->m_awaiting = true;
return NULL;

yield_return_10:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_46, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
branch_no_8:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_10;
// End of try:
try_end_7:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
PyObject *tmp_called_value_16;
PyObject *tmp_await_result_5;
coroutine->m_frame->m_frame.f_lineno = 241;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_16 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 241;
tmp_expression_value_48 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
tmp_expression_value_47 = ASYNC_AWAIT(tstate, tmp_expression_value_48, await_exit);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_48, sizeof(PyObject *), &tmp_called_value_16, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 11;
coroutine->m_yield_from = tmp_expression_value_47;
coroutine->m_awaiting = true;
return NULL;

yield_return_11:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_48, sizeof(PyObject *), &tmp_called_value_16, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 241;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_10;
}
tmp_await_result_5 = yield_return_value;
CHECK_OBJECT(tmp_await_result_5);
Py_DECREF(tmp_await_result_5);
}
branch_no_9:;
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

goto try_except_handler_5;
// End of try:
try_end_8:;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
Py_DECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
Py_DECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
Py_DECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 248;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_50 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 248;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 248;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_8 = mod_consts.const_bytes_digest_fd824d10b71da0d36a7043730be56d9f;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 248;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_26;
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_51;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_52;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 251;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_51 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain__ssl_context);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 251;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_11 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_17 = module_var_accessor_httpcore$_async$socks_proxy$default_ssl_context(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_default_ssl_context);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 250;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 250;
tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 250;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 252;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_52 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_assign_source_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain__ssl_context);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 252;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
condexpr_end_1:;
assert(coroutine_heap->var_ssl_context == NULL);
coroutine_heap->var_ssl_context = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
nuitka_bool tmp_condition_result_12;
PyObject *tmp_expression_value_53;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 255;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_53 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain__http2);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 255;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 255;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_12 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_27 = MAKE_LIST2(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac,mod_consts.const_str_plain_h2);
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_27 = MAKE_LIST1(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
condexpr_end_2:;
assert(coroutine_heap->var_alpn_protocols == NULL);
coroutine_heap->var_alpn_protocols = tmp_assign_source_27;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(coroutine_heap->var_ssl_context);
tmp_called_instance_1 = coroutine_heap->var_ssl_context;
CHECK_OBJECT(coroutine_heap->var_alpn_protocols);
tmp_args_element_value_15 = coroutine_heap->var_alpn_protocols;
coroutine->m_frame->m_frame.f_lineno = 257;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_alpn_protocols, tmp_args_element_value_15);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 257;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_ssl_context;
CHECK_OBJECT(coroutine_heap->var_ssl_context);
tmp_dict_value_3 = coroutine_heap->var_ssl_context;
tmp_assign_source_28 = _PyDict_NewPresized( 3 );
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_3, tmp_dict_value_3);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_server_hostname;
CHECK_OBJECT(coroutine_heap->var_sni_hostname);
tmp_or_left_value_1 = coroutine_heap->var_sni_hostname;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 261;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_3;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 262;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_3;
}

tmp_expression_value_56 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 262;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_3;
}
tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 262;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_3;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 262;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_3;
}
coroutine->m_frame->m_frame.f_lineno = 262;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_18, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 262;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_dict_value_3 = tmp_or_left_value_1;
or_end_1:;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(coroutine_heap->var_timeout);
tmp_dict_value_3 = coroutine_heap->var_timeout;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_3, tmp_dict_value_3);
assert(!(coroutine_heap->tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_assign_source_28);
goto try_except_handler_5;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
{
    PyObject *old = coroutine_heap->var_kwargs;
    assert(old != NULL);
    coroutine_heap->var_kwargs = tmp_assign_source_28;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_called_value_19 = module_var_accessor_httpcore$_async$socks_proxy$Trace(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Trace);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
tmp_args_element_value_16 = mod_consts.const_str_plain_start_tls;
tmp_args_element_value_17 = module_var_accessor_httpcore$_async$socks_proxy$logger(tstate);
if (unlikely(tmp_args_element_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_args_element_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_18 = Nuitka_Cell_GET(coroutine->m_closure[0]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_args_element_value_19 = coroutine_heap->var_kwargs;
coroutine->m_frame->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_19, call_args);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
assert(coroutine_heap->tmp_with_3__source == NULL);
coroutine_heap->tmp_with_3__source = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_57;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
tmp_expression_value_57 = coroutine_heap->tmp_with_3__source;
tmp_called_value_20 = LOOKUP_SPECIAL(tstate, tmp_expression_value_57, const_str_plain___aenter__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
coroutine->m_frame->m_frame.f_lineno = 265;
tmp_assign_source_30 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_20);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
assert(coroutine_heap->tmp_with_3__enter == NULL);
coroutine_heap->tmp_with_3__enter = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
tmp_expression_value_58 = coroutine_heap->tmp_with_3__source;
tmp_assign_source_31 = LOOKUP_SPECIAL(tstate, tmp_expression_value_58, const_str_plain___aexit__);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
assert(coroutine_heap->tmp_with_3__exit == NULL);
coroutine_heap->tmp_with_3__exit = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_59;
PyObject *tmp_expression_value_60;
coroutine->m_frame->m_frame.f_lineno = 265;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
tmp_expression_value_60 = coroutine_heap->tmp_with_3__enter;
tmp_expression_value_59 = ASYNC_AWAIT(tstate, tmp_expression_value_60, await_enter);
if (tmp_expression_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_60, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 12;
coroutine->m_yield_from = tmp_expression_value_59;
coroutine->m_awaiting = true;
return NULL;

yield_return_12:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_60, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
tmp_assign_source_32 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_3__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_3__enter = tmp_assign_source_32;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_33;
tmp_assign_source_33 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_3__indicator = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
tmp_assign_source_34 = coroutine_heap->tmp_with_3__enter;
{
    PyObject *old = coroutine_heap->var_trace;
    assert(old != NULL);
    coroutine_heap->var_trace = tmp_assign_source_34;
    Py_INCREF(coroutine_heap->var_trace);
    Py_DECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_61;
PyObject *tmp_expression_value_62;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_63;
PyObject *tmp_direct_call_arg2_3;
coroutine->m_frame->m_frame.f_lineno = 266;
if (coroutine_heap->var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_16;
}

tmp_expression_value_63 = coroutine_heap->var_stream;
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_start_tls);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_direct_call_arg2_3 = coroutine_heap->var_kwargs;
Py_INCREF(tmp_direct_call_arg2_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3};
    tmp_expression_value_62 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_16;
}
tmp_expression_value_61 = ASYNC_AWAIT(tstate, tmp_expression_value_62, await_normal);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_expression_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_16;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_62, sizeof(PyObject *), &tmp_direct_call_arg1_3, sizeof(PyObject *), &tmp_expression_value_63, sizeof(PyObject *), &tmp_direct_call_arg2_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 13;
coroutine->m_yield_from = tmp_expression_value_61;
coroutine->m_awaiting = true;
return NULL;

yield_return_13:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_62, sizeof(PyObject *), &tmp_direct_call_arg1_3, sizeof(PyObject *), &tmp_expression_value_63, sizeof(PyObject *), &tmp_direct_call_arg2_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_16;
}
tmp_assign_source_35 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_stream;
    coroutine_heap->var_stream = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(coroutine_heap->var_stream);
tmp_assattr_value_3 = coroutine_heap->var_stream;
CHECK_OBJECT(coroutine_heap->var_trace);
tmp_assattr_target_3 = coroutine_heap->var_trace;
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_return_value, tmp_assattr_value_3);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_16;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_16:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 3.
coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
tmp_cmp_expr_left_10 = EXC_TYPE(tstate);
tmp_cmp_expr_right_10 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_13 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
nuitka_bool tmp_assign_source_36;
tmp_assign_source_36 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_3__indicator = tmp_assign_source_36;
}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_64;
PyObject *tmp_expression_value_65;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
coroutine->m_frame->m_frame.f_lineno = 265;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_21 = coroutine_heap->tmp_with_3__exit;
tmp_args_element_value_20 = EXC_TYPE(tstate);
tmp_args_element_value_21 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_21); 
tmp_args_element_value_22 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_22 == NULL) {
    tmp_args_element_value_22 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_expression_value_65 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_17;
}
tmp_expression_value_64 = ASYNC_AWAIT(tstate, tmp_expression_value_65, await_exit);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
if (tmp_expression_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_17;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_14, sizeof(bool), &tmp_expression_value_65, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), &tmp_args_element_value_20, sizeof(PyObject *), &tmp_args_element_value_21, sizeof(PyObject *), &tmp_args_element_value_22, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 14;
coroutine->m_yield_from = tmp_expression_value_64;
coroutine->m_awaiting = true;
return NULL;

yield_return_14:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_14, sizeof(bool), &tmp_expression_value_65, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), &tmp_args_element_value_20, sizeof(PyObject *), &tmp_args_element_value_21, sizeof(PyObject *), &tmp_args_element_value_22, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_17;
}
tmp_operand_value_3 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_17;
}
tmp_condition_result_14 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 265;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_17;
branch_no_12:;
goto branch_end_11;
branch_no_11:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 265;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_17;
branch_end_11:;
goto try_end_10;
// Exception handler code:
try_except_handler_17:;
coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_10 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_10;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

goto try_except_handler_15;
// End of try:
try_end_10:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

goto try_end_9;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_9:;
goto try_end_11;
// Exception handler code:
try_except_handler_15:;
coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_11 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_15;
nuitka_bool tmp_cmp_expr_left_11;
nuitka_bool tmp_cmp_expr_right_11;
assert(coroutine_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_11 = coroutine_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
tmp_condition_result_15 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_expression_value_66;
PyObject *tmp_expression_value_67;
PyObject *tmp_called_value_22;
PyObject *tmp_await_result_6;
coroutine->m_frame->m_frame.f_lineno = 265;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_22 = coroutine_heap->tmp_with_3__exit;
coroutine->m_frame->m_frame.f_lineno = 265;
tmp_expression_value_67 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_22, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_11);

coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
tmp_expression_value_66 = ASYNC_AWAIT(tstate, tmp_expression_value_67, await_exit);
CHECK_OBJECT(tmp_expression_value_67);
Py_DECREF(tmp_expression_value_67);
if (tmp_expression_value_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_11);

coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_67, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 15;
coroutine->m_yield_from = tmp_expression_value_66;
coroutine->m_awaiting = true;
return NULL;

yield_return_15:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_67, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_11);

coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
tmp_await_result_6 = yield_return_value;
CHECK_OBJECT(tmp_await_result_6);
Py_DECREF(tmp_await_result_6);
}
branch_no_13:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_11;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

goto try_except_handler_14;
// End of try:
try_end_11:;
{
bool tmp_condition_result_16;
nuitka_bool tmp_cmp_expr_left_12;
nuitka_bool tmp_cmp_expr_right_12;
assert(coroutine_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_12 = coroutine_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
tmp_condition_result_16 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_expression_value_68;
PyObject *tmp_expression_value_69;
PyObject *tmp_called_value_23;
PyObject *tmp_await_result_7;
coroutine->m_frame->m_frame.f_lineno = 265;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_23 = coroutine_heap->tmp_with_3__exit;
coroutine->m_frame->m_frame.f_lineno = 265;
tmp_expression_value_69 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_23, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
tmp_expression_value_68 = ASYNC_AWAIT(tstate, tmp_expression_value_69, await_exit);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_expression_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_69, sizeof(PyObject *), &tmp_called_value_23, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 16;
coroutine->m_yield_from = tmp_expression_value_68;
coroutine->m_awaiting = true;
return NULL;

yield_return_16:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_69, sizeof(PyObject *), &tmp_called_value_23, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 265;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_14;
}
tmp_await_result_7 = yield_return_value;
CHECK_OBJECT(tmp_await_result_7);
Py_DECREF(tmp_await_result_7);
}
branch_no_14:;
goto try_end_12;
// Exception handler code:
try_except_handler_14:;
coroutine_heap->exception_keeper_lineno_12 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_12 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_3__source);
coroutine_heap->tmp_with_3__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_3__enter);
coroutine_heap->tmp_with_3__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_3__exit);
coroutine_heap->tmp_with_3__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_12;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_12;

goto try_except_handler_5;
// End of try:
try_end_12:;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
Py_DECREF(coroutine_heap->tmp_with_3__source);
coroutine_heap->tmp_with_3__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
Py_DECREF(coroutine_heap->tmp_with_3__enter);
coroutine_heap->tmp_with_3__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
Py_DECREF(coroutine_heap->tmp_with_3__exit);
coroutine_heap->tmp_with_3__exit = NULL;
branch_no_10:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_instance_2;
if (coroutine_heap->var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 270;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_called_instance_2 = coroutine_heap->var_stream;
coroutine->m_frame->m_frame.f_lineno = 270;
tmp_assign_source_37 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_get_extra_info,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ssl_object_tuple, 0)
);

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 270;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->var_ssl_object == NULL);
coroutine_heap->var_ssl_object = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(coroutine_heap->var_ssl_object);
tmp_cmp_expr_left_13 = coroutine_heap->var_ssl_object;
tmp_cmp_expr_right_13 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(coroutine_heap->var_ssl_object);
tmp_called_instance_3 = coroutine_heap->var_ssl_object;
coroutine->m_frame->m_frame.f_lineno = 273;
tmp_cmp_expr_left_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_selected_alpn_protocol);
if (tmp_cmp_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_h2;
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_38 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_assign_source_38 = tmp_and_left_value_1;
and_end_1:;
assert(coroutine_heap->var_http2_negotiated == NULL);
coroutine_heap->var_http2_negotiated = tmp_assign_source_38;
}
{
nuitka_bool tmp_condition_result_17;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_truth_name_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_70;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_71;
CHECK_OBJECT(coroutine_heap->var_http2_negotiated);
tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_http2_negotiated);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 277;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 277;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_70 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain__http2);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_71 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain__http1);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_2 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_right_value_2 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_17 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_17 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_http2;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple;
tmp_level_value_1 = const_int_pos_1;
coroutine->m_frame->m_frame.f_lineno = 280;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 280;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AsyncHTTP2Connection,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncHTTP2Connection);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 280;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->var_AsyncHTTP2Connection == NULL);
coroutine_heap->var_AsyncHTTP2Connection = tmp_assign_source_39;
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_24;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_72;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_73;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(coroutine_heap->var_AsyncHTTP2Connection);
tmp_called_value_24 = coroutine_heap->var_AsyncHTTP2Connection;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_72 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain__remote_origin);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (coroutine_heap->var_stream == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 284;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_kw_call_value_1_1 = coroutine_heap->var_stream;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 285;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_73 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 285;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 282;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_24, kw_values, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__connection, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
}
goto branch_end_15;
branch_no_15:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_25;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_74;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_expression_value_75;
PyObject *tmp_assattr_target_5;
tmp_called_value_25 = module_var_accessor_httpcore$_async$socks_proxy$AsyncHTTP11Connection(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncHTTP11Connection);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 289;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_74 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain__remote_origin);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 289;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (coroutine_heap->var_stream == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 290;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_kw_call_value_1_2 = coroutine_heap->var_stream;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 291;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_75 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

coroutine_heap->exception_lineno = 291;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 288;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

    tmp_assattr_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_25, kw_values, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}

tmp_assattr_target_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__connection, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_5;
}
}
branch_end_15:;
goto try_end_13;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_13 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_13 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 4.
coroutine_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_13, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_13);
// Tried code:
{
bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
tmp_cmp_expr_left_15 = EXC_TYPE(tstate);
tmp_cmp_expr_right_15 = PyExc_Exception;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_18 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_40); 
assert(coroutine_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_40);
coroutine_heap->var_exc = tmp_assign_source_40;
}
// Tried code:
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_True;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_19;
}

tmp_assattr_target_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__connect_failed, tmp_assattr_value_6);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_19;
}
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
CHECK_OBJECT(coroutine_heap->var_exc);
tmp_raise_type_input_1 = coroutine_heap->var_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_19;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 295;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_19;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_19:;
coroutine_heap->exception_keeper_lineno_14 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_14 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_14;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_14;

goto try_except_handler_18;
// End of try:
goto branch_end_16;
branch_no_16:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 223;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_18;
branch_end_16:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_18:;
coroutine_heap->exception_keeper_lineno_15 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_15 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_4);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_15;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_15;

goto try_except_handler_4;
// End of try:
// End of try:
try_end_13:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_76;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_76 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain__connection);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 296;
tmp_operand_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_is_available);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_19 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_26;
tmp_called_value_26 = module_var_accessor_httpcore$_async$socks_proxy$ConnectionNotAvailable(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ConnectionNotAvailable);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 297;
tmp_raise_type_input_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_26);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_4;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 297;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_4;
}
branch_no_17:;
branch_end_1:;
goto try_end_14;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_16 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_16 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 5.
coroutine_heap->exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_16);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_16);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_16, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_16 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_16);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_16, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_16);
// Tried code:
{
bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
tmp_cmp_expr_left_16 = EXC_TYPE(tstate);
tmp_cmp_expr_right_16 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_20 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
nuitka_bool tmp_assign_source_41;
tmp_assign_source_41 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_41;
}
{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_77;
PyObject *tmp_expression_value_78;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
coroutine->m_frame->m_frame.f_lineno = 221;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_27 = coroutine_heap->tmp_with_4__exit;
tmp_args_element_value_23 = EXC_TYPE(tstate);
tmp_args_element_value_24 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_24); 
tmp_args_element_value_25 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_25 == NULL) {
    tmp_args_element_value_25 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 221;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_expression_value_78 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_27, call_args);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_20;
}
tmp_expression_value_77 = ASYNC_AWAIT(tstate, tmp_expression_value_78, await_exit);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_expression_value_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_20;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_21, sizeof(bool), &tmp_expression_value_78, sizeof(PyObject *), &tmp_called_value_27, sizeof(PyObject *), &tmp_args_element_value_23, sizeof(PyObject *), &tmp_args_element_value_24, sizeof(PyObject *), &tmp_args_element_value_25, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 17;
coroutine->m_yield_from = tmp_expression_value_77;
coroutine->m_awaiting = true;
return NULL;

yield_return_17:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_21, sizeof(bool), &tmp_expression_value_78, sizeof(PyObject *), &tmp_called_value_27, sizeof(PyObject *), &tmp_args_element_value_23, sizeof(PyObject *), &tmp_args_element_value_24, sizeof(PyObject *), &tmp_args_element_value_25, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_20;
}
tmp_operand_value_6 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_20;
}
tmp_condition_result_21 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 221;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_20;
branch_no_19:;
goto branch_end_18;
branch_no_18:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 221;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooo";
goto try_except_handler_20;
branch_end_18:;
goto try_end_15;
// Exception handler code:
try_except_handler_20:;
coroutine_heap->exception_keeper_lineno_17 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_17 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_5);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_17;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_17;

goto try_except_handler_3;
// End of try:
try_end_15:;
// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_5);

goto try_end_14;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_14:;
goto try_end_16;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_18 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_18 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_22;
nuitka_bool tmp_cmp_expr_left_17;
nuitka_bool tmp_cmp_expr_right_17;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_17 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
tmp_condition_result_22 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_expression_value_79;
PyObject *tmp_expression_value_80;
PyObject *tmp_called_value_28;
PyObject *tmp_await_result_8;
coroutine->m_frame->m_frame.f_lineno = 221;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_28 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 221;
tmp_expression_value_80 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_28, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_18);

coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_79 = ASYNC_AWAIT(tstate, tmp_expression_value_80, await_exit);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
if (tmp_expression_value_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_18);

coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_80, sizeof(PyObject *), &tmp_called_value_28, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 18;
coroutine->m_yield_from = tmp_expression_value_79;
coroutine->m_awaiting = true;
return NULL;

yield_return_18:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_80, sizeof(PyObject *), &tmp_called_value_28, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_18);

coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
tmp_await_result_8 = yield_return_value;
CHECK_OBJECT(tmp_await_result_8);
Py_DECREF(tmp_await_result_8);
}
branch_no_20:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_18;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_18;

goto try_except_handler_2;
// End of try:
try_end_16:;
{
bool tmp_condition_result_23;
nuitka_bool tmp_cmp_expr_left_18;
nuitka_bool tmp_cmp_expr_right_18;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_18 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_18 = NUITKA_BOOL_TRUE;
tmp_condition_result_23 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_expression_value_81;
PyObject *tmp_expression_value_82;
PyObject *tmp_called_value_29;
PyObject *tmp_await_result_9;
coroutine->m_frame->m_frame.f_lineno = 221;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_29 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 221;
tmp_expression_value_82 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_29, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_81 = ASYNC_AWAIT(tstate, tmp_expression_value_82, await_exit);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
if (tmp_expression_value_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_82, sizeof(PyObject *), &tmp_called_value_29, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 19;
coroutine->m_yield_from = tmp_expression_value_81;
coroutine->m_awaiting = true;
return NULL;

yield_return_19:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_82, sizeof(PyObject *), &tmp_called_value_29, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto try_except_handler_2;
}
tmp_await_result_9 = yield_return_value;
CHECK_OBJECT(tmp_await_result_9);
Py_DECREF(tmp_await_result_9);
}
branch_no_21:;
goto try_end_17;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_19 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_19 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_19;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
Py_DECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
Py_DECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
Py_DECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
{
PyObject *tmp_expression_value_83;
PyObject *tmp_expression_value_84;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_85;
PyObject *tmp_expression_value_86;
PyObject *tmp_args_element_value_26;
coroutine->m_frame->m_frame.f_lineno = 299;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_86 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain__connection);
if (tmp_expression_value_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_handle_async_request);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_30);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_26 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 299;
tmp_expression_value_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
if (tmp_expression_value_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_83 = ASYNC_AWAIT(tstate, tmp_expression_value_84, await_normal);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_expression_value_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_84, sizeof(PyObject *), &tmp_called_value_30, sizeof(PyObject *), &tmp_expression_value_85, sizeof(PyObject *), &tmp_expression_value_86, sizeof(PyObject *), &tmp_args_element_value_26, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 20;
coroutine->m_yield_from = tmp_expression_value_83;
coroutine->m_awaiting = true;
return NULL;

yield_return_20:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_84, sizeof(PyObject *), &tmp_called_value_30, sizeof(PyObject *), &tmp_expression_value_85, sizeof(PyObject *), &tmp_expression_value_86, sizeof(PyObject *), &tmp_args_element_value_26, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
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
    coroutine_heap->var_timeouts,
    coroutine_heap->var_sni_hostname,
    coroutine_heap->var_timeout,
    coroutine_heap->var_kwargs,
    coroutine_heap->var_trace,
    coroutine_heap->var_stream,
    coroutine_heap->var_ssl_context,
    coroutine_heap->var_alpn_protocols,
    coroutine_heap->var_ssl_object,
    coroutine_heap->var_http2_negotiated,
    coroutine_heap->var_AsyncHTTP2Connection,
    coroutine_heap->var_exc
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
CHECK_OBJECT(coroutine_heap->var_timeouts);
CHECK_OBJECT(coroutine_heap->var_timeouts);
Py_DECREF(coroutine_heap->var_timeouts);
coroutine_heap->var_timeouts = NULL;
CHECK_OBJECT(coroutine_heap->var_sni_hostname);
CHECK_OBJECT(coroutine_heap->var_sni_hostname);
Py_DECREF(coroutine_heap->var_sni_hostname);
coroutine_heap->var_sni_hostname = NULL;
CHECK_OBJECT(coroutine_heap->var_timeout);
CHECK_OBJECT(coroutine_heap->var_timeout);
Py_DECREF(coroutine_heap->var_timeout);
coroutine_heap->var_timeout = NULL;
Py_XDECREF(coroutine_heap->var_kwargs);
coroutine_heap->var_kwargs = NULL;
Py_XDECREF(coroutine_heap->var_trace);
coroutine_heap->var_trace = NULL;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
Py_XDECREF(coroutine_heap->var_ssl_context);
coroutine_heap->var_ssl_context = NULL;
Py_XDECREF(coroutine_heap->var_alpn_protocols);
coroutine_heap->var_alpn_protocols = NULL;
Py_XDECREF(coroutine_heap->var_ssl_object);
coroutine_heap->var_ssl_object = NULL;
Py_XDECREF(coroutine_heap->var_http2_negotiated);
coroutine_heap->var_http2_negotiated = NULL;
Py_XDECREF(coroutine_heap->var_AsyncHTTP2Connection);
coroutine_heap->var_AsyncHTTP2Connection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_20 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_20 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_timeouts);
coroutine_heap->var_timeouts = NULL;
Py_XDECREF(coroutine_heap->var_sni_hostname);
coroutine_heap->var_sni_hostname = NULL;
Py_XDECREF(coroutine_heap->var_timeout);
coroutine_heap->var_timeout = NULL;
Py_XDECREF(coroutine_heap->var_kwargs);
coroutine_heap->var_kwargs = NULL;
Py_XDECREF(coroutine_heap->var_trace);
coroutine_heap->var_trace = NULL;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
Py_XDECREF(coroutine_heap->var_ssl_context);
coroutine_heap->var_ssl_context = NULL;
Py_XDECREF(coroutine_heap->var_alpn_protocols);
coroutine_heap->var_alpn_protocols = NULL;
Py_XDECREF(coroutine_heap->var_ssl_object);
coroutine_heap->var_ssl_object = NULL;
Py_XDECREF(coroutine_heap->var_http2_negotiated);
coroutine_heap->var_http2_negotiated = NULL;
Py_XDECREF(coroutine_heap->var_AsyncHTTP2Connection);
coroutine_heap->var_AsyncHTTP2Connection = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_20;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_20;

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

static PyObject *MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_context,
        module_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_handle_async_request,
        mod_consts.const_str_digest_fa7185e20a17830c96177e7c265294f9,
        code_objects_fb35783c4b16938d999d1dbadb32f806,
        closure,
        2,
#if 1
        sizeof(struct httpcore$_async$socks_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$socks_proxy$$$function__6_can_handle_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_origin = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request = MAKE_FUNCTION_FRAME(tstate, code_objects_1a7fff30e72f9e76a3c5eeb13c7da2ba, module_httpcore$_async$socks_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request = cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_origin);
tmp_cmp_expr_left_1 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__remote_origin);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request,
    type_description_1,
    par_self,
    par_origin
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request == cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__6_can_handle_request);

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
CHECK_OBJECT(par_origin);
Py_DECREF(par_origin);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_origin);
Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_async$socks_proxy$$$function__7_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_73b8c340592bf90fc50235435d52533f, module_httpcore$_async$socks_proxy, sizeof(void *));
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 305;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 305;
coroutine_heap->type_description_1 = "c";
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
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 306;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 306;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 306;
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

static PyObject *MAKE_COROUTINE_httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose_context,
        module_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_29f482d84bb0282eebe3216cabfcbac8,
        code_objects_73b8c340592bf90fc50235435d52533f,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_async$socks_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$socks_proxy$$$function__8_is_available(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available = MAKE_FUNCTION_FRAME(tstate, code_objects_3f5e2452656d02019c05254b2adbf30b, module_httpcore$_async$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available = cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__http2);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 314;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_bytes_digest_fd824d10b71da0d36a7043730be56d9f;
tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__http1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_or_right_value_1);
tmp_and_left_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_left_value_2 = tmp_or_left_value_1;
or_end_1:;
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 315;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__connect_failed);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_2);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available->m_frame.f_lineno = 318;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_available);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available == cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__8_is_available);

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


static PyObject *impl_httpcore$_async$socks_proxy$$$function__9_has_expired(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired = MAKE_FUNCTION_FRAME(tstate, code_objects_c7df146048d80648ea45f85b674a1d9b, module_httpcore$_async$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired = cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__connect_failed);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired->m_frame.f_lineno = 323;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_has_expired);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired == cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__9_has_expired);

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


static PyObject *impl_httpcore$_async$socks_proxy$$$function__10_is_idle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle = MAKE_FUNCTION_FRAME(tstate, code_objects_28fc2375a8cfa89763e49c452ca0a431, module_httpcore$_async$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle = cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__connect_failed);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle->m_frame.f_lineno = 328;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_idle);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle == cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__10_is_idle);

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


static PyObject *impl_httpcore$_async$socks_proxy$$$function__11_is_closed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed = MAKE_FUNCTION_FRAME(tstate, code_objects_ee4beed070d16271eddf5b0ed520aa33, module_httpcore$_async$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed = cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__connect_failed);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed->m_frame.f_lineno = 333;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_closed);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed == cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__11_is_closed);

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


static PyObject *impl_httpcore$_async$socks_proxy$$$function__12_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__12_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info = MAKE_FUNCTION_FRAME(tstate, code_objects_484abf3b3d9783b1d85b6b51ab3bdce9, module_httpcore$_async$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__12_info = cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__12_info);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__12_info) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__connect_failed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 337;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_return_value = mod_consts.const_str_digest_94ddc32f1f35d5f2568c88e5ee19bcdc;
goto condexpr_end_1;
condexpr_false_1:;
tmp_return_value = mod_consts.const_str_plain_CONNECTING;
condexpr_end_1:;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy$$$function__12_info->m_frame.f_lineno = 338;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_info);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__12_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__12_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__12_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__12_info,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__12_info == cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__12_info = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__12_info);

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


static PyObject *impl_httpcore$_async$socks_proxy$$$function__13___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fa0eb63a78f0abeb46aa989057bfaeea, module_httpcore$_async$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__->m_type_description == NULL);
frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__ = cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_60;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__->m_frame.f_lineno = 341;
tmp_format_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_info);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__ == cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__);
    cache_frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$function__13___repr__);

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



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__10_is_idle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__10_is_idle,
        mod_consts.const_str_plain_is_idle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fe4f6a678e3cfbd22a627d3bb04815a1,
#endif
        code_objects_28fc2375a8cfa89763e49c452ca0a431,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__11_is_closed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__11_is_closed,
        mod_consts.const_str_plain_is_closed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0435c2febb2b8b3f90d61eb7910c3377,
#endif
        code_objects_ee4beed070d16271eddf5b0ed520aa33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__12_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__12_info,
        mod_consts.const_str_plain_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0b593b08c880fb20255f8e530ce80d4e,
#endif
        code_objects_484abf3b3d9783b1d85b6b51ab3bdce9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__13___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0b80faf152a1d0bd164bc7d63a7d5db0,
#endif
        code_objects_fa0eb63a78f0abeb46aa989057bfaeea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection,
        mod_consts.const_str_plain__init_socks5_connection,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_23dfd3afd5c394028422c4400d57b1c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_abaf54e6cdb1008cc648e4f9b6fca74b,
#endif
        code_objects_a21feb389769f23d8ab7e4ab5a5bdd71,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        mod_consts.const_str_digest_a74b1e62886da4928b7e7ebece05bde2,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__3_create_connection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__3_create_connection,
        mod_consts.const_str_plain_create_connection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d716feadebbb5ee20dee2841f1f56ae3,
#endif
        code_objects_06adc3f24ca802c843dd493a88ffa071,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5cccf18cc637290d853dd2f44d7afc9,
#endif
        code_objects_6b0aaef53c972bf9f284ba6a92d1fae3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__5_handle_async_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__5_handle_async_request,
        mod_consts.const_str_plain_handle_async_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fa7185e20a17830c96177e7c265294f9,
#endif
        code_objects_fb35783c4b16938d999d1dbadb32f806,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__6_can_handle_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__6_can_handle_request,
        mod_consts.const_str_plain_can_handle_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0ee1b06971288a2f680706bd121e28e5,
#endif
        code_objects_1a7fff30e72f9e76a3c5eeb13c7da2ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__7_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__7_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_29f482d84bb0282eebe3216cabfcbac8,
#endif
        code_objects_73b8c340592bf90fc50235435d52533f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__8_is_available(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__8_is_available,
        mod_consts.const_str_plain_is_available,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0271121404f41a9175ed13b8cfd71979,
#endif
        code_objects_3f5e2452656d02019c05254b2adbf30b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__9_has_expired(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$socks_proxy$$$function__9_has_expired,
        mod_consts.const_str_plain_has_expired,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bdc31163bcb13b7a8eca4fe15d88880b,
#endif
        code_objects_c7df146048d80648ea45f85b674a1d9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$socks_proxy,
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

static function_impl_code const function_table_httpcore$_async$socks_proxy[] = {
impl_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection,
impl_httpcore$_async$socks_proxy$$$function__2___init__,
impl_httpcore$_async$socks_proxy$$$function__3_create_connection,
impl_httpcore$_async$socks_proxy$$$function__4___init__,
impl_httpcore$_async$socks_proxy$$$function__5_handle_async_request,
impl_httpcore$_async$socks_proxy$$$function__6_can_handle_request,
impl_httpcore$_async$socks_proxy$$$function__7_aclose,
impl_httpcore$_async$socks_proxy$$$function__8_is_available,
impl_httpcore$_async$socks_proxy$$$function__9_has_expired,
impl_httpcore$_async$socks_proxy$$$function__10_is_idle,
impl_httpcore$_async$socks_proxy$$$function__11_is_closed,
impl_httpcore$_async$socks_proxy$$$function__12_info,
impl_httpcore$_async$socks_proxy$$$function__13___repr__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpcore$_async$socks_proxy);
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
        module_httpcore$_async$socks_proxy,
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
        function_table_httpcore$_async$socks_proxy,
        sizeof(function_table_httpcore$_async$socks_proxy) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpcore._async.socks_proxy";
#endif

// Internal entry point for module code.
PyObject *module_code_httpcore$_async$socks_proxy(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore$_async$socks_proxy");

    // Store the module for future use.
    module_httpcore$_async$socks_proxy = module;

    moduledict_httpcore$_async$socks_proxy = MODULE_DICT(module_httpcore$_async$socks_proxy);

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
        PRINT_STRING("httpcore$_async$socks_proxy: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore$_async$socks_proxy: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpcore$_async$socks_proxy: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore._async.socks_proxy" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpcore$_async$socks_proxy\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_async$socks_proxy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_async$socks_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_async$socks_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_async$socks_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_async$socks_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_async$socks_proxy);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpcore$_async$socks_proxy);
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

        UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189 = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpcore$_async$socks_proxy = MAKE_MODULE_FRAME(code_objects_cb521cf929bbf8f19875ce42b285c9da, module_httpcore$_async$socks_proxy);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpcore$_async$socks_proxy$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpcore$_async$socks_proxy$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_socksio;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 6;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_socksio, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_a7e613b85ae97ed5dd5cf79d1352168d;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_AutoBackend_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 8;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AutoBackend,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AutoBackend);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AutoBackend, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
tmp_globals_arg_value_5 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_AsyncNetworkBackend_str_plain_AsyncNetworkStream_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 9;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

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
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AsyncNetworkBackend,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsyncNetworkBackend);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncNetworkBackend, tmp_assign_source_10);
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
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AsyncNetworkStream,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AsyncNetworkStream);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncNetworkStream, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_6 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ConnectionNotAvailable_str_plain_ProxyError_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 10;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_ConnectionNotAvailable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ConnectionNotAvailable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_ProxyError,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ProxyError);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_7 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_1e97d781dc24c2cc3518976d28368d8c_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 11;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_URL,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_URL);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_URL, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_Origin,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Origin);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Origin, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_enforce_bytes,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_enforce_bytes);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes, tmp_assign_source_20);
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
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_enforce_url,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_enforce_url);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url, tmp_assign_source_21);
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
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__ssl;
tmp_globals_arg_value_8 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_default_ssl_context_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 12;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_default_ssl_context,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_default_ssl_context);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__synchronization;
tmp_globals_arg_value_9 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_AsyncLock_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 13;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AsyncLock,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_AsyncLock);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__trace;
tmp_globals_arg_value_10 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_Trace_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 14;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_Trace,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Trace);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_connection_pool;
tmp_globals_arg_value_11 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 15;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AsyncConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_AsyncConnectionPool);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_http11;
tmp_globals_arg_value_12 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 16;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AsyncHTTP11Connection,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_AsyncHTTP11Connection);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_interfaces;
tmp_globals_arg_value_13 = (PyObject *)moduledict_httpcore$_async$socks_proxy;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 17;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_httpcore$_async$socks_proxy,
        mod_consts.const_str_plain_AsyncConnectionInterface,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_AsyncConnectionInterface);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_httpcore$_async$socks_proxy$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 19;
tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ea82faf34f0599bfeebad7694c6f8d60_tuple, 0)
);

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = DICT_COPY(tstate, mod_consts.const_dict_a1fb49205ab2b7c12eb911196f337113);
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTH_METHODS, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = DICT_COPY(tstate, mod_consts.const_dict_3e9450acf95e75c23046a155d2b8ae38);
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLY_CODES, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_a767a9b08b9f9c71fccd8947318860e5);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c9cff1a205288565c27785331cc4fbe5);

tmp_assign_source_31 = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__1__init_socks5_connection(tstate, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain__init_socks5_connection, tmp_assign_source_31);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_httpcore$_async$socks_proxy$AsyncConnectionPool(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncConnectionPool);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;

    goto try_except_handler_4;
}
tmp_assign_source_32 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_33 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_35;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_AsyncSOCKSProxy;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 105;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_36;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_14, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

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
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_4;
}
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 105;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 105;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_37;
}
branch_end_1:;
{
PyObject *tmp_assign_source_38;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_96840c6442204637b2a7ad82cb22fcf9;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncSOCKSProxy;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_105;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2 = MAKE_CLASS_FRAME(tstate, code_objects_b475fc93fee46f9d9aa5b37f80697b64, module_httpcore$_async$socks_proxy, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_none_none_int_pos_10_none_none_true_false_int_0_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_27006a116bb6df7bdf48d1193e66c431);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__2___init__(tstate, tmp_defaults_1, tmp_annotations_2, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__3_create_connection(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, mod_consts.const_str_plain_create_connection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_0577337803bc0093f50da22f37ce0b12_tuple;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
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


exception_lineno = 105;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_AsyncSOCKSProxy;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 105;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_39);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_38 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105);
locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105);
locals_httpcore$_async$socks_proxy$$$class__1_AsyncSOCKSProxy_105 = NULL;
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
exception_lineno = 105;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncSOCKSProxy, tmp_assign_source_38);
}
goto try_end_4;
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
try_end_4:;
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
PyObject *tmp_assign_source_40;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_httpcore$_async$socks_proxy$AsyncConnectionInterface(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncConnectionInterface);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto try_except_handler_7;
}
tmp_assign_source_40 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_41 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_43;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncSocks5Connection;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 189;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_44;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_15, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 189;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 189;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_45;
}
branch_end_4:;
{
PyObject *tmp_assign_source_46;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_96840c6442204637b2a7ad82cb22fcf9;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncSocks5Connection;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_189;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3 = MAKE_CLASS_FRAME(tstate, code_objects_8e7d210d257710ad47f2f4c5f36b41dc, module_httpcore$_async$socks_proxy, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3);
assert(Py_REFCNT(frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_4;
tmp_defaults_2 = mod_consts.const_tuple_none_none_none_true_false_none_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_5f26e560622962ba35d8b5d5e76efb45);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__4___init__(tstate, tmp_defaults_2, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__5_handle_async_request(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_handle_async_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__6_can_handle_request(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_can_handle_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__7_aclose(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__8_is_available(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_is_available, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__9_has_expired(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_has_expired, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__10_is_idle(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_is_idle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__11_is_closed(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_is_closed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__12_info(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$socks_proxy$$$function__13___repr__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_15b3d664bfd15464b79c4c8f62f42c0a_tuple;
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
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


exception_lineno = 189;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
branch_no_6:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncSocks5Connection;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpcore$_async$socks_proxy->m_frame.f_lineno = 189;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_47;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_46 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_46);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189);
locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189);
locals_httpcore$_async$socks_proxy$$$class__2_AsyncSocks5Connection_189 = NULL;
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
exception_lineno = 189;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncSocks5Connection, tmp_assign_source_46);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$socks_proxy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$socks_proxy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$socks_proxy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpcore$_async$socks_proxy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore$_async$socks_proxy", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore._async.socks_proxy" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpcore$_async$socks_proxy);
    return module_httpcore$_async$socks_proxy;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_async$socks_proxy", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

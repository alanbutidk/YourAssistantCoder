/* Generated code for Python module 'httpcore$_async$http_proxy'
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



/* The "module_httpcore$_async$http_proxy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_async$http_proxy;
PyDictObject *moduledict_httpcore$_async$http_proxy;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_d66add9f6368e1c4e7f388fd3a18ef8f;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_61076ee1f50e60513050c7e63b799aa9;
PyObject *const_tuple_a768081c9b5b74288f45497e6c7c1333_tuple;
PyObject *const_str_plain_enforce_url;
PyObject *const_dict_e8cfb0b982ccbe43c16c46ef5a041797;
PyObject *const_str_plain__proxy_url;
PyObject *const_str_plain_scheme;
PyObject *const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a;
PyObject *const_str_digest_ece4fa29f68fff80cd78278e8e328505;
PyObject *const_str_plain__ssl_context;
PyObject *const_str_plain__proxy_ssl_context;
PyObject *const_str_plain_enforce_headers;
PyObject *const_dict_067825241f8c57feece2ef78491dec8e;
PyObject *const_str_plain__proxy_headers;
PyObject *const_str_plain_enforce_bytes;
PyObject *const_dict_a837522e82526ac63b5805e45b1d06ab;
PyObject *const_bytes_chr_58;
PyObject *const_bytes_digest_ae26dffbb89fcb3bc7b1a5789413fea7;
PyObject *const_str_plain_base64;
PyObject *const_str_plain_b64encode;
PyObject *const_bytes_digest_b6d1fd56b2e46af73db44565acca368b;
PyObject *const_str_digest_f13d05edfb6035c87dda6b99282a2de2;
PyObject *const_str_plain_AsyncForwardHTTPConnection;
PyObject *const_str_plain_origin;
PyObject *const_str_plain__keepalive_expiry;
PyObject *const_str_plain__network_backend;
PyObject *const_tuple_79d79bc76ea8e79899d54c5ab263e09e_tuple;
PyObject *const_str_plain_AsyncTunnelHTTPConnection;
PyObject *const_str_plain__http1;
PyObject *const_str_plain__http2;
PyObject *const_tuple_e4dddb37b9e2dab9a53b1e2d1ee86804_tuple;
PyObject *const_str_plain_AsyncHTTPConnection;
PyObject *const_tuple_b5a9fb90b76f1549d36b84d36e28ae43_tuple;
PyObject *const_str_plain__connection;
PyObject *const_str_plain__proxy_origin;
PyObject *const_str_plain__remote_origin;
PyObject *const_str_plain_merge_headers;
PyObject *const_str_plain_self;
PyObject *const_str_plain_request;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_host;
PyObject *const_str_plain_port;
PyObject *const_str_plain_url;
PyObject *const_tuple_7aa59612627d14f2d60261820390ead2_tuple;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_method;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_extensions;
PyObject *const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple;
PyObject *const_str_plain_handle_async_request;
PyObject *const_str_digest_889329c0b7145e587849876d3858b17e;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_64a3d3dfeb0866eed2e63e97e931d06c;
PyObject *const_str_plain_info;
PyObject *const_str_plain_is_available;
PyObject *const_str_plain_has_expired;
PyObject *const_str_plain_is_idle;
PyObject *const_str_plain_is_closed;
PyObject *const_str_chr_60;
PyObject *const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyObject *const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1;
PyObject *const_str_plain_AsyncLock;
PyObject *const_str_plain__connect_lock;
PyObject *const_str_plain__connected;
PyObject *const_str_plain_timeout;
PyObject *const_tuple_str_plain_connect_none_tuple;
PyObject *const_bytes_digest_a5b3fc0f89823674259abdbdbf61cf0b;
PyObject *const_bytes_digest_e92482d91bf3e76893604035a367d897;
PyObject *const_tuple_0d3ca8f42da94dea1a5e16cf07fe0eee_tuple;
PyObject *const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf;
PyObject *const_tuple_2f7f2d6593ec15c8b1fe56698171376e_tuple;
PyObject *const_str_plain_status;
PyObject *const_int_pos_200;
PyObject *const_int_pos_299;
PyObject *const_tuple_str_plain_reason_phrase_bytes_empty_tuple;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_str_plain_ignore_tuple;
PyObject *const_tuple_str_plain_errors_tuple;
PyObject *const_str_digest_82c9b2f63b822116cbc2cddca15cacf1;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_plain_network_stream;
PyObject *const_str_plain_default_ssl_context;
PyObject *const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac;
PyObject *const_str_plain_h2;
PyObject *const_str_plain_set_alpn_protocols;
PyObject *const_str_plain_ssl_context;
PyObject *const_str_plain_server_hostname;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_Trace;
PyObject *const_str_plain_start_tls;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_return_value;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_get_extra_info;
PyObject *const_tuple_str_plain_ssl_object_tuple;
PyObject *const_str_plain_selected_alpn_protocol;
PyObject *const_str_plain_http2;
PyObject *const_tuple_str_plain_AsyncHTTP2Connection_tuple;
PyObject *const_str_plain_AsyncHTTP2Connection;
PyObject *const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple;
PyObject *const_str_plain_AsyncHTTP11Connection;
PyObject *const_str_digest_bc3290cca1c383a75e405448928b8e23;
PyObject *const_str_digest_eddfba0faa48adf86c81b8e234243d7f;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
PyObject *const_tuple_str_plain_SOCKET_OPTION_str_plain_AsyncNetworkBackend_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_SOCKET_OPTION;
PyObject *const_str_plain_AsyncNetworkBackend;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_ProxyError_tuple;
PyObject *const_str_plain__models;
PyObject *const_tuple_3a5f9ce5ee81e098df29d4f552cfbab3_tuple;
PyObject *const_str_plain_Origin;
PyObject *const_str_plain_Response;
PyObject *const_str_plain__ssl;
PyObject *const_tuple_str_plain_default_ssl_context_tuple;
PyObject *const_str_plain__synchronization;
PyObject *const_tuple_str_plain_AsyncLock_tuple;
PyObject *const_str_plain__trace;
PyObject *const_tuple_str_plain_Trace_tuple;
PyObject *const_str_plain_connection;
PyObject *const_tuple_str_plain_AsyncHTTPConnection_tuple;
PyObject *const_str_plain_connection_pool;
PyObject *const_tuple_str_plain_AsyncConnectionPool_tuple;
PyObject *const_str_plain_AsyncConnectionPool;
PyObject *const_str_plain_http11;
PyObject *const_tuple_str_plain_AsyncHTTP11Connection_tuple;
PyObject *const_str_plain_interfaces;
PyObject *const_tuple_str_plain_AsyncConnectionInterface_tuple;
PyObject *const_str_plain_AsyncConnectionInterface;
PyObject *const_str_plain_Union;
PyObject *const_tuple_type_bytes_type_str_tuple;
PyObject *const_str_plain_ByteOrStr;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_HeadersAsSequence;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_HeadersAsMapping;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_90f7576fb1105f1939fcf6ba388e3b09_tuple;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_7ca73869f92dee0e275198c8d1296454;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_AsyncHTTPProxy;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_61ef6a847bebf0a2c3ef2a8590df82e5;
PyObject *const_str_digest_b4f94e07c384f06e24adb007ddd01145;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_54;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_5652f08dddaee60fc1627fb7141b07e6_tuple;
PyObject *const_dict_2be15da52459e6c97fcc54e96daeb116;
PyObject *const_str_digest_d0b07f392d2ea8269866ad34d2c18165;
PyObject *const_dict_b633884e38fcfd2baba56b8248acc916;
PyObject *const_str_plain_create_connection;
PyObject *const_str_digest_0873b07b9ddd1f6df2beed2862271686;
PyObject *const_tuple_d5a881bba91db057214a6ef3bee67857_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_169;
PyObject *const_tuple_none_none_none_none_none_tuple;
PyObject *const_dict_bfff54bd6eb0339d3a88384778bcb64f;
PyObject *const_str_digest_d3dc3bb2b2ae8c439c78678724f9eb2a;
PyObject *const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4;
PyObject *const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb;
PyObject *const_str_plain_can_handle_request;
PyObject *const_str_digest_b9903944f04959cd3d3322e59c42a1ff;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_3b9501b953f1b20dd054aee8bbbe2a27;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_cc75f5c2b06ce1bcbf6aa39ef4fda841;
PyObject *const_str_digest_845e6295ba66cb9d6b8b5c6c6750c4f9;
PyObject *const_str_digest_37b23c076514e69e517403de054ba4b1;
PyObject *const_str_digest_daf07099d5d1e8f32959d6d22ecc57a5;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_f88e7920fba14ea014ae95df464da6f1;
PyObject *const_tuple_9f7a7d16355edcfade9e59b39ab383e4_tuple;
PyObject *const_int_pos_233;
PyObject *const_tuple_none_none_none_none_true_false_none_none_tuple;
PyObject *const_dict_94b014f79a6fc78201878dd2e303f60b;
PyObject *const_str_digest_be42e80321a14f1f4ce140f9640bdb02;
PyObject *const_str_digest_a3647100734ac17e61265eec23da99c7;
PyObject *const_str_digest_797a0d2c38c50f8728b774c2316c1db4;
PyObject *const_str_digest_d8b6315ed08f65461fe9c2599c40f56a;
PyObject *const_str_digest_41698e529b257d5b2a035bfff26991f2;
PyObject *const_str_digest_067d45a86382fac0f8ecbdfb8eabe47e;
PyObject *const_str_digest_526f4f8c3951d24d6047b2818c3b4fe2;
PyObject *const_str_digest_517206610d160473acbd0bae4166a123;
PyObject *const_tuple_9a663441a3f8a91df64bbf8e813d43cf_tuple;
PyObject *const_str_digest_59f3115b0c9d8a98777ee49aa249f483;
PyObject *const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple;
PyObject *const_str_digest_c6842ec087c1ee781a29a99d1c78a270;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_8f36f5ac2417dc0e6980081190bcf64f_tuple;
PyObject *const_tuple_0b33e33908f410fbbfb2c82bb7edfdd8_tuple;
PyObject *const_tuple_0cff4743763fe389183fd6e812e8b884_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_origin_tuple;
PyObject *const_tuple_49ad3056d6963a0d5b3a2eea9d14883c_tuple;
PyObject *const_tuple_42e5ebe142412a41bfeb13c51f69b6c4_tuple;
PyObject *const_tuple_5ec557bcd28fea7d8ac0962f44aa043d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[211];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpcore._async.http_proxy"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_d66add9f6368e1c4e7f388fd3a18ef8f);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_61076ee1f50e60513050c7e63b799aa9);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_a768081c9b5b74288f45497e6c7c1333_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_url);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_url);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4fa29f68fff80cd78278e8e328505);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_context);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_ssl_context);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_headers);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_dict_067825241f8c57feece2ef78491dec8e);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_headers);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_bytes);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_58);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_ae26dffbb89fcb3bc7b1a5789413fea7);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_b6d1fd56b2e46af73db44565acca368b);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_f13d05edfb6035c87dda6b99282a2de2);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncForwardHTTPConnection);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__keepalive_expiry);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__network_backend);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_79d79bc76ea8e79899d54c5ab263e09e_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__http1);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__http2);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_e4dddb37b9e2dab9a53b1e2d1ee86804_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPConnection);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_b5a9fb90b76f1549d36b84d36e28ae43_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__connection);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_origin);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__remote_origin);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_merge_headers);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_889329c0b7145e587849876d3858b17e);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_64a3d3dfeb0866eed2e63e97e931d06c);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_available);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_expired);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_idle);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncLock);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__connect_lock);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__connected);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_none_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_a5b3fc0f89823674259abdbdbf61cf0b);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_e92482d91bf3e76893604035a367d897);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_0d3ca8f42da94dea1a5e16cf07fe0eee_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_2f7f2d6593ec15c8b1fe56698171376e_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_299);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_phrase_bytes_empty_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_82c9b2f63b822116cbc2cddca15cacf1);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_network_stream);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_ssl_context);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_h2);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_alpn_protocols);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_server_hostname);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Trace);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_tls);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_return_value);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_extra_info);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_object_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_selected_alpn_protocol);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_http2);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP2Connection);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP11Connection);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc3290cca1c383a75e405448928b8e23);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_eddfba0faa48adf86c81b8e234243d7f);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_AsyncNetworkBackend_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkBackend);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxyError_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_3a5f9ce5ee81e098df29d4f552cfbab3_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Origin);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_ssl_context_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__synchronization);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncLock_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__trace);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Trace_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTPConnection_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_http11);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_interfaces);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionInterface);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteOrStr);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeadersAsSequence);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeadersAsMapping);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_90f7576fb1105f1939fcf6ba388e3b09_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_7ca73869f92dee0e275198c8d1296454);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPProxy);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_61ef6a847bebf0a2c3ef2a8590df82e5);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_int_pos_54);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_5652f08dddaee60fc1627fb7141b07e6_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_2be15da52459e6c97fcc54e96daeb116);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0b07f392d2ea8269866ad34d2c18165);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_0873b07b9ddd1f6df2beed2862271686);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_d5a881bba91db057214a6ef3bee67857_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_169);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_bfff54bd6eb0339d3a88384778bcb64f);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3dc3bb2b2ae8c439c78678724f9eb2a);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_handle_request);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9903944f04959cd3d3322e59c42a1ff);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b9501b953f1b20dd054aee8bbbe2a27);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc75f5c2b06ce1bcbf6aa39ef4fda841);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_845e6295ba66cb9d6b8b5c6c6750c4f9);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_37b23c076514e69e517403de054ba4b1);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_daf07099d5d1e8f32959d6d22ecc57a5);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_f88e7920fba14ea014ae95df464da6f1);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_9f7a7d16355edcfade9e59b39ab383e4_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_233);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_true_false_none_none_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_94b014f79a6fc78201878dd2e303f60b);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_be42e80321a14f1f4ce140f9640bdb02);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3647100734ac17e61265eec23da99c7);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_797a0d2c38c50f8728b774c2316c1db4);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8b6315ed08f65461fe9c2599c40f56a);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_41698e529b257d5b2a035bfff26991f2);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_067d45a86382fac0f8ecbdfb8eabe47e);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_526f4f8c3951d24d6047b2818c3b4fe2);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_517206610d160473acbd0bae4166a123);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_9a663441a3f8a91df64bbf8e813d43cf_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_59f3115b0c9d8a98777ee49aa249f483);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6842ec087c1ee781a29a99d1c78a270);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_8f36f5ac2417dc0e6980081190bcf64f_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_0b33e33908f410fbbfb2c82bb7edfdd8_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_0cff4743763fe389183fd6e812e8b884_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_49ad3056d6963a0d5b3a2eea9d14883c_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_42e5ebe142412a41bfeb13c51f69b6c4_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_5ec557bcd28fea7d8ac0962f44aa043d_tuple);
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
void checkModuleConstants_httpcore$_async$http_proxy(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_d66add9f6368e1c4e7f388fd3a18ef8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d66add9f6368e1c4e7f388fd3a18ef8f);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_61076ee1f50e60513050c7e63b799aa9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61076ee1f50e60513050c7e63b799aa9);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_a768081c9b5b74288f45497e6c7c1333_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a768081c9b5b74288f45497e6c7c1333_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enforce_url);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy_url);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4fa29f68fff80cd78278e8e328505));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4fa29f68fff80cd78278e8e328505);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ssl_context);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy_ssl_context);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enforce_headers);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_dict_067825241f8c57feece2ef78491dec8e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_067825241f8c57feece2ef78491dec8e);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy_headers);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_enforce_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enforce_bytes);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_58);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_ae26dffbb89fcb3bc7b1a5789413fea7));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_ae26dffbb89fcb3bc7b1a5789413fea7);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base64);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_b64encode);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_b6d1fd56b2e46af73db44565acca368b));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_b6d1fd56b2e46af73db44565acca368b);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_f13d05edfb6035c87dda6b99282a2de2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f13d05edfb6035c87dda6b99282a2de2);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncForwardHTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncForwardHTTPConnection);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__keepalive_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__keepalive_expiry);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__network_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__network_backend);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_79d79bc76ea8e79899d54c5ab263e09e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_79d79bc76ea8e79899d54c5ab263e09e_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTunnelHTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__http1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http1);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__http2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http2);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_e4dddb37b9e2dab9a53b1e2d1ee86804_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e4dddb37b9e2dab9a53b1e2d1ee86804_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTPConnection);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_b5a9fb90b76f1549d36b84d36e28ae43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b5a9fb90b76f1549d36b84d36e28ae43_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connection);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy_origin);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__remote_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__remote_origin);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_merge_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_merge_headers);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_async_request);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_889329c0b7145e587849876d3858b17e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_889329c0b7145e587849876d3858b17e);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_64a3d3dfeb0866eed2e63e97e931d06c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64a3d3dfeb0866eed2e63e97e931d06c);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_available));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_available);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_expired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_expired);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_idle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_idle);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_closed);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncLock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncLock);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__connect_lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connect_lock);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__connected));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connected);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_connect_none_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_a5b3fc0f89823674259abdbdbf61cf0b));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_a5b3fc0f89823674259abdbdbf61cf0b);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_e92482d91bf3e76893604035a367d897));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_e92482d91bf3e76893604035a367d897);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_0d3ca8f42da94dea1a5e16cf07fe0eee_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0d3ca8f42da94dea1a5e16cf07fe0eee_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_2f7f2d6593ec15c8b1fe56698171376e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2f7f2d6593ec15c8b1fe56698171376e_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_299));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_299);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reason_phrase_bytes_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reason_phrase_bytes_empty_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_errors_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_82c9b2f63b822116cbc2cddca15cacf1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82c9b2f63b822116cbc2cddca15cacf1);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_network_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_network_stream);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_ssl_context);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_h2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_h2);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_alpn_protocols));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_alpn_protocols);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl_context);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_server_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server_hostname);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Trace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Trace);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_tls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_tls);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_return_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return_value);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_extra_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_extra_info);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ssl_object_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_selected_alpn_protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selected_alpn_protocol);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_http2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http2);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP2Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTP2Connection);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP11Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTP11Connection);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc3290cca1c383a75e405448928b8e23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc3290cca1c383a75e405448928b8e23);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_eddfba0faa48adf86c81b8e234243d7f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eddfba0faa48adf86c81b8e234243d7f);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_AsyncNetworkBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_AsyncNetworkBackend_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKET_OPTION);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncNetworkBackend);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxyError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ProxyError_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_3a5f9ce5ee81e098df29d4f552cfbab3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a5f9ce5ee81e098df29d4f552cfbab3_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Origin);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ssl);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_ssl_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_ssl_context_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__synchronization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__synchronization);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncLock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncLock_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__trace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__trace);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Trace_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Trace_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTPConnection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncHTTPConnection_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection_pool);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConnectionPool);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_http11));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http11);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_interfaces));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_interfaces);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionInterface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConnectionInterface);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_str_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteOrStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteOrStr);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeadersAsSequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HeadersAsSequence);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeadersAsMapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HeadersAsMapping);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_90f7576fb1105f1939fcf6ba388e3b09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_90f7576fb1105f1939fcf6ba388e3b09_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_7ca73869f92dee0e275198c8d1296454));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7ca73869f92dee0e275198c8d1296454);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTPProxy);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_61ef6a847bebf0a2c3ef2a8590df82e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61ef6a847bebf0a2c3ef2a8590df82e5);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_int_pos_54));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_54);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_5652f08dddaee60fc1627fb7141b07e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5652f08dddaee60fc1627fb7141b07e6_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_2be15da52459e6c97fcc54e96daeb116));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2be15da52459e6c97fcc54e96daeb116);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0b07f392d2ea8269866ad34d2c18165));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0b07f392d2ea8269866ad34d2c18165);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_connection);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_0873b07b9ddd1f6df2beed2862271686));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0873b07b9ddd1f6df2beed2862271686);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_d5a881bba91db057214a6ef3bee67857_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5a881bba91db057214a6ef3bee67857_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_169));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_169);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_none_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_bfff54bd6eb0339d3a88384778bcb64f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bfff54bd6eb0339d3a88384778bcb64f);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3dc3bb2b2ae8c439c78678724f9eb2a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3dc3bb2b2ae8c439c78678724f9eb2a);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_handle_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_handle_request);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9903944f04959cd3d3322e59c42a1ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9903944f04959cd3d3322e59c42a1ff);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b9501b953f1b20dd054aee8bbbe2a27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b9501b953f1b20dd054aee8bbbe2a27);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc75f5c2b06ce1bcbf6aa39ef4fda841));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc75f5c2b06ce1bcbf6aa39ef4fda841);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_845e6295ba66cb9d6b8b5c6c6750c4f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_845e6295ba66cb9d6b8b5c6c6750c4f9);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_37b23c076514e69e517403de054ba4b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37b23c076514e69e517403de054ba4b1);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_daf07099d5d1e8f32959d6d22ecc57a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_daf07099d5d1e8f32959d6d22ecc57a5);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_f88e7920fba14ea014ae95df464da6f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f88e7920fba14ea014ae95df464da6f1);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_9f7a7d16355edcfade9e59b39ab383e4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9f7a7d16355edcfade9e59b39ab383e4_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_233));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_233);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_true_false_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_true_false_none_none_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_94b014f79a6fc78201878dd2e303f60b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_94b014f79a6fc78201878dd2e303f60b);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_be42e80321a14f1f4ce140f9640bdb02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be42e80321a14f1f4ce140f9640bdb02);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3647100734ac17e61265eec23da99c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3647100734ac17e61265eec23da99c7);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_797a0d2c38c50f8728b774c2316c1db4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_797a0d2c38c50f8728b774c2316c1db4);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8b6315ed08f65461fe9c2599c40f56a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8b6315ed08f65461fe9c2599c40f56a);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_41698e529b257d5b2a035bfff26991f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41698e529b257d5b2a035bfff26991f2);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_067d45a86382fac0f8ecbdfb8eabe47e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_067d45a86382fac0f8ecbdfb8eabe47e);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_526f4f8c3951d24d6047b2818c3b4fe2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_526f4f8c3951d24d6047b2818c3b4fe2);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_517206610d160473acbd0bae4166a123));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_517206610d160473acbd0bae4166a123);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_9a663441a3f8a91df64bbf8e813d43cf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9a663441a3f8a91df64bbf8e813d43cf_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_59f3115b0c9d8a98777ee49aa249f483));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59f3115b0c9d8a98777ee49aa249f483);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6842ec087c1ee781a29a99d1c78a270));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c6842ec087c1ee781a29a99d1c78a270);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_8f36f5ac2417dc0e6980081190bcf64f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f36f5ac2417dc0e6980081190bcf64f_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_0b33e33908f410fbbfb2c82bb7edfdd8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0b33e33908f410fbbfb2c82bb7edfdd8_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_0cff4743763fe389183fd6e812e8b884_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0cff4743763fe389183fd6e812e8b884_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_49ad3056d6963a0d5b3a2eea9d14883c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_49ad3056d6963a0d5b3a2eea9d14883c_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_42e5ebe142412a41bfeb13c51f69b6c4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_42e5ebe142412a41bfeb13c51f69b6c4_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_5ec557bcd28fea7d8ac0962f44aa043d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ec557bcd28fea7d8ac0962f44aa043d_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 21
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
static PyObject *module_var_accessor_httpcore$_async$http_proxy$AsyncConnectionInterface(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$AsyncConnectionPool(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$AsyncForwardHTTPConnection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncForwardHTTPConnection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncForwardHTTPConnection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncForwardHTTPConnection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncForwardHTTPConnection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncForwardHTTPConnection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncForwardHTTPConnection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncForwardHTTPConnection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncForwardHTTPConnection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$AsyncHTTP11Connection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$AsyncHTTPConnection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPConnection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncHTTPConnection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncHTTPConnection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncHTTPConnection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncHTTPConnection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPConnection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPConnection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPConnection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$AsyncLock(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$AsyncTunnelHTTPConnection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncTunnelHTTPConnection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncTunnelHTTPConnection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$ByteOrStr(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteOrStr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ByteOrStr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ByteOrStr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ByteOrStr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ByteOrStr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteOrStr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteOrStr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteOrStr);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$ProxyError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$Request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$Trace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$URL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$base64(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$default_ssl_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$enforce_bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$enforce_headers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_headers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enforce_headers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enforce_headers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enforce_headers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enforce_headers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_headers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_headers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_headers);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$enforce_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_async$http_proxy$merge_headers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_async$http_proxy->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_async$http_proxy->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_headers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_async$http_proxy->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_merge_headers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_merge_headers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_merge_headers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_merge_headers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_headers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_headers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_headers);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_c9165a83deb3bb49d7cbc0a10119c887;
static PyCodeObject *code_objects_1eac9f03784963f6bc86dbe371ff419b;
static PyCodeObject *code_objects_b70764da130d9fd4869cb84522f9fdc5;
static PyCodeObject *code_objects_2afbfdfc8ecdc27803be45ef8194ff14;
static PyCodeObject *code_objects_2da89d14cc68dbb17c732bc61b54d9c5;
static PyCodeObject *code_objects_7d4202434305c38e8f7da80513415653;
static PyCodeObject *code_objects_f09e4a10b32a9899e3577dc9a4d153d5;
static PyCodeObject *code_objects_82f97707aabd20a64d8c515967bc753c;
static PyCodeObject *code_objects_d7a0970a6192c9b4db018cd0a7292f2f;
static PyCodeObject *code_objects_bf60b1b4276b11899c6bc8831e490f1a;
static PyCodeObject *code_objects_a22757b184319f2264edeb0b3db5a8c1;
static PyCodeObject *code_objects_8e00f65cb10ed41d0d01a7f2ee46d108;
static PyCodeObject *code_objects_1f5cad6b7414668260268e00eb4067d2;
static PyCodeObject *code_objects_7e23d17a3e1ffced36109ffe538ec942;
static PyCodeObject *code_objects_5bcdcda0378f04211da1a3c5cc1e0034;
static PyCodeObject *code_objects_7861a7073ac78d3723ed15c6f41ff179;
static PyCodeObject *code_objects_602d8a2a08602ff208ff5fcad2d98323;
static PyCodeObject *code_objects_c4bd8afe43448255005a7aa92e353e3d;
static PyCodeObject *code_objects_37af1a4ec2e47243ced811517e06acb0;
static PyCodeObject *code_objects_825d9ef13157cab6eb00dd1f50a7cdd2;
static PyCodeObject *code_objects_e1ea3dcab134476b4b8554c1876d84e8;
static PyCodeObject *code_objects_8b411ca926d4698e1136d9da48b3b642;
static PyCodeObject *code_objects_d5cd2c27ce25d6e57acf27344cb78e39;
static PyCodeObject *code_objects_39ebfae6def6eb5ea558dd3899fbdf52;
static PyCodeObject *code_objects_6e62c3e20c3d3c0de79352744c555fd4;
static PyCodeObject *code_objects_76cd571ff79cdd229c5bee5083434721;
static PyCodeObject *code_objects_8b218a953c1e33b0d0d7a250f0498085;
static PyCodeObject *code_objects_de658efc8f525e59780da1fef03255aa;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_59f3115b0c9d8a98777ee49aa249f483); CHECK_OBJECT(module_filename_obj);
code_objects_c9165a83deb3bb49d7cbc0a10119c887 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_61076ee1f50e60513050c7e63b799aa9, mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple, NULL, 1, 0, 0);
code_objects_1eac9f03784963f6bc86dbe371ff419b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c6842ec087c1ee781a29a99d1c78a270, mod_consts.const_str_digest_c6842ec087c1ee781a29a99d1c78a270, NULL, NULL, 0, 0, 0);
code_objects_b70764da130d9fd4869cb84522f9fdc5 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncForwardHTTPConnection, mod_consts.const_str_plain_AsyncForwardHTTPConnection, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2afbfdfc8ecdc27803be45ef8194ff14 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncHTTPProxy, mod_consts.const_str_plain_AsyncHTTPProxy, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2da89d14cc68dbb17c732bc61b54d9c5 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncTunnelHTTPConnection, mod_consts.const_str_plain_AsyncTunnelHTTPConnection, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7d4202434305c38e8f7da80513415653 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d3dc3bb2b2ae8c439c78678724f9eb2a, mod_consts.const_tuple_8f36f5ac2417dc0e6980081190bcf64f_tuple, NULL, 8, 0, 0);
code_objects_f09e4a10b32a9899e3577dc9a4d153d5 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d0b07f392d2ea8269866ad34d2c18165, mod_consts.const_tuple_0b33e33908f410fbbfb2c82bb7edfdd8_tuple, mod_consts.const_tuple_str_plain___class___tuple, 16, 0, 0);
code_objects_82f97707aabd20a64d8c515967bc753c = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_be42e80321a14f1f4ce140f9640bdb02, mod_consts.const_tuple_0cff4743763fe389183fd6e812e8b884_tuple, NULL, 11, 0, 0);
code_objects_d7a0970a6192c9b4db018cd0a7292f2f = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_f88e7920fba14ea014ae95df464da6f1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bf60b1b4276b11899c6bc8831e490f1a = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_517206610d160473acbd0bae4166a123, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a22757b184319f2264edeb0b3db5a8c1 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_64a3d3dfeb0866eed2e63e97e931d06c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8e00f65cb10ed41d0d01a7f2ee46d108 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_eddfba0faa48adf86c81b8e234243d7f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1f5cad6b7414668260268e00eb4067d2 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_can_handle_request, mod_consts.const_str_digest_b9903944f04959cd3d3322e59c42a1ff, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple, NULL, 2, 0, 0);
code_objects_7e23d17a3e1ffced36109ffe538ec942 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_can_handle_request, mod_consts.const_str_digest_a3647100734ac17e61265eec23da99c7, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple, NULL, 2, 0, 0);
code_objects_5bcdcda0378f04211da1a3c5cc1e0034 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_connection, mod_consts.const_str_digest_0873b07b9ddd1f6df2beed2862271686, mod_consts.const_tuple_str_plain_self_str_plain_origin_tuple, NULL, 2, 0, 0);
code_objects_7861a7073ac78d3723ed15c6f41ff179 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_async_request, mod_consts.const_str_digest_889329c0b7145e587849876d3858b17e, mod_consts.const_tuple_49ad3056d6963a0d5b3a2eea9d14883c_tuple, NULL, 2, 0, 0);
code_objects_602d8a2a08602ff208ff5fcad2d98323 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_async_request, mod_consts.const_str_digest_bc3290cca1c383a75e405448928b8e23, mod_consts.const_tuple_42e5ebe142412a41bfeb13c51f69b6c4_tuple, NULL, 2, 0, 0);
code_objects_c4bd8afe43448255005a7aa92e353e3d = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_has_expired, mod_consts.const_str_digest_845e6295ba66cb9d6b8b5c6c6750c4f9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_37af1a4ec2e47243ced811517e06acb0 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_has_expired, mod_consts.const_str_digest_41698e529b257d5b2a035bfff26991f2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_825d9ef13157cab6eb00dd1f50a7cdd2 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_info, mod_consts.const_str_digest_3b9501b953f1b20dd054aee8bbbe2a27, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e1ea3dcab134476b4b8554c1876d84e8 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_info, mod_consts.const_str_digest_797a0d2c38c50f8728b774c2316c1db4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8b411ca926d4698e1136d9da48b3b642 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_available, mod_consts.const_str_digest_cc75f5c2b06ce1bcbf6aa39ef4fda841, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d5cd2c27ce25d6e57acf27344cb78e39 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_available, mod_consts.const_str_digest_d8b6315ed08f65461fe9c2599c40f56a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_39ebfae6def6eb5ea558dd3899fbdf52 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_closed, mod_consts.const_str_digest_daf07099d5d1e8f32959d6d22ecc57a5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6e62c3e20c3d3c0de79352744c555fd4 = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_closed, mod_consts.const_str_digest_526f4f8c3951d24d6047b2818c3b4fe2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_76cd571ff79cdd229c5bee5083434721 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_idle, mod_consts.const_str_digest_37b23c076514e69e517403de054ba4b1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8b218a953c1e33b0d0d7a250f0498085 = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_idle, mod_consts.const_str_digest_067d45a86382fac0f8ecbdfb8eabe47e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_de658efc8f525e59780da1fef03255aa = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_merge_headers, mod_consts.const_str_plain_merge_headers, mod_consts.const_tuple_5ec557bcd28fea7d8ac0962f44aa043d_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__10_has_expired(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__11_is_idle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__12_is_closed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__14___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__15_handle_async_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__16_can_handle_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__17_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__18_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__19_is_available(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__1_merge_headers(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__20_has_expired(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__21_is_idle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__22_is_closed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__23___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__3_create_connection(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__5_handle_async_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__6_can_handle_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__7_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__8_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__9_is_available(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_async$http_proxy$$$function__1_merge_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_default_headers = python_pars[0];
PyObject *par_override_headers = python_pars[1];
PyObject *var_has_override = NULL;
PyObject *outline_0_var_key = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_de658efc8f525e59780da1fef03255aa, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers = cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(par_default_headers);
tmp_cmp_expr_left_1 = par_default_headers;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_default_headers);
tmp_list_arg_1 = par_default_headers;
tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
{
    PyObject *old = par_default_headers;
    assert(old != NULL);
    par_default_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_list_arg_2;
CHECK_OBJECT(par_override_headers);
tmp_cmp_expr_left_2 = par_override_headers;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(par_override_headers);
tmp_list_arg_2 = par_override_headers;
tmp_assign_source_2 = MAKE_LIST(tstate, tmp_list_arg_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
{
    PyObject *old = par_override_headers;
    assert(old != NULL);
    par_override_headers = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_set_arg_1;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_override_headers);
tmp_iter_arg_1 = par_override_headers;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_4;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_set_arg_1 = MAKE_GENERATOR_httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_assign_source_3 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_has_override == NULL);
var_has_override = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_5;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_default_headers);
tmp_iter_arg_2 = par_default_headers;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 46;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_5;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_12 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_12;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_13 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_13;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(outline_0_var_key);
tmp_expression_value_1 = outline_0_var_key;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers->m_frame.f_lineno = 49;
tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_has_override);
tmp_cmp_expr_right_3 = var_has_override;
tmp_res = PySet_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_key);
tmp_tuple_element_1 = outline_0_var_key;
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_value);
tmp_tuple_element_1 = outline_0_var_value;
PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_5 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_5);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 46;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = par_default_headers;
    assert(old != NULL);
    par_default_headers = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_default_headers);
tmp_add_expr_left_1 = par_default_headers;
CHECK_OBJECT(par_override_headers);
tmp_add_expr_right_1 = par_override_headers;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers,
    type_description_1,
    par_default_headers,
    par_override_headers,
    var_has_override
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers == cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__1_merge_headers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_default_headers);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
par_default_headers = NULL;
CHECK_OBJECT(par_override_headers);
CHECK_OBJECT(par_override_headers);
Py_DECREF(par_override_headers);
par_override_headers = NULL;
CHECK_OBJECT(var_has_override);
CHECK_OBJECT(var_has_override);
Py_DECREF(var_has_override);
var_has_override = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_default_headers);
par_default_headers = NULL;
Py_XDECREF(par_override_headers);
par_override_headers = NULL;
Py_XDECREF(var_has_override);
var_has_override = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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



#if 1
struct httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals {
PyObject *var_key;
PyObject *var_value;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals *generator_heap = (struct httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_key = NULL;
generator_heap->var_value = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c9165a83deb3bb49d7cbc0a10119c887, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 45;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_value;
    generator_heap->var_value = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_key);
tmp_expression_value_2 = generator_heap->var_key;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 45;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    generator_heap->var_key,
    generator_heap->var_value
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
Py_XDECREF(generator_heap->var_value);
generator_heap->var_value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
Py_XDECREF(generator_heap->var_value);
generator_heap->var_value = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_context,
        module_httpcore$_async$http_proxy,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_61076ee1f50e60513050c7e63b799aa9,
#endif
        code_objects_c9165a83deb3bb49d7cbc0a10119c887,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_async$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy_url = python_pars[1];
PyObject *par_proxy_auth = python_pars[2];
PyObject *par_proxy_headers = python_pars[3];
PyObject *par_ssl_context = python_pars[4];
PyObject *par_proxy_ssl_context = python_pars[5];
PyObject *par_max_connections = python_pars[6];
PyObject *par_max_keepalive_connections = python_pars[7];
PyObject *par_keepalive_expiry = python_pars[8];
PyObject *par_http1 = python_pars[9];
PyObject *par_http2 = python_pars[10];
PyObject *par_retries = python_pars[11];
PyObject *par_local_address = python_pars[12];
PyObject *par_uds = python_pars[13];
PyObject *par_network_backend = python_pars[14];
PyObject *par_socket_options = python_pars[15];
PyObject *var_username = NULL;
PyObject *var_password = NULL;
PyObject *var_userpass = NULL;
PyObject *var_authorization = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f09e4a10b32a9899e3577dc9a4d153d5, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__2___init__ = cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__2___init__);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__2___init__) == 2);

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
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_httpcore$_async$http_proxy, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooc";
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
CHECK_OBJECT(par_local_address);
tmp_kw_call_value_8_1 = par_local_address;
CHECK_OBJECT(par_uds);
tmp_kw_call_value_9_1 = par_uds;
CHECK_OBJECT(par_socket_options);
tmp_kw_call_value_10_1 = par_socket_options;
frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame.f_lineno = 112;
{
    PyObject *kw_values[11] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_a768081c9b5b74288f45497e6c7c1333_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_2 = module_var_accessor_httpcore$_async$http_proxy$enforce_url(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_url);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_url);
tmp_tuple_element_1 = par_proxy_url;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_e8cfb0b982ccbe43c16c46ef5a041797);
frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame.f_lineno = 126;
tmp_assattr_value_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__proxy_url, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__proxy_url);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_proxy_ssl_context);
tmp_cmp_expr_left_2 = par_proxy_ssl_context;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ece4fa29f68fff80cd78278e8e328505;
frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame.f_lineno = 130;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 130;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_ssl_context);
tmp_assattr_value_2 = par_ssl_context;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__ssl_context, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_proxy_ssl_context);
tmp_assattr_value_3 = par_proxy_ssl_context;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__proxy_ssl_context, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
PyObject *tmp_assattr_target_4;
tmp_called_value_3 = module_var_accessor_httpcore$_async$http_proxy$enforce_headers(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_headers);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_headers);
tmp_tuple_element_2 = par_proxy_headers;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_067825241f8c57feece2ef78491dec8e);
frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame.f_lineno = 136;
tmp_assattr_value_4 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__proxy_headers, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_proxy_auth);
tmp_cmp_expr_left_3 = par_proxy_auth;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kwargs_value_3;
tmp_called_value_4 = module_var_accessor_httpcore$_async$http_proxy$enforce_bytes(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_bytes);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_auth);
tmp_expression_value_4 = par_proxy_auth;
tmp_subscript_value_1 = const_int_0;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_3);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame.f_lineno = 138;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_username == NULL);
var_username = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kwargs_value_4;
tmp_called_value_5 = module_var_accessor_httpcore$_async$http_proxy$enforce_bytes(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_bytes);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_auth);
tmp_expression_value_5 = par_proxy_auth;
tmp_subscript_value_2 = const_int_pos_1;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_4);
tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts.const_dict_a837522e82526ac63b5805e45b1d06ab);
frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame.f_lineno = 139;
tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
CHECK_OBJECT(tmp_kwargs_value_4);
Py_DECREF(tmp_kwargs_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_password == NULL);
var_password = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_username);
tmp_add_expr_left_2 = var_username;
tmp_add_expr_right_2 = mod_consts.const_bytes_chr_58;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_password);
tmp_add_expr_right_1 = var_password;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_userpass == NULL);
var_userpass = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_add_expr_left_3 = mod_consts.const_bytes_digest_ae26dffbb89fcb3bc7b1a5789413fea7;
tmp_called_instance_1 = module_var_accessor_httpcore$_async$http_proxy$base64(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_userpass);
tmp_args_element_value_1 = var_userpass;
frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame.f_lineno = 141;
tmp_add_expr_right_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_b64encode, tmp_args_element_value_1);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_authorization == NULL);
var_authorization = tmp_assign_source_4;
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_5;
tmp_tuple_element_5 = mod_consts.const_bytes_digest_b6d1fd56b2e46af73db44565acca368b;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_authorization);
tmp_tuple_element_5 = var_authorization;
PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_5);
tmp_add_expr_left_4 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_add_expr_left_4, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_add_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__proxy_headers);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 144;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_assattr_value_5 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__proxy_headers, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__2___init__,
    type_description_1,
    par_self,
    par_proxy_url,
    par_proxy_auth,
    par_proxy_headers,
    par_ssl_context,
    par_proxy_ssl_context,
    par_max_connections,
    par_max_keepalive_connections,
    par_keepalive_expiry,
    par_http1,
    par_http2,
    par_retries,
    par_local_address,
    par_uds,
    par_network_backend,
    par_socket_options,
    var_username,
    var_password,
    var_userpass,
    var_authorization,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__2___init__ == cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__2___init__);

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
Py_XDECREF(var_userpass);
var_userpass = NULL;
Py_XDECREF(var_authorization);
var_authorization = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
Py_XDECREF(var_userpass);
var_userpass = NULL;
Py_XDECREF(var_authorization);
var_authorization = NULL;
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
CHECK_OBJECT(par_proxy_url);
Py_DECREF(par_proxy_url);
CHECK_OBJECT(par_proxy_auth);
Py_DECREF(par_proxy_auth);
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);
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
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
CHECK_OBJECT(par_uds);
Py_DECREF(par_uds);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);
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
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);
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
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
CHECK_OBJECT(par_uds);
Py_DECREF(par_uds);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__3_create_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_origin = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_5bcdcda0378f04211da1a3c5cc1e0034, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection = cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_origin);
tmp_expression_value_1 = par_origin;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_expression_value_7;
tmp_called_value_1 = module_var_accessor_httpcore$_async$http_proxy$AsyncForwardHTTPConnection(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncForwardHTTPConnection);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__proxy_url);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_origin);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__proxy_headers);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_origin);
tmp_kw_call_value_2_1 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 152;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__network_backend);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_3_1);

exception_lineno = 153;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__proxy_ssl_context);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_4_1);

exception_lineno = 154;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection->m_frame.f_lineno = 148;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_79d79bc76ea8e79899d54c5ab263e09e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_5_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_expression_value_16;
tmp_called_value_2 = module_var_accessor_httpcore$_async$http_proxy$AsyncTunnelHTTPConnection(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncTunnelHTTPConnection);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__proxy_url);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_origin);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__proxy_headers);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 158;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_origin);
tmp_kw_call_value_2_2 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__ssl_context);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 160;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__proxy_ssl_context);
if (tmp_kw_call_value_4_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_3_2);

exception_lineno = 161;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_kw_call_value_5_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_5_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);

exception_lineno = 162;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__http1);
if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);

exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__http2);
if (tmp_kw_call_value_7_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_6_1);

exception_lineno = 164;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_kw_call_value_8_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__network_backend);
if (tmp_kw_call_value_8_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_7_1);

exception_lineno = 165;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection->m_frame.f_lineno = 156;
{
    PyObject *kw_values[9] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e4dddb37b9e2dab9a53b1e2d1ee86804_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
CHECK_OBJECT(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_4_2);
CHECK_OBJECT(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_5_2);
CHECK_OBJECT(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_6_1);
CHECK_OBJECT(tmp_kw_call_value_7_1);
Py_DECREF(tmp_kw_call_value_7_1);
CHECK_OBJECT(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_8_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection,
    type_description_1,
    par_self,
    par_origin
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection == cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__3_create_connection);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy_origin = python_pars[1];
PyObject *par_remote_origin = python_pars[2];
PyObject *par_proxy_headers = python_pars[3];
PyObject *par_keepalive_expiry = python_pars[4];
PyObject *par_network_backend = python_pars[5];
PyObject *par_socket_options = python_pars[6];
PyObject *par_proxy_ssl_context = python_pars[7];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7d4202434305c38e8f7da80513415653, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__4___init__ = cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__4___init__);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_httpcore$_async$http_proxy$AsyncHTTPConnection(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncHTTPConnection);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_origin);
tmp_kw_call_value_0_1 = par_proxy_origin;
CHECK_OBJECT(par_keepalive_expiry);
tmp_kw_call_value_1_1 = par_keepalive_expiry;
CHECK_OBJECT(par_network_backend);
tmp_kw_call_value_2_1 = par_network_backend;
CHECK_OBJECT(par_socket_options);
tmp_kw_call_value_3_1 = par_socket_options;
CHECK_OBJECT(par_proxy_ssl_context);
tmp_kw_call_value_4_1 = par_proxy_ssl_context;
frame_frame_httpcore$_async$http_proxy$$$function__4___init__->m_frame.f_lineno = 180;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_b5a9fb90b76f1549d36b84d36e28ae43_tuple);
}

if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__connection, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_proxy_origin);
tmp_assattr_value_2 = par_proxy_origin;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__proxy_origin, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_assattr_target_3;
tmp_called_value_2 = module_var_accessor_httpcore$_async$http_proxy$enforce_headers(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_headers);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_headers);
tmp_tuple_element_1 = par_proxy_headers;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_067825241f8c57feece2ef78491dec8e);
frame_frame_httpcore$_async$http_proxy$$$function__4___init__->m_frame.f_lineno = 188;
tmp_assattr_value_3 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__proxy_headers, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_remote_origin);
tmp_assattr_value_4 = par_remote_origin;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__remote_origin, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__4___init__,
    type_description_1,
    par_self,
    par_proxy_origin,
    par_remote_origin,
    par_proxy_headers,
    par_keepalive_expiry,
    par_network_backend,
    par_socket_options,
    par_proxy_ssl_context
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__4___init__ == cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__4___init__);

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
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);
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
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__5_handle_async_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(tstate, tmp_closure_1);

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
struct httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals {
PyObject *var_headers;
PyObject *var_url;
PyObject *var_proxy_request;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals *coroutine_heap = (struct httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_headers = NULL;
coroutine_heap->var_url = NULL;
coroutine_heap->var_proxy_request = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_7861a7073ac78d3723ed15c6f41ff179, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_httpcore$_async$http_proxy$merge_headers(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_merge_headers);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 192;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 192;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__proxy_headers);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 192;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 192;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 192;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 192;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_headers == NULL);
coroutine_heap->var_headers = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_expression_value_9;
tmp_called_value_2 = module_var_accessor_httpcore$_async$http_proxy$URL(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_URL);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 197;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_bytes_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_url);
if (tmp_bytes_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

coroutine_heap->exception_lineno = 197;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

coroutine_heap->exception_lineno = 197;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 193;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_url == NULL);
coroutine_heap->var_url = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_12;
tmp_called_value_3 = module_var_accessor_httpcore$_async$http_proxy$Request(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 199;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 200;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_method);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 200;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_url);
tmp_kw_call_value_1_2 = coroutine_heap->var_url;
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_kw_call_value_2_2 = coroutine_heap->var_headers;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_stream);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_3_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_3_2);

coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 199;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_3db2f0f638797fab0dd88ee9a3fb3633_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 199;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_proxy_request == NULL);
coroutine_heap->var_proxy_request = tmp_assign_source_3;
}
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_3;
coroutine->m_frame->m_frame.f_lineno = 206;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_proxy_request);
tmp_args_element_value_3 = coroutine_heap->var_proxy_request;
coroutine->m_frame->m_frame.f_lineno = 206;
tmp_expression_value_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_handle_async_request, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_13 = ASYNC_AWAIT(tstate, tmp_expression_value_14, await_normal);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_13;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "ccooo";
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
    coroutine_heap->var_headers,
    coroutine_heap->var_url,
    coroutine_heap->var_proxy_request
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
CHECK_OBJECT(coroutine_heap->var_headers);
CHECK_OBJECT(coroutine_heap->var_headers);
Py_DECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
CHECK_OBJECT(coroutine_heap->var_url);
CHECK_OBJECT(coroutine_heap->var_url);
Py_DECREF(coroutine_heap->var_url);
coroutine_heap->var_url = NULL;
CHECK_OBJECT(coroutine_heap->var_proxy_request);
CHECK_OBJECT(coroutine_heap->var_proxy_request);
Py_DECREF(coroutine_heap->var_proxy_request);
coroutine_heap->var_proxy_request = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
Py_XDECREF(coroutine_heap->var_url);
coroutine_heap->var_url = NULL;
Py_XDECREF(coroutine_heap->var_proxy_request);
coroutine_heap->var_proxy_request = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

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

static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_context,
        module_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_handle_async_request,
        mod_consts.const_str_digest_889329c0b7145e587849876d3858b17e,
        code_objects_7861a7073ac78d3723ed15c6f41ff179,
        closure,
        2,
#if 1
        sizeof(struct httpcore$_async$http_proxy$$$function__5_handle_async_request$$$coroutine__1_handle_async_request_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__6_can_handle_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_origin = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request = MAKE_FUNCTION_FRAME(tstate, code_objects_1f5cad6b7414668260268e00eb4067d2, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request = cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request) == 2);

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


exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request,
    type_description_1,
    par_self,
    par_origin
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request == cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__6_can_handle_request);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__7_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a22757b184319f2264edeb0b3db5a8c1, module_httpcore$_async$http_proxy, sizeof(void *));
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
coroutine->m_frame->m_frame.f_lineno = 212;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 212;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 212;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 212;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 212;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 212;
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


coroutine_heap->exception_lineno = 212;
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

static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose_context,
        module_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_64a3d3dfeb0866eed2e63e97e931d06c,
        code_objects_a22757b184319f2264edeb0b3db5a8c1,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_async$http_proxy$$$function__7_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__8_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__8_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info = MAKE_FUNCTION_FRAME(tstate, code_objects_825d9ef13157cab6eb00dd1f50a7cdd2, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__8_info = cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__8_info);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__8_info) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__8_info->m_frame.f_lineno = 215;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_info);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__8_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__8_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__8_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__8_info,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__8_info == cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__8_info = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__8_info);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__9_is_available(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__9_is_available;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available = MAKE_FUNCTION_FRAME(tstate, code_objects_8b411ca926d4698e1136d9da48b3b642, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__9_is_available = cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__9_is_available);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__9_is_available) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__9_is_available->m_frame.f_lineno = 218;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_available);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__9_is_available, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__9_is_available->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__9_is_available, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__9_is_available,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__9_is_available == cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__9_is_available = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__9_is_available);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__10_has_expired(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired = MAKE_FUNCTION_FRAME(tstate, code_objects_c4bd8afe43448255005a7aa92e353e3d, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired = cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired->m_frame.f_lineno = 221;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_has_expired);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired == cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__10_has_expired);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__11_is_idle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle = MAKE_FUNCTION_FRAME(tstate, code_objects_76cd571ff79cdd229c5bee5083434721, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle = cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle->m_frame.f_lineno = 224;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_idle);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle == cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__11_is_idle);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__12_is_closed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed = MAKE_FUNCTION_FRAME(tstate, code_objects_39ebfae6def6eb5ea558dd3899fbdf52, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed = cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed->m_frame.f_lineno = 227;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_closed);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed == cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__12_is_closed);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__13___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__13___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d7a0970a6192c9b4db018cd0a7292f2f, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__13___repr__ = cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__13___repr__);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__13___repr__) == 2);

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


exception_lineno = 230;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
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


exception_lineno = 230;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_httpcore$_async$http_proxy$$$function__13___repr__->m_frame.f_lineno = 230;
tmp_format_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_info);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
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


exception_lineno = 230;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__13___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__13___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__13___repr__ == cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__13___repr__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__13___repr__);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy_origin = python_pars[1];
PyObject *par_remote_origin = python_pars[2];
PyObject *par_ssl_context = python_pars[3];
PyObject *par_proxy_ssl_context = python_pars[4];
PyObject *par_proxy_headers = python_pars[5];
PyObject *par_keepalive_expiry = python_pars[6];
PyObject *par_http1 = python_pars[7];
PyObject *par_http2 = python_pars[8];
PyObject *par_network_backend = python_pars[9];
PyObject *par_socket_options = python_pars[10];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_82f97707aabd20a64d8c515967bc753c, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__14___init__ = cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__14___init__);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__14___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_httpcore$_async$http_proxy$AsyncHTTPConnection(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncHTTPConnection);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_origin);
tmp_kw_call_value_0_1 = par_proxy_origin;
CHECK_OBJECT(par_keepalive_expiry);
tmp_kw_call_value_1_1 = par_keepalive_expiry;
CHECK_OBJECT(par_network_backend);
tmp_kw_call_value_2_1 = par_network_backend;
CHECK_OBJECT(par_socket_options);
tmp_kw_call_value_3_1 = par_socket_options;
CHECK_OBJECT(par_proxy_ssl_context);
tmp_kw_call_value_4_1 = par_proxy_ssl_context;
frame_frame_httpcore$_async$http_proxy$$$function__14___init__->m_frame.f_lineno = 247;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_b5a9fb90b76f1549d36b84d36e28ae43_tuple);
}

if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__connection, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_proxy_origin);
tmp_assattr_value_2 = par_proxy_origin;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__proxy_origin, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_remote_origin);
tmp_assattr_value_3 = par_remote_origin;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__remote_origin, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooo";
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


exception_lineno = 256;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_proxy_ssl_context);
tmp_assattr_value_5 = par_proxy_ssl_context;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__proxy_ssl_context, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_assattr_target_6;
tmp_called_value_2 = module_var_accessor_httpcore$_async$http_proxy$enforce_headers(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enforce_headers);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_headers);
tmp_tuple_element_1 = par_proxy_headers;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_067825241f8c57feece2ef78491dec8e);
frame_frame_httpcore$_async$http_proxy$$$function__14___init__->m_frame.f_lineno = 258;
tmp_assattr_value_6 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__proxy_headers, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_keepalive_expiry);
tmp_assattr_value_7 = par_keepalive_expiry;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__keepalive_expiry, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_http1);
tmp_assattr_value_8 = par_http1;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__http1, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_http2);
tmp_assattr_value_9 = par_http2;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__http2, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_called_value_3;
PyObject *tmp_assattr_target_10;
tmp_called_value_3 = module_var_accessor_httpcore$_async$http_proxy$AsyncLock(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncLock);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__14___init__->m_frame.f_lineno = 262;
tmp_assattr_value_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__connect_lock, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__connected, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__14___init__,
    type_description_1,
    par_self,
    par_proxy_origin,
    par_remote_origin,
    par_ssl_context,
    par_proxy_ssl_context,
    par_proxy_headers,
    par_keepalive_expiry,
    par_http1,
    par_http2,
    par_network_backend,
    par_socket_options
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__14___init__ == cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__14___init__);

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
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);
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
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_keepalive_expiry);
Py_DECREF(par_keepalive_expiry);
CHECK_OBJECT(par_http1);
Py_DECREF(par_http1);
CHECK_OBJECT(par_http2);
Py_DECREF(par_http2);
CHECK_OBJECT(par_network_backend);
Py_DECREF(par_network_backend);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__15_handle_async_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request(tstate, tmp_closure_1);

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
struct httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request_locals {
PyObject *var_timeouts;
PyObject *var_timeout;
PyObject *var_target;
PyObject *var_connect_url;
PyObject *var_connect_headers;
PyObject *var_connect_request;
PyObject *var_connect_response;
PyObject *var_reason_bytes;
PyObject *var_reason_str;
PyObject *var_msg;
PyObject *var_stream;
PyObject *var_ssl_context;
PyObject *var_alpn_protocols;
PyObject *var_kwargs;
PyObject *var_trace;
PyObject *var_ssl_object;
PyObject *var_http2_negotiated;
PyObject *var_AsyncHTTP2Connection;
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
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
};
#endif

static PyObject *httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request_locals *coroutine_heap = (struct httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
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
coroutine_heap->var_timeout = NULL;
coroutine_heap->var_target = NULL;
coroutine_heap->var_connect_url = NULL;
coroutine_heap->var_connect_headers = NULL;
coroutine_heap->var_connect_request = NULL;
coroutine_heap->var_connect_response = NULL;
coroutine_heap->var_reason_bytes = NULL;
coroutine_heap->var_reason_str = NULL;
coroutine_heap->var_msg = NULL;
coroutine_heap->var_stream = NULL;
coroutine_heap->var_ssl_context = NULL;
coroutine_heap->var_alpn_protocols = NULL;
coroutine_heap->var_kwargs = NULL;
coroutine_heap->var_trace = NULL;
coroutine_heap->var_ssl_object = NULL;
coroutine_heap->var_http2_negotiated = NULL;
coroutine_heap->var_AsyncHTTP2Connection = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_602d8a2a08602ff208ff5fcad2d98323, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_extensions);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_timeout;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
coroutine->m_frame->m_frame.f_lineno = 266;
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


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_timeouts == NULL);
coroutine_heap->var_timeouts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->var_timeouts);
tmp_expression_value_3 = coroutine_heap->var_timeouts;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 267;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_connect_none_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_timeout == NULL);
coroutine_heap->var_timeout = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__connect_lock);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_5 = coroutine_heap->tmp_with_2__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___aenter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 269;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_6 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___aexit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
coroutine->m_frame->m_frame.f_lineno = 269;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
tmp_expression_value_8 = coroutine_heap->tmp_with_2__enter;
tmp_expression_value_7 = ASYNC_AWAIT(tstate, tmp_expression_value_8, await_enter);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_7;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_2__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_2__enter = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_9;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 270;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__connected);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 270;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 270;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_8;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
tmp_mod_expr_left_1 = mod_consts.const_bytes_digest_a5b3fc0f89823674259abdbdbf61cf0b;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_8 = BINARY_OPERATION_MOD_OBJECT_BYTES_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_target == NULL);
coroutine_heap->var_target = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_value_3_1;
tmp_called_value_4 = module_var_accessor_httpcore$_async$http_proxy$URL(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_URL);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 275;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 275;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 275;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__proxy_origin);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_target);
tmp_kw_call_value_3_1 = coroutine_heap->var_target;
coroutine->m_frame->m_frame.f_lineno = 273;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_7aa59612627d14f2d60261820390ead2_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_connect_url == NULL);
coroutine_heap->var_connect_url = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_20;
tmp_called_value_5 = module_var_accessor_httpcore$_async$http_proxy$merge_headers(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_merge_headers);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 279;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_bytes_digest_e92482d91bf3e76893604035a367d897;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(coroutine_heap->var_target);
tmp_tuple_element_2 = coroutine_heap->var_target;
PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_tuple_0d3ca8f42da94dea1a5e16cf07fe0eee_tuple;
PyList_SET_ITEM0(tmp_args_element_value_1, 1, tmp_list_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 280;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_20 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__proxy_headers);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 280;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 279;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 279;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_connect_headers == NULL);
coroutine_heap->var_connect_headers = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_expression_value_21;
tmp_called_value_6 = module_var_accessor_httpcore$_async$http_proxy$Request(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_kw_call_value_0_2 = mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf;
CHECK_OBJECT(coroutine_heap->var_connect_url);
tmp_kw_call_value_1_2 = coroutine_heap->var_connect_url;
CHECK_OBJECT(coroutine_heap->var_connect_headers);
tmp_kw_call_value_2_2 = coroutine_heap->var_connect_headers;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 282;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

    tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_2f7f2d6593ec15c8b1fe56698171376e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_connect_request == NULL);
coroutine_heap->var_connect_request = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_3;
coroutine->m_frame->m_frame.f_lineno = 288;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_24 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_connect_request);
tmp_args_element_value_3 = coroutine_heap->var_connect_request;
coroutine->m_frame->m_frame.f_lineno = 288;
tmp_expression_value_23 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_handle_async_request, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_22 = ASYNC_AWAIT(tstate, tmp_expression_value_23, await_normal);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_22;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_12 = yield_return_value;
assert(coroutine_heap->var_connect_response == NULL);
coroutine_heap->var_connect_response = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_25;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(coroutine_heap->var_connect_response);
tmp_expression_value_25 = coroutine_heap->var_connect_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_200;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(coroutine_heap->var_connect_response);
tmp_expression_value_26 = coroutine_heap->var_connect_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_299;
tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(coroutine_heap->var_connect_response);
tmp_expression_value_28 = coroutine_heap->var_connect_response;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_extensions);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 293;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_reason_phrase_bytes_empty_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_reason_bytes == NULL);
coroutine_heap->var_reason_bytes = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(coroutine_heap->var_reason_bytes);
tmp_expression_value_29 = coroutine_heap->var_reason_bytes;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_decode);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 294;
tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple, 0), mod_consts.const_tuple_str_plain_errors_tuple);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_reason_str == NULL);
coroutine_heap->var_reason_str = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_30;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_82c9b2f63b822116cbc2cddca15cacf1;
CHECK_OBJECT(coroutine_heap->var_connect_response);
tmp_expression_value_30 = coroutine_heap->var_connect_response;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_status);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(coroutine_heap->var_reason_str);
tmp_tuple_element_3 = coroutine_heap->var_reason_str;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
tmp_assign_source_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_msg == NULL);
coroutine_heap->var_msg = tmp_assign_source_15;
}
{
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_33;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 296;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_33 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain__connection);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 296;
tmp_expression_value_32 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_31 = ASYNC_AWAIT(tstate, tmp_expression_value_32, await_normal);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_33, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_31;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_33, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
tmp_called_value_9 = module_var_accessor_httpcore$_async$http_proxy$ProxyError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_msg);
tmp_args_element_value_4 = coroutine_heap->var_msg;
coroutine->m_frame->m_frame.f_lineno = 297;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 297;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
goto try_except_handler_4;
}
branch_no_2:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(coroutine_heap->var_connect_response);
tmp_expression_value_35 = coroutine_heap->var_connect_response;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_extensions);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_network_stream;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_stream == NULL);
coroutine_heap->var_stream = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_36;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_37;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_36 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain__ssl_context);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_10 = module_var_accessor_httpcore$_async$http_proxy$default_ssl_context(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_default_ssl_context);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 303;
tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 305;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_37 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain__ssl_context);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 305;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_1:;
assert(coroutine_heap->var_ssl_context == NULL);
coroutine_heap->var_ssl_context = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_38;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 307;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_38 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain__http2);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 307;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 307;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_18 = MAKE_LIST2(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac,mod_consts.const_str_plain_h2);
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_18 = MAKE_LIST1(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
condexpr_end_2:;
assert(coroutine_heap->var_alpn_protocols == NULL);
coroutine_heap->var_alpn_protocols = tmp_assign_source_18;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(coroutine_heap->var_ssl_context);
tmp_called_instance_3 = coroutine_heap->var_ssl_context;
CHECK_OBJECT(coroutine_heap->var_alpn_protocols);
tmp_args_element_value_5 = coroutine_heap->var_alpn_protocols;
coroutine->m_frame->m_frame.f_lineno = 308;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_set_alpn_protocols, tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 308;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_ssl_context;
CHECK_OBJECT(coroutine_heap->var_ssl_context);
tmp_dict_value_1 = coroutine_heap->var_ssl_context;
tmp_assign_source_19 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_server_hostname;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto dict_build_exception_1;
}

tmp_expression_value_41 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain__remote_origin);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto dict_build_exception_1;
}
coroutine->m_frame->m_frame.f_lineno = 312;
tmp_dict_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(coroutine_heap->var_timeout);
tmp_dict_value_1 = coroutine_heap->var_timeout;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_19);
goto try_except_handler_4;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(coroutine_heap->var_kwargs == NULL);
coroutine_heap->var_kwargs = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_12 = module_var_accessor_httpcore$_async$http_proxy$Trace(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Trace);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_6 = mod_consts.const_str_plain_start_tls;
tmp_args_element_value_7 = module_var_accessor_httpcore$_async$http_proxy$logger(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_args_element_value_9 = coroutine_heap->var_kwargs;
coroutine->m_frame->m_frame.f_lineno = 315;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_12, call_args);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_42;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_42 = coroutine_heap->tmp_with_1__source;
tmp_called_value_13 = LOOKUP_SPECIAL(tstate, tmp_expression_value_42, const_str_plain___aenter__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 315;
tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_43;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_43 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_22 = LOOKUP_SPECIAL(tstate, tmp_expression_value_43, const_str_plain___aexit__);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
coroutine->m_frame->m_frame.f_lineno = 315;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_45 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_44 = ASYNC_AWAIT(tstate, tmp_expression_value_45, await_enter);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_45, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_44;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_45, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_23 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_23;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_24;
tmp_assign_source_24 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_25 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_trace == NULL);
Py_INCREF(tmp_assign_source_25);
coroutine_heap->var_trace = tmp_assign_source_25;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_48;
PyObject *tmp_direct_call_arg2_1;
coroutine->m_frame->m_frame.f_lineno = 316;
CHECK_OBJECT(coroutine_heap->var_stream);
tmp_expression_value_48 = coroutine_heap->var_stream;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_start_tls);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 316;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_direct_call_arg2_1 = coroutine_heap->var_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_expression_value_47 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 316;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_expression_value_46 = ASYNC_AWAIT(tstate, tmp_expression_value_47, await_normal);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 316;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_47, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_48, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_46;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_47, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_48, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 316;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_26 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_stream;
    assert(old != NULL);
    coroutine_heap->var_stream = tmp_assign_source_26;
    Py_DECREF(old);
}

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


coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
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
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_5 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_27;
tmp_assign_source_27 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_27;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
coroutine->m_frame->m_frame.f_lineno = 315;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_14 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_10 = EXC_TYPE(tstate);
tmp_args_element_value_11 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_11); 
tmp_args_element_value_12 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_12 == NULL) {
    tmp_args_element_value_12 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 315;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_expression_value_50 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_49 = ASYNC_AWAIT(tstate, tmp_expression_value_50, await_exit);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_6, sizeof(bool), &tmp_expression_value_50, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 6;
coroutine->m_yield_from = tmp_expression_value_49;
coroutine->m_awaiting = true;
return NULL;

yield_return_6:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_6, sizeof(bool), &tmp_expression_value_50, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_operand_value_2 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 315;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
goto try_except_handler_8;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 315;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
goto try_except_handler_8;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_6;
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
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_called_value_15;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 315;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_15 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 315;
tmp_expression_value_52 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_51 = ASYNC_AWAIT(tstate, tmp_expression_value_52, await_exit);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_52, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 7;
coroutine->m_yield_from = tmp_expression_value_51;
coroutine->m_awaiting = true;
return NULL;

yield_return_7:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_52, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_5:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_called_value_16;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 315;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_16 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 315;
tmp_expression_value_54 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_53 = ASYNC_AWAIT(tstate, tmp_expression_value_54, await_exit);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_54, sizeof(PyObject *), &tmp_called_value_16, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 8;
coroutine->m_yield_from = tmp_expression_value_53;
coroutine->m_awaiting = true;
return NULL;

yield_return_8:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_54, sizeof(PyObject *), &tmp_called_value_16, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
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
PyObject *tmp_assign_source_28;
PyObject *tmp_called_instance_4;
if (coroutine_heap->var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 320;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_4 = coroutine_heap->var_stream;
coroutine->m_frame->m_frame.f_lineno = 320;
tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_get_extra_info,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ssl_object_tuple, 0)
);

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 320;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_ssl_object == NULL);
coroutine_heap->var_ssl_object = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(coroutine_heap->var_ssl_object);
tmp_cmp_expr_left_7 = coroutine_heap->var_ssl_object;
tmp_cmp_expr_right_7 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(coroutine_heap->var_ssl_object);
tmp_called_instance_5 = coroutine_heap->var_ssl_object;
coroutine->m_frame->m_frame.f_lineno = 323;
tmp_cmp_expr_left_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_selected_alpn_protocol);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 323;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_h2;
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 323;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_29 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_assign_source_29 = tmp_and_left_value_1;
and_end_1:;
assert(coroutine_heap->var_http2_negotiated == NULL);
coroutine_heap->var_http2_negotiated = tmp_assign_source_29;
}
{
nuitka_bool tmp_condition_result_9;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_truth_name_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_55;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(coroutine_heap->var_http2_negotiated);
tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_http2_negotiated);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
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

coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_55 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain__http2);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
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

coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_56 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain__http1);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_2 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_right_value_2 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_9 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_9 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_http2;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncHTTP2Connection_tuple;
tmp_level_value_1 = const_int_pos_1;
coroutine->m_frame->m_frame.f_lineno = 328;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 328;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_AsyncHTTP2Connection,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncHTTP2Connection);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 328;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_AsyncHTTP2Connection == NULL);
coroutine_heap->var_AsyncHTTP2Connection = tmp_assign_source_30;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_17;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_57;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_expression_value_58;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(coroutine_heap->var_AsyncHTTP2Connection);
tmp_called_value_17 = coroutine_heap->var_AsyncHTTP2Connection;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 331;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_57 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain__remote_origin);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 331;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (coroutine_heap->var_stream == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 332;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_value_1_3 = coroutine_heap->var_stream;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 333;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_58 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_3);

coroutine_heap->exception_lineno = 333;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 330;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

    tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_17, kw_values, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__connection, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_18;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_expression_value_59;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_kw_call_value_2_4;
PyObject *tmp_expression_value_60;
PyObject *tmp_assattr_target_3;
tmp_called_value_18 = module_var_accessor_httpcore$_async$http_proxy$AsyncHTTP11Connection(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncHTTP11Connection);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 336;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_59 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain__remote_origin);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (coroutine_heap->var_stream == NULL) {
Py_DECREF(tmp_kw_call_value_0_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 338;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_value_1_4 = coroutine_heap->var_stream;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_60 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_2_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_2_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_4);

coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 336;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4};

    tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_18, kw_values, mod_consts.const_tuple_str_plain_origin_str_plain_stream_str_plain_keepalive_expiry_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
CHECK_OBJECT(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_2_4);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 336;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 336;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__connection, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 336;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
}
branch_end_7:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_True;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__connected, tmp_assattr_value_4);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_4;
}
}
branch_no_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
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
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_10 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_31;
tmp_assign_source_31 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_31;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_61;
PyObject *tmp_expression_value_62;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
coroutine->m_frame->m_frame.f_lineno = 269;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_19 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_13 = EXC_TYPE(tstate);
tmp_args_element_value_14 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_14); 
tmp_args_element_value_15 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_15 == NULL) {
    tmp_args_element_value_15 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 269;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_expression_value_62 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_61 = ASYNC_AWAIT(tstate, tmp_expression_value_62, await_exit);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_expression_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_9;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_11, sizeof(bool), &tmp_expression_value_62, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 9;
coroutine->m_yield_from = tmp_expression_value_61;
coroutine->m_awaiting = true;
return NULL;

yield_return_9:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_11, sizeof(bool), &tmp_expression_value_62, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_operand_value_4 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_11 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 269;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
goto try_except_handler_9;
branch_no_9:;
goto branch_end_8;
branch_no_8:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 269;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
goto try_except_handler_9;
branch_end_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_3;
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
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_expression_value_63;
PyObject *tmp_expression_value_64;
PyObject *tmp_called_value_20;
PyObject *tmp_await_result_4;
coroutine->m_frame->m_frame.f_lineno = 269;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_20 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 269;
tmp_expression_value_64 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_20, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_63 = ASYNC_AWAIT(tstate, tmp_expression_value_64, await_exit);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
if (tmp_expression_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_64, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 10;
coroutine->m_yield_from = tmp_expression_value_63;
coroutine->m_awaiting = true;
return NULL;

yield_return_10:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_64, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
branch_no_10:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_13;
nuitka_bool tmp_cmp_expr_left_11;
nuitka_bool tmp_cmp_expr_right_11;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_11 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
tmp_condition_result_13 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_expression_value_65;
PyObject *tmp_expression_value_66;
PyObject *tmp_called_value_21;
PyObject *tmp_await_result_5;
coroutine->m_frame->m_frame.f_lineno = 269;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_21 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 269;
tmp_expression_value_66 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_21, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_65 = ASYNC_AWAIT(tstate, tmp_expression_value_66, await_exit);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_expression_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_66, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 11;
coroutine->m_yield_from = tmp_expression_value_65;
coroutine->m_awaiting = true;
return NULL;

yield_return_11:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_66, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_await_result_5 = yield_return_value;
CHECK_OBJECT(tmp_await_result_5);
Py_DECREF(tmp_await_result_5);
}
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
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
PyObject *tmp_expression_value_67;
PyObject *tmp_expression_value_68;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_69;
PyObject *tmp_expression_value_70;
PyObject *tmp_args_element_value_16;
coroutine->m_frame->m_frame.f_lineno = 343;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_70 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain__connection);
if (tmp_expression_value_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_handle_async_request);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_22);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_16 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 343;
tmp_expression_value_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_expression_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_67 = ASYNC_AWAIT(tstate, tmp_expression_value_68, await_normal);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_expression_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_68, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), &tmp_expression_value_69, sizeof(PyObject *), &tmp_expression_value_70, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 12;
coroutine->m_yield_from = tmp_expression_value_67;
coroutine->m_awaiting = true;
return NULL;

yield_return_12:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_68, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), &tmp_expression_value_69, sizeof(PyObject *), &tmp_expression_value_70, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccoooooooooooooooooo";
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
    coroutine_heap->var_timeout,
    coroutine_heap->var_target,
    coroutine_heap->var_connect_url,
    coroutine_heap->var_connect_headers,
    coroutine_heap->var_connect_request,
    coroutine_heap->var_connect_response,
    coroutine_heap->var_reason_bytes,
    coroutine_heap->var_reason_str,
    coroutine_heap->var_msg,
    coroutine_heap->var_stream,
    coroutine_heap->var_ssl_context,
    coroutine_heap->var_alpn_protocols,
    coroutine_heap->var_kwargs,
    coroutine_heap->var_trace,
    coroutine_heap->var_ssl_object,
    coroutine_heap->var_http2_negotiated,
    coroutine_heap->var_AsyncHTTP2Connection
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
CHECK_OBJECT(coroutine_heap->var_timeout);
CHECK_OBJECT(coroutine_heap->var_timeout);
Py_DECREF(coroutine_heap->var_timeout);
coroutine_heap->var_timeout = NULL;
Py_XDECREF(coroutine_heap->var_target);
coroutine_heap->var_target = NULL;
Py_XDECREF(coroutine_heap->var_connect_url);
coroutine_heap->var_connect_url = NULL;
Py_XDECREF(coroutine_heap->var_connect_headers);
coroutine_heap->var_connect_headers = NULL;
Py_XDECREF(coroutine_heap->var_connect_request);
coroutine_heap->var_connect_request = NULL;
Py_XDECREF(coroutine_heap->var_connect_response);
coroutine_heap->var_connect_response = NULL;
Py_XDECREF(coroutine_heap->var_reason_bytes);
coroutine_heap->var_reason_bytes = NULL;
Py_XDECREF(coroutine_heap->var_reason_str);
coroutine_heap->var_reason_str = NULL;
Py_XDECREF(coroutine_heap->var_msg);
coroutine_heap->var_msg = NULL;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
Py_XDECREF(coroutine_heap->var_ssl_context);
coroutine_heap->var_ssl_context = NULL;
Py_XDECREF(coroutine_heap->var_alpn_protocols);
coroutine_heap->var_alpn_protocols = NULL;
Py_XDECREF(coroutine_heap->var_kwargs);
coroutine_heap->var_kwargs = NULL;
Py_XDECREF(coroutine_heap->var_trace);
coroutine_heap->var_trace = NULL;
Py_XDECREF(coroutine_heap->var_ssl_object);
coroutine_heap->var_ssl_object = NULL;
Py_XDECREF(coroutine_heap->var_http2_negotiated);
coroutine_heap->var_http2_negotiated = NULL;
Py_XDECREF(coroutine_heap->var_AsyncHTTP2Connection);
coroutine_heap->var_AsyncHTTP2Connection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_timeouts);
coroutine_heap->var_timeouts = NULL;
Py_XDECREF(coroutine_heap->var_timeout);
coroutine_heap->var_timeout = NULL;
Py_XDECREF(coroutine_heap->var_target);
coroutine_heap->var_target = NULL;
Py_XDECREF(coroutine_heap->var_connect_url);
coroutine_heap->var_connect_url = NULL;
Py_XDECREF(coroutine_heap->var_connect_headers);
coroutine_heap->var_connect_headers = NULL;
Py_XDECREF(coroutine_heap->var_connect_request);
coroutine_heap->var_connect_request = NULL;
Py_XDECREF(coroutine_heap->var_connect_response);
coroutine_heap->var_connect_response = NULL;
Py_XDECREF(coroutine_heap->var_reason_bytes);
coroutine_heap->var_reason_bytes = NULL;
Py_XDECREF(coroutine_heap->var_reason_str);
coroutine_heap->var_reason_str = NULL;
Py_XDECREF(coroutine_heap->var_msg);
coroutine_heap->var_msg = NULL;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
Py_XDECREF(coroutine_heap->var_ssl_context);
coroutine_heap->var_ssl_context = NULL;
Py_XDECREF(coroutine_heap->var_alpn_protocols);
coroutine_heap->var_alpn_protocols = NULL;
Py_XDECREF(coroutine_heap->var_kwargs);
coroutine_heap->var_kwargs = NULL;
Py_XDECREF(coroutine_heap->var_trace);
coroutine_heap->var_trace = NULL;
Py_XDECREF(coroutine_heap->var_ssl_object);
coroutine_heap->var_ssl_object = NULL;
Py_XDECREF(coroutine_heap->var_http2_negotiated);
coroutine_heap->var_http2_negotiated = NULL;
Py_XDECREF(coroutine_heap->var_AsyncHTTP2Connection);
coroutine_heap->var_AsyncHTTP2Connection = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_9;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

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

static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request_context,
        module_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_handle_async_request,
        mod_consts.const_str_digest_bc3290cca1c383a75e405448928b8e23,
        code_objects_602d8a2a08602ff208ff5fcad2d98323,
        closure,
        2,
#if 1
        sizeof(struct httpcore$_async$http_proxy$$$function__15_handle_async_request$$$coroutine__1_handle_async_request_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__16_can_handle_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_origin = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request = MAKE_FUNCTION_FRAME(tstate, code_objects_7e23d17a3e1ffced36109ffe538ec942, module_httpcore$_async$http_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request = cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request) == 2);

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


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request,
    type_description_1,
    par_self,
    par_origin
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request == cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__16_can_handle_request);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__17_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8e00f65cb10ed41d0d01a7f2ee46d108, module_httpcore$_async$http_proxy, sizeof(void *));
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
coroutine->m_frame->m_frame.f_lineno = 349;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 349;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
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


coroutine_heap->exception_lineno = 349;
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

static PyObject *MAKE_COROUTINE_httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose_context,
        module_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_eddfba0faa48adf86c81b8e234243d7f,
        code_objects_8e00f65cb10ed41d0d01a7f2ee46d108,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_async$http_proxy$$$function__17_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_async$http_proxy$$$function__18_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__18_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info = MAKE_FUNCTION_FRAME(tstate, code_objects_e1ea3dcab134476b4b8554c1876d84e8, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__18_info = cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__18_info);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__18_info) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__18_info->m_frame.f_lineno = 352;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_info);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__18_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__18_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__18_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__18_info,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__18_info == cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__18_info = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__18_info);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__19_is_available(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__19_is_available;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available = MAKE_FUNCTION_FRAME(tstate, code_objects_d5cd2c27ce25d6e57acf27344cb78e39, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__19_is_available = cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__19_is_available);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__19_is_available) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__19_is_available->m_frame.f_lineno = 355;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_available);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__19_is_available, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__19_is_available->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__19_is_available, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__19_is_available,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__19_is_available == cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__19_is_available = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__19_is_available);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__20_has_expired(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired = MAKE_FUNCTION_FRAME(tstate, code_objects_37af1a4ec2e47243ced811517e06acb0, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired = cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired->m_frame.f_lineno = 358;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_has_expired);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired == cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__20_has_expired);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__21_is_idle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle = MAKE_FUNCTION_FRAME(tstate, code_objects_8b218a953c1e33b0d0d7a250f0498085, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle = cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle->m_frame.f_lineno = 361;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_idle);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle == cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__21_is_idle);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__22_is_closed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed = MAKE_FUNCTION_FRAME(tstate, code_objects_6e62c3e20c3d3c0de79352744c555fd4, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed = cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed->m_frame.f_lineno = 364;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_closed);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed == cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__22_is_closed);

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


static PyObject *impl_httpcore$_async$http_proxy$$$function__23___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$function__23___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bf60b1b4276b11899c6bc8831e490f1a, module_httpcore$_async$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__->m_type_description == NULL);
frame_frame_httpcore$_async$http_proxy$$$function__23___repr__ = cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$function__23___repr__);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$function__23___repr__) == 2);

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


exception_lineno = 367;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
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


exception_lineno = 367;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_httpcore$_async$http_proxy$$$function__23___repr__->m_frame.f_lineno = 367;
tmp_format_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_info);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
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


exception_lineno = 367;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$function__23___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$function__23___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$function__23___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$function__23___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_async$http_proxy$$$function__23___repr__ == cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__);
    cache_frame_frame_httpcore$_async$http_proxy$$$function__23___repr__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$function__23___repr__);

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



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__10_has_expired(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__10_has_expired,
        mod_consts.const_str_plain_has_expired,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_845e6295ba66cb9d6b8b5c6c6750c4f9,
#endif
        code_objects_c4bd8afe43448255005a7aa92e353e3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__11_is_idle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__11_is_idle,
        mod_consts.const_str_plain_is_idle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_37b23c076514e69e517403de054ba4b1,
#endif
        code_objects_76cd571ff79cdd229c5bee5083434721,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__12_is_closed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__12_is_closed,
        mod_consts.const_str_plain_is_closed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_daf07099d5d1e8f32959d6d22ecc57a5,
#endif
        code_objects_39ebfae6def6eb5ea558dd3899fbdf52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__13___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f88e7920fba14ea014ae95df464da6f1,
#endif
        code_objects_d7a0970a6192c9b4db018cd0a7292f2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__14___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be42e80321a14f1f4ce140f9640bdb02,
#endif
        code_objects_82f97707aabd20a64d8c515967bc753c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__15_handle_async_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__15_handle_async_request,
        mod_consts.const_str_plain_handle_async_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bc3290cca1c383a75e405448928b8e23,
#endif
        code_objects_602d8a2a08602ff208ff5fcad2d98323,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__16_can_handle_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__16_can_handle_request,
        mod_consts.const_str_plain_can_handle_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a3647100734ac17e61265eec23da99c7,
#endif
        code_objects_7e23d17a3e1ffced36109ffe538ec942,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__17_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__17_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eddfba0faa48adf86c81b8e234243d7f,
#endif
        code_objects_8e00f65cb10ed41d0d01a7f2ee46d108,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__18_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__18_info,
        mod_consts.const_str_plain_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_797a0d2c38c50f8728b774c2316c1db4,
#endif
        code_objects_e1ea3dcab134476b4b8554c1876d84e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__19_is_available(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__19_is_available,
        mod_consts.const_str_plain_is_available,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d8b6315ed08f65461fe9c2599c40f56a,
#endif
        code_objects_d5cd2c27ce25d6e57acf27344cb78e39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__1_merge_headers(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__1_merge_headers,
        mod_consts.const_str_plain_merge_headers,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_de658efc8f525e59780da1fef03255aa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        mod_consts.const_str_digest_d66add9f6368e1c4e7f388fd3a18ef8f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__20_has_expired(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__20_has_expired,
        mod_consts.const_str_plain_has_expired,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_41698e529b257d5b2a035bfff26991f2,
#endif
        code_objects_37af1a4ec2e47243ced811517e06acb0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__21_is_idle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__21_is_idle,
        mod_consts.const_str_plain_is_idle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_067d45a86382fac0f8ecbdfb8eabe47e,
#endif
        code_objects_8b218a953c1e33b0d0d7a250f0498085,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__22_is_closed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__22_is_closed,
        mod_consts.const_str_plain_is_closed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_526f4f8c3951d24d6047b2818c3b4fe2,
#endif
        code_objects_6e62c3e20c3d3c0de79352744c555fd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__23___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__23___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_517206610d160473acbd0bae4166a123,
#endif
        code_objects_bf60b1b4276b11899c6bc8831e490f1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d0b07f392d2ea8269866ad34d2c18165,
#endif
        code_objects_f09e4a10b32a9899e3577dc9a4d153d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        mod_consts.const_str_digest_f13d05edfb6035c87dda6b99282a2de2,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__3_create_connection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__3_create_connection,
        mod_consts.const_str_plain_create_connection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0873b07b9ddd1f6df2beed2862271686,
#endif
        code_objects_5bcdcda0378f04211da1a3c5cc1e0034,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d3dc3bb2b2ae8c439c78678724f9eb2a,
#endif
        code_objects_7d4202434305c38e8f7da80513415653,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__5_handle_async_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__5_handle_async_request,
        mod_consts.const_str_plain_handle_async_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_889329c0b7145e587849876d3858b17e,
#endif
        code_objects_7861a7073ac78d3723ed15c6f41ff179,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__6_can_handle_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__6_can_handle_request,
        mod_consts.const_str_plain_can_handle_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b9903944f04959cd3d3322e59c42a1ff,
#endif
        code_objects_1f5cad6b7414668260268e00eb4067d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__7_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__7_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64a3d3dfeb0866eed2e63e97e931d06c,
#endif
        code_objects_a22757b184319f2264edeb0b3db5a8c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__8_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__8_info,
        mod_consts.const_str_plain_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3b9501b953f1b20dd054aee8bbbe2a27,
#endif
        code_objects_825d9ef13157cab6eb00dd1f50a7cdd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__9_is_available(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_async$http_proxy$$$function__9_is_available,
        mod_consts.const_str_plain_is_available,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cc75f5c2b06ce1bcbf6aa39ef4fda841,
#endif
        code_objects_8b411ca926d4698e1136d9da48b3b642,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_async$http_proxy,
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

static function_impl_code const function_table_httpcore$_async$http_proxy[] = {
impl_httpcore$_async$http_proxy$$$function__1_merge_headers,
impl_httpcore$_async$http_proxy$$$function__2___init__,
impl_httpcore$_async$http_proxy$$$function__3_create_connection,
impl_httpcore$_async$http_proxy$$$function__4___init__,
impl_httpcore$_async$http_proxy$$$function__5_handle_async_request,
impl_httpcore$_async$http_proxy$$$function__6_can_handle_request,
impl_httpcore$_async$http_proxy$$$function__7_aclose,
impl_httpcore$_async$http_proxy$$$function__8_info,
impl_httpcore$_async$http_proxy$$$function__9_is_available,
impl_httpcore$_async$http_proxy$$$function__10_has_expired,
impl_httpcore$_async$http_proxy$$$function__11_is_idle,
impl_httpcore$_async$http_proxy$$$function__12_is_closed,
impl_httpcore$_async$http_proxy$$$function__13___repr__,
impl_httpcore$_async$http_proxy$$$function__14___init__,
impl_httpcore$_async$http_proxy$$$function__15_handle_async_request,
impl_httpcore$_async$http_proxy$$$function__16_can_handle_request,
impl_httpcore$_async$http_proxy$$$function__17_aclose,
impl_httpcore$_async$http_proxy$$$function__18_info,
impl_httpcore$_async$http_proxy$$$function__19_is_available,
impl_httpcore$_async$http_proxy$$$function__20_has_expired,
impl_httpcore$_async$http_proxy$$$function__21_is_idle,
impl_httpcore$_async$http_proxy$$$function__22_is_closed,
impl_httpcore$_async$http_proxy$$$function__23___repr__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpcore$_async$http_proxy);
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
        module_httpcore$_async$http_proxy,
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
        function_table_httpcore$_async$http_proxy,
        sizeof(function_table_httpcore$_async$http_proxy) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpcore._async.http_proxy";
#endif

// Internal entry point for module code.
PyObject *module_code_httpcore$_async$http_proxy(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore$_async$http_proxy");

    // Store the module for future use.
    module_httpcore$_async$http_proxy = module;

    moduledict_httpcore$_async$http_proxy = MODULE_DICT(module_httpcore$_async$http_proxy);

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
        PRINT_STRING("httpcore$_async$http_proxy: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore$_async$http_proxy: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpcore$_async$http_proxy: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore._async.http_proxy" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpcore$_async$http_proxy\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_async$http_proxy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_async$http_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_async$http_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_async$http_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_async$http_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_async$http_proxy);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpcore$_async$http_proxy);
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

        UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169 = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233 = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpcore$_async$http_proxy = MAKE_MODULE_FRAME(code_objects_1eac9f03784963f6bc86dbe371ff419b, module_httpcore$_async$http_proxy);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpcore$_async$http_proxy$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpcore$_async$http_proxy$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_AsyncNetworkBackend_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_SOCKET_OPTION,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_SOCKET_OPTION);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKET_OPTION, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_AsyncNetworkBackend,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsyncNetworkBackend);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncNetworkBackend, tmp_assign_source_11);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_5 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ProxyError_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 9;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_ProxyError,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ProxyError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_6 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_3a5f9ce5ee81e098df29d4f552cfbab3_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 10;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_URL,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_URL);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_URL, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_Origin,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Origin);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Origin, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_enforce_bytes,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_enforce_bytes);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_bytes, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_enforce_headers,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_enforce_headers);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_headers, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_enforce_url,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_enforce_url);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_enforce_url, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__ssl;
tmp_globals_arg_value_7 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_default_ssl_context_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 19;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_default_ssl_context,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_default_ssl_context);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__synchronization;
tmp_globals_arg_value_8 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_AsyncLock_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 20;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_AsyncLock,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_AsyncLock);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLock, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__trace;
tmp_globals_arg_value_9 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_Trace_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 21;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_Trace,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Trace);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_Trace, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_connection;
tmp_globals_arg_value_10 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_AsyncHTTPConnection_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 22;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
        mod_consts.const_str_plain_AsyncHTTPConnection,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_AsyncHTTPConnection);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPConnection, tmp_assign_source_24);
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
tmp_globals_arg_value_11 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_AsyncConnectionPool_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 23;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
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


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool, tmp_assign_source_25);
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
tmp_globals_arg_value_12 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_AsyncHTTP11Connection_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 24;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
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


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection, tmp_assign_source_26);
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
tmp_globals_arg_value_13 = (PyObject *)moduledict_httpcore$_async$http_proxy;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_AsyncConnectionInterface_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 25;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_httpcore$_async$http_proxy,
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


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Union);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_bytes_type_str_tuple;
tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteOrStr, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_1;
tmp_expression_value_4 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Sequence);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_3);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_httpcore$_async$http_proxy$ByteOrStr(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_httpcore$_async$http_proxy$ByteOrStr(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_1);
tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_3);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_HeadersAsSequence, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_2;
tmp_expression_value_8 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Mapping);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_httpcore$_async$http_proxy$ByteOrStr(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteOrStr);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_7);

exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_httpcore$_async$http_proxy$ByteOrStr(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteOrStr);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_7);
Py_DECREF(tmp_subscript_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_HeadersAsMapping, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_httpcore$_async$http_proxy$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 32;
tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_90f7576fb1105f1939fcf6ba388e3b09_tuple, 0)
);

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_7ca73869f92dee0e275198c8d1296454);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_32 = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__1_merge_headers(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_headers, tmp_assign_source_32);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_httpcore$_async$http_proxy$AsyncConnectionPool(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncConnectionPool);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto try_except_handler_3;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_AsyncHTTPProxy;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 54;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
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
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_14, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 54;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 54;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_38;
}
branch_end_1:;
{
PyObject *tmp_assign_source_39;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_61ef6a847bebf0a2c3ef2a8590df82e5;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_b4f94e07c384f06e24adb007ddd01145;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncHTTPProxy;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_54;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2 = MAKE_CLASS_FRAME(tstate, code_objects_2afbfdfc8ecdc27803be45ef8194ff14, module_httpcore$_async$http_proxy, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_2 = mod_consts.const_tuple_5652f08dddaee60fc1627fb7141b07e6_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_2be15da52459e6c97fcc54e96daeb116);
Py_INCREF(tmp_defaults_2);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__2___init__(tstate, tmp_defaults_2, tmp_annotations_2, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b633884e38fcfd2baba56b8248acc916);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__3_create_connection(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, mod_consts.const_str_plain_create_connection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_d5a881bba91db057214a6ef3bee67857_tuple;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
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


exception_lineno = 54;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncHTTPProxy;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 54;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_40);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_39 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54);
locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54);
locals_httpcore$_async$http_proxy$$$class__1_AsyncHTTPProxy_54 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 54;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPProxy, tmp_assign_source_39);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_httpcore$_async$http_proxy$AsyncConnectionInterface(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncConnectionInterface);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;

    goto try_except_handler_6;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_15 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_6, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncForwardHTTPConnection;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 169;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
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
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_15, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_6;
}
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 169;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 169;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_46;
}
branch_end_4:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_61ef6a847bebf0a2c3ef2a8590df82e5;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncForwardHTTPConnection;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_169;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_8;
}
frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3 = MAKE_CLASS_FRAME(tstate, code_objects_b70764da130d9fd4869cb84522f9fdc5, module_httpcore$_async$http_proxy, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_4;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_none_none_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_bfff54bd6eb0339d3a88384778bcb64f);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__4___init__(tstate, tmp_defaults_3, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__5_handle_async_request(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_handle_async_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__6_can_handle_request(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_can_handle_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__7_aclose(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__8_info(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__9_is_available(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_is_available, tmp_dictset_value);
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
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__10_has_expired(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_has_expired, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__11_is_idle(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_is_idle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__12_is_closed(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain_is_closed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__13___repr__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_9f7a7d16355edcfade9e59b39ab383e4_tuple;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_8;
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


exception_lineno = 169;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_AsyncForwardHTTPConnection;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 169;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_47 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169);
locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169);
locals_httpcore$_async$http_proxy$$$class__2_AsyncForwardHTTPConnection_169 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 169;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncForwardHTTPConnection, tmp_assign_source_47);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_httpcore$_async$http_proxy$AsyncConnectionInterface(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncConnectionInterface);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;

    goto try_except_handler_9;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_21 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_7, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_AsyncTunnelHTTPConnection;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 233;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_16, tmp_default_value_3);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_9;
}
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 233;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 233;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_54;
}
branch_end_7:;
{
PyObject *tmp_assign_source_55;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_61ef6a847bebf0a2c3ef2a8590df82e5;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncTunnelHTTPConnection;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_233;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_11;
}
frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4 = MAKE_CLASS_FRAME(tstate, code_objects_2da89d14cc68dbb17c732bc61b54d9c5, module_httpcore$_async$http_proxy, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4);
assert(Py_REFCNT(frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4) == 2);

// Framed code:
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_14;
tmp_defaults_4 = mod_consts.const_tuple_none_none_none_none_true_false_none_none_tuple;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_94b014f79a6fc78201878dd2e303f60b);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__14___init__(tstate, tmp_defaults_4, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__15_handle_async_request(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_handle_async_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_7ea8b3f7b530a107e317e0ffe0ced1eb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__16_can_handle_request(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_can_handle_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__17_aclose(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__18_info(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__19_is_available(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_is_available, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__20_has_expired(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_has_expired, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__21_is_idle(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_is_idle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__22_is_closed(tstate, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain_is_closed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_async$http_proxy$$$function__23___repr__(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_9a663441a3f8a91df64bbf8e813d43cf_tuple;
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_11;
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


exception_lineno = 233;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_AsyncTunnelHTTPConnection;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpcore$_async$http_proxy->m_frame.f_lineno = 233;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_56;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_55 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233);
locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233);
locals_httpcore$_async$http_proxy$$$class__3_AsyncTunnelHTTPConnection_233 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 233;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTunnelHTTPConnection, tmp_assign_source_55);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_async$http_proxy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_async$http_proxy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_async$http_proxy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpcore$_async$http_proxy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore$_async$http_proxy", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore._async.http_proxy" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpcore$_async$http_proxy);
    return module_httpcore$_async$http_proxy;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_async$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_async$http_proxy", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

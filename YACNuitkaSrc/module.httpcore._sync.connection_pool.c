/* Generated code for Python module 'httpcore$_sync$connection_pool'
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



/* The "module_httpcore$_sync$connection_pool" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_sync$connection_pool;
PyDictObject *moduledict_httpcore$_sync$connection_pool;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_request;
PyObject *const_str_plain_connection;
PyObject *const_str_plain_Event;
PyObject *const_str_plain__connection_acquired;
PyObject *const_str_plain_set;
PyObject *const_str_plain_wait;
PyObject *const_tuple_str_plain_timeout_tuple;
PyObject *const_str_plain__ssl_context;
PyObject *const_str_plain__proxy;
PyObject *const_int_hex_7fffffffffffffff;
PyObject *const_str_plain__max_connections;
PyObject *const_str_plain__max_keepalive_connections;
PyObject *const_str_plain_min;
PyObject *const_str_plain__keepalive_expiry;
PyObject *const_str_plain__http1;
PyObject *const_str_plain__http2;
PyObject *const_str_plain__retries;
PyObject *const_str_plain__local_address;
PyObject *const_str_plain__uds;
PyObject *const_str_plain_SyncBackend;
PyObject *const_str_plain__network_backend;
PyObject *const_str_plain__socket_options;
PyObject *const_str_plain__connections;
PyObject *const_str_plain__requests;
PyObject *const_str_plain_ThreadLock;
PyObject *const_str_plain__optional_thread_lock;
PyObject *const_str_digest_4b02164a2d5fa2f2649ee4a2fb930401;
PyObject *const_str_plain_url;
PyObject *const_str_plain_scheme;
PyObject *const_tuple_3a3f4ffdf207c3923acc3c244a2a4da5_tuple;
PyObject *const_str_plain_socks_proxy;
PyObject *const_tuple_str_plain_Socks5Connection_tuple;
PyObject *const_str_plain_Socks5Connection;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_auth;
PyObject *const_tuple_140ea1baebad0b2b6df86ec2338c0973_tuple;
PyObject *const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a;
PyObject *const_str_plain_http_proxy;
PyObject *const_tuple_str_plain_ForwardHTTPConnection_tuple;
PyObject *const_str_plain_ForwardHTTPConnection;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_ssl_context;
PyObject *const_tuple_aeb851cc7f71d11a1d43fcb2189ad2db_tuple;
PyObject *const_tuple_str_plain_TunnelHTTPConnection_tuple;
PyObject *const_str_plain_TunnelHTTPConnection;
PyObject *const_tuple_f395240e500800fad95c7c206c6c6cef_tuple;
PyObject *const_str_plain_HTTPConnection;
PyObject *const_tuple_2b9e2b50f8dc1645af579b2386259a61_tuple;
PyObject *const_str_digest_526e0b3e41c1285c01411b6ef8ad0bf9;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_UnsupportedProtocol;
PyObject *const_tuple_str_digest_67d7bf9b5731e0c631a428c2a5fdc39c_tuple;
PyObject *const_tuple_str_plain_http_str_plain_https_str_plain_ws_str_plain_wss_tuple;
PyObject *const_str_digest_c9f1a613df6feee2c2b46010f85cdb7d;
PyObject *const_str_digest_ed37000d86d25897da6f4045a1a12c74;
PyObject *const_str_plain_extensions;
PyObject *const_str_plain_timeout;
PyObject *const_tuple_str_plain_pool_none_tuple;
PyObject *const_str_plain_PoolRequest;
PyObject *const_str_plain_append;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_self;
PyObject *const_str_plain__assign_requests_to_connections;
PyObject *const_str_plain__close_connections;
PyObject *const_str_plain_closing;
PyObject *const_str_plain_pool_request;
PyObject *const_str_plain_wait_for_connection;
PyObject *const_str_plain_handle_request;
PyObject *const_str_plain_ConnectionNotAvailable;
PyObject *const_str_plain_clear_connection;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_response;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_status;
PyObject *const_str_plain_PoolByteStream;
PyObject *const_tuple_str_plain_stream_str_plain_pool_request_str_plain_pool_tuple;
PyObject *const_tuple_7ca52466aebb30eb7c92bd4fdb83a775_tuple;
PyObject *const_str_digest_f89f0eedeb46c3a8f4ccce659a7550fc;
PyObject *const_str_plain_is_closed;
PyObject *const_str_plain_has_expired;
PyObject *const_str_plain_closing_connections;
PyObject *const_str_plain_is_idle;
PyObject *const_str_plain_is_queued;
PyObject *const_str_plain_can_handle_request;
PyObject *const_str_plain_is_available;
PyObject *const_str_plain_assign_to_connection;
PyObject *const_str_plain_create_connection;
PyObject *const_str_digest_10fef81664a4a700be3c80bc5243d509;
PyObject *const_str_plain_ShieldCancellation;
PyObject *const_str_plain_count;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_true_tuple;
PyObject *const_str_digest_854aee975ce3a4b5b994906745e8291e;
PyObject *const_str_plain_num_active_requests;
PyObject *const_str_digest_3b835a804432e56664663f908d1b1077;
PyObject *const_str_plain_num_queued_requests;
PyObject *const_str_digest_e71cbb803ae369ad7ffaf416a595f721;
PyObject *const_str_digest_6b3ff0c9b4f0c95229ee1a481d052422;
PyObject *const_str_plain_num_active_connections;
PyObject *const_str_plain_num_idle_connections;
PyObject *const_str_digest_060784e0e9774dfd9334df35a2f2f88a;
PyObject *const_str_chr_60;
PyObject *const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyObject *const_str_digest_3e12364e6eae797aad5331e1f9618e84;
PyObject *const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1;
PyObject *const_str_plain__stream;
PyObject *const_str_plain__pool_request;
PyObject *const_str_plain__pool;
PyObject *const_str_plain__closed;
PyObject *const_str_digest_016083c2df3f9daa3c30f1bcb16160fd;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_efa31d579adeff7e25b40d397a38eb0d;
PyObject *const_tuple_str_plain_SyncBackend_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
PyObject *const_tuple_str_plain_SOCKET_OPTION_str_plain_NetworkBackend_tuple;
PyObject *const_str_plain_SOCKET_OPTION;
PyObject *const_str_plain_NetworkBackend;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_d46bb39f0795caf97cadf6525350cf75_tuple;
PyObject *const_str_plain__models;
PyObject *const_tuple_8445987f7ba1146b2d2041a6751c7c0f_tuple;
PyObject *const_str_plain_Origin;
PyObject *const_str_plain_Proxy;
PyObject *const_str_plain_Request;
PyObject *const_str_plain__synchronization;
PyObject *const_tuple_08cd96082ec1e08d66521bc6801cdac0_tuple;
PyObject *const_tuple_str_plain_HTTPConnection_tuple;
PyObject *const_str_plain_interfaces;
PyObject *const_tuple_str_plain_ConnectionInterface_str_plain_RequestInterface_tuple;
PyObject *const_str_plain_ConnectionInterface;
PyObject *const_str_plain_RequestInterface;
PyObject *const_str_digest_266f9e94b2e71ec9e8691775f6cbd94b;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_17;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d;
PyObject *const_str_digest_4a2812192de07cbe788e37635a04c4db;
PyObject *const_dict_661fb0df8d3f46549821436fc3b3ae08;
PyObject *const_str_digest_de923dd07c183d26370d25a676ca2a6a;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_825f1ea6f939fee555b95ef60305b72c;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_e2837fa3bd6c7a82606a261477b2efa1;
PyObject *const_str_digest_5bb3ed44666e85f6b56aae19dfc66e1b;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_53d49334f3f638ce1078a5b37b5da100;
PyObject *const_tuple_f37e4a7f36d8d0f5cd7486dbf19328ba_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ConnectionPool;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_3178fe01996e8cfd7622dc76d29b4940;
PyObject *const_int_pos_43;
PyObject *const_tuple_4c6be1a517ac1c0e6ed34d8cac77263f_tuple;
PyObject *const_dict_297c340f5ccc52913b5f08c51dabff18;
PyObject *const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99;
PyObject *const_dict_ac4616f3ad437ceccda40df832f1439d;
PyObject *const_str_digest_c2a4ed91e0c2b604fc001971d3c184fe;
PyObject *const_str_plain_property;
PyObject *const_dict_3e869b3a6975f5e69d1ef15de6842b76;
PyObject *const_str_plain_connections;
PyObject *const_str_digest_d45c7683c918cc06236d2978f0fc9f20;
PyObject *const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4;
PyObject *const_str_digest_1bf1d890576be4a1b4b180065fce161b;
PyObject *const_str_digest_73d4dff6473a60c8015722a4f229778a;
PyObject *const_dict_28cd2ae719e4ae225eac4c03d61a63bb;
PyObject *const_str_digest_fb9ecb3cd2bb41ec9ef8f96c920544e5;
PyObject *const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a;
PyObject *const_dict_232b9d39832ce7d5220eedb0808f1fb4;
PyObject *const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4;
PyObject *const_dict_e2c7ebbf2f85700328f12d18cbe86d13;
PyObject *const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_37daea3319a9612ca1abc83420934166;
PyObject *const_tuple_ab265f0b2d65659856e4fff924b79f26_tuple;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_389;
PyObject *const_dict_3b82a348bb826a452988c5d1e2d7a0c2;
PyObject *const_str_digest_ef6535a8eae43ac2c5dfecac8cc2ab41;
PyObject *const_dict_792443ad00eade00425fbf2e698fefb3;
PyObject *const_str_digest_daf7aa59261028d136e0dc5909d7a842;
PyObject *const_tuple_20a2f134670b4580065adf10b6a27da6_tuple;
PyObject *const_str_digest_d72748891d56102505f44d93856561d6;
PyObject *const_str_digest_c927adc8974bc13b4f22be289489ce00;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple;
PyObject *const_tuple_2fd84b1b09a14bba8e79da07c7a9cab4_tuple;
PyObject *const_tuple_fffe7d4b5a787e55fc509c9f91428c4b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
PyObject *const_tuple_str_plain_self_str_plain_part_str_plain_exc_tuple;
PyObject *const_tuple_c6a448cba3e64532d09ba0dc57cd7ded_tuple;
PyObject *const_tuple_d87b27152f9dc1dca9f3c72662467bed_tuple;
PyObject *const_tuple_str_plain_self_str_plain_closing_str_plain_connection_tuple;
PyObject *const_tuple_str_plain_self_str_plain_connection_tuple;
PyObject *const_tuple_str_plain_self_str_plain_closing_connections_tuple;
PyObject *const_tuple_str_plain_self_str_plain_closing_tuple;
PyObject *const_tuple_965505b9db29454daaf95703a7a0bebb_tuple;
PyObject *const_tuple_9c6a4cd57a1781e18068be1f6700f2d2_tuple;
PyObject *const_tuple_str_plain_self_str_plain_timeout_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[210];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpcore._sync.connection_pool"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__connection_acquired);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_context);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_hex_7fffffffffffffff);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_connections);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_keepalive_connections);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__keepalive_expiry);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__http1);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__http2);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__retries);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__local_address);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__uds);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncBackend);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__network_backend);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__socket_options);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__connections);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__requests);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadLock);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__optional_thread_lock);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b02164a2d5fa2f2649ee4a2fb930401);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_3a3f4ffdf207c3923acc3c244a2a4da5_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_socks_proxy);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Socks5Connection_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Socks5Connection);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_140ea1baebad0b2b6df86ec2338c0973_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_proxy);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ForwardHTTPConnection_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ForwardHTTPConnection);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_aeb851cc7f71d11a1d43fcb2189ad2db_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TunnelHTTPConnection_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_TunnelHTTPConnection);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_f395240e500800fad95c7c206c6c6cef_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnection);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_2b9e2b50f8dc1645af579b2386259a61_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_526e0b3e41c1285c01411b6ef8ad0bf9);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_67d7bf9b5731e0c631a428c2a5fdc39c_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_str_plain_ws_str_plain_wss_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9f1a613df6feee2c2b46010f85cdb7d);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed37000d86d25897da6f4045a1a12c74);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_extensions);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pool_none_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolRequest);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__assign_requests_to_connections);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__close_connections);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_closing);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_pool_request);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_connection);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_request);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionNotAvailable);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_connection);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolByteStream);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_str_plain_pool_request_str_plain_pool_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_7ca52466aebb30eb7c92bd4fdb83a775_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_f89f0eedeb46c3a8f4ccce659a7550fc);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_expired);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_closing_connections);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_idle);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_queued);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_handle_request);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_available);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_assign_to_connection);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_10fef81664a4a700be3c80bc5243d509);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShieldCancellation);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_count);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_854aee975ce3a4b5b994906745e8291e);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_active_requests);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b835a804432e56664663f908d1b1077);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_queued_requests);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_e71cbb803ae369ad7ffaf416a595f721);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b3ff0c9b4f0c95229ee1a481d052422);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_active_connections);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_idle_connections);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_060784e0e9774dfd9334df35a2f2f88a);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__stream);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__pool_request);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__pool);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__closed);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_016083c2df3f9daa3c30f1bcb16160fd);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncBackend_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_NetworkBackend_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkBackend);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_d46bb39f0795caf97cadf6525350cf75_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_8445987f7ba1146b2d2041a6751c7c0f_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_Origin);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Proxy);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__synchronization);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_08cd96082ec1e08d66521bc6801cdac0_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPConnection_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_interfaces);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectionInterface_str_plain_RequestInterface_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionInterface);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestInterface);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_266f9e94b2e71ec9e8691775f6cbd94b);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a2812192de07cbe788e37635a04c4db);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_661fb0df8d3f46549821436fc3b3ae08);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_de923dd07c183d26370d25a676ca2a6a);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_825f1ea6f939fee555b95ef60305b72c);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_e2837fa3bd6c7a82606a261477b2efa1);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bb3ed44666e85f6b56aae19dfc66e1b);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_53d49334f3f638ce1078a5b37b5da100);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_f37e4a7f36d8d0f5cd7486dbf19328ba_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionPool);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_3178fe01996e8cfd7622dc76d29b4940);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_43);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_4c6be1a517ac1c0e6ed34d8cac77263f_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_297c340f5ccc52913b5f08c51dabff18);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_ac4616f3ad437ceccda40df832f1439d);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2a4ed91e0c2b604fc001971d3c184fe);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_3e869b3a6975f5e69d1ef15de6842b76);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_connections);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_d45c7683c918cc06236d2978f0fc9f20);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bf1d890576be4a1b4b180065fce161b);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_73d4dff6473a60c8015722a4f229778a);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_28cd2ae719e4ae225eac4c03d61a63bb);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb9ecb3cd2bb41ec9ef8f96c920544e5);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_232b9d39832ce7d5220eedb0808f1fb4);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_e2c7ebbf2f85700328f12d18cbe86d13);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_37daea3319a9612ca1abc83420934166);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_ab265f0b2d65659856e4fff924b79f26_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_int_pos_389);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_3b82a348bb826a452988c5d1e2d7a0c2);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef6535a8eae43ac2c5dfecac8cc2ab41);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_daf7aa59261028d136e0dc5909d7a842);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_20a2f134670b4580065adf10b6a27da6_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_d72748891d56102505f44d93856561d6);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_c927adc8974bc13b4f22be289489ce00);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_2fd84b1b09a14bba8e79da07c7a9cab4_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_fffe7d4b5a787e55fc509c9f91428c4b_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_part_str_plain_exc_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_c6a448cba3e64532d09ba0dc57cd7ded_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_d87b27152f9dc1dca9f3c72662467bed_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_closing_str_plain_connection_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_connection_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_closing_connections_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_closing_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_965505b9db29454daaf95703a7a0bebb_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_9c6a4cd57a1781e18068be1f6700f2d2_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_timeout_tuple);
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
void checkModuleConstants_httpcore$_sync$connection_pool(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__connection_acquired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connection_acquired);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_timeout_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ssl_context);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_hex_7fffffffffffffff));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_7fffffffffffffff);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_connections);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_keepalive_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_keepalive_connections);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__keepalive_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__keepalive_expiry);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__http1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http1);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__http2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http2);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__retries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__retries);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__local_address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__local_address);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__uds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__uds);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncBackend);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__network_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__network_backend);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__socket_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__socket_options);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__connections);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__requests));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__requests);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadLock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadLock);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__optional_thread_lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__optional_thread_lock);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b02164a2d5fa2f2649ee4a2fb930401));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b02164a2d5fa2f2649ee4a2fb930401);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_3a3f4ffdf207c3923acc3c244a2a4da5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a3f4ffdf207c3923acc3c244a2a4da5_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_socks_proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socks_proxy);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Socks5Connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Socks5Connection_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Socks5Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Socks5Connection);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_140ea1baebad0b2b6df86ec2338c0973_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_140ea1baebad0b2b6df86ec2338c0973_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_proxy);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ForwardHTTPConnection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ForwardHTTPConnection_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ForwardHTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ForwardHTTPConnection);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl_context);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_aeb851cc7f71d11a1d43fcb2189ad2db_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aeb851cc7f71d11a1d43fcb2189ad2db_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TunnelHTTPConnection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TunnelHTTPConnection_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_TunnelHTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TunnelHTTPConnection);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_f395240e500800fad95c7c206c6c6cef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f395240e500800fad95c7c206c6c6cef_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPConnection);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_2b9e2b50f8dc1645af579b2386259a61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2b9e2b50f8dc1645af579b2386259a61_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_526e0b3e41c1285c01411b6ef8ad0bf9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_526e0b3e41c1285c01411b6ef8ad0bf9);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnsupportedProtocol);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_67d7bf9b5731e0c631a428c2a5fdc39c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_67d7bf9b5731e0c631a428c2a5fdc39c_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_str_plain_ws_str_plain_wss_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_http_str_plain_https_str_plain_ws_str_plain_wss_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9f1a613df6feee2c2b46010f85cdb7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9f1a613df6feee2c2b46010f85cdb7d);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed37000d86d25897da6f4045a1a12c74));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed37000d86d25897da6f4045a1a12c74);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extensions);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pool_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pool_none_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PoolRequest);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__assign_requests_to_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__assign_requests_to_connections);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__close_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__close_connections);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_closing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closing);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_pool_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pool_request);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_for_connection);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_request);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionNotAvailable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionNotAvailable);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_connection);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PoolByteStream);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_str_plain_pool_request_str_plain_pool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stream_str_plain_pool_request_str_plain_pool_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_7ca52466aebb30eb7c92bd4fdb83a775_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7ca52466aebb30eb7c92bd4fdb83a775_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_f89f0eedeb46c3a8f4ccce659a7550fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f89f0eedeb46c3a8f4ccce659a7550fc);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_closed);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_expired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_expired);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_closing_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closing_connections);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_idle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_idle);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_queued));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_queued);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_handle_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_handle_request);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_available));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_available);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_assign_to_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assign_to_connection);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_connection);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_10fef81664a4a700be3c80bc5243d509));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10fef81664a4a700be3c80bc5243d509);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShieldCancellation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShieldCancellation);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_count);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_854aee975ce3a4b5b994906745e8291e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_854aee975ce3a4b5b994906745e8291e);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_active_requests));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_num_active_requests);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b835a804432e56664663f908d1b1077));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b835a804432e56664663f908d1b1077);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_queued_requests));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_num_queued_requests);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_e71cbb803ae369ad7ffaf416a595f721));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e71cbb803ae369ad7ffaf416a595f721);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b3ff0c9b4f0c95229ee1a481d052422));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b3ff0c9b4f0c95229ee1a481d052422);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_active_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_num_active_connections);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_idle_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_num_idle_connections);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_060784e0e9774dfd9334df35a2f2f88a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_060784e0e9774dfd9334df35a2f2f88a);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stream);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__pool_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pool_request);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__pool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pool);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__closed);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_016083c2df3f9daa3c30f1bcb16160fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_016083c2df3f9daa3c30f1bcb16160fd);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncBackend_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_NetworkBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_NetworkBackend_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKET_OPTION);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NetworkBackend);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_d46bb39f0795caf97cadf6525350cf75_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d46bb39f0795caf97cadf6525350cf75_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_8445987f7ba1146b2d2041a6751c7c0f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8445987f7ba1146b2d2041a6751c7c0f_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_Origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Origin);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Proxy);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__synchronization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__synchronization);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_08cd96082ec1e08d66521bc6801cdac0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_08cd96082ec1e08d66521bc6801cdac0_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPConnection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HTTPConnection_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_interfaces));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_interfaces);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectionInterface_str_plain_RequestInterface_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConnectionInterface_str_plain_RequestInterface_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionInterface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionInterface);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestInterface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestInterface);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_266f9e94b2e71ec9e8691775f6cbd94b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_266f9e94b2e71ec9e8691775f6cbd94b);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_17));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_17);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a2812192de07cbe788e37635a04c4db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a2812192de07cbe788e37635a04c4db);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_661fb0df8d3f46549821436fc3b3ae08));
CHECK_OBJECT_DEEP(mod_consts.const_dict_661fb0df8d3f46549821436fc3b3ae08);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_de923dd07c183d26370d25a676ca2a6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de923dd07c183d26370d25a676ca2a6a);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_825f1ea6f939fee555b95ef60305b72c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_825f1ea6f939fee555b95ef60305b72c);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_e2837fa3bd6c7a82606a261477b2efa1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e2837fa3bd6c7a82606a261477b2efa1);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bb3ed44666e85f6b56aae19dfc66e1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5bb3ed44666e85f6b56aae19dfc66e1b);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_53d49334f3f638ce1078a5b37b5da100));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53d49334f3f638ce1078a5b37b5da100);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_f37e4a7f36d8d0f5cd7486dbf19328ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f37e4a7f36d8d0f5cd7486dbf19328ba_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionPool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionPool);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_3178fe01996e8cfd7622dc76d29b4940));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3178fe01996e8cfd7622dc76d29b4940);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_43));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_43);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_4c6be1a517ac1c0e6ed34d8cac77263f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4c6be1a517ac1c0e6ed34d8cac77263f_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_297c340f5ccc52913b5f08c51dabff18));
CHECK_OBJECT_DEEP(mod_consts.const_dict_297c340f5ccc52913b5f08c51dabff18);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_ac4616f3ad437ceccda40df832f1439d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ac4616f3ad437ceccda40df832f1439d);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2a4ed91e0c2b604fc001971d3c184fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2a4ed91e0c2b604fc001971d3c184fe);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_3e869b3a6975f5e69d1ef15de6842b76));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3e869b3a6975f5e69d1ef15de6842b76);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_connections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connections);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_d45c7683c918cc06236d2978f0fc9f20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d45c7683c918cc06236d2978f0fc9f20);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bf1d890576be4a1b4b180065fce161b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bf1d890576be4a1b4b180065fce161b);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_73d4dff6473a60c8015722a4f229778a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73d4dff6473a60c8015722a4f229778a);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_28cd2ae719e4ae225eac4c03d61a63bb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_28cd2ae719e4ae225eac4c03d61a63bb);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb9ecb3cd2bb41ec9ef8f96c920544e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb9ecb3cd2bb41ec9ef8f96c920544e5);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_232b9d39832ce7d5220eedb0808f1fb4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_232b9d39832ce7d5220eedb0808f1fb4);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_e2c7ebbf2f85700328f12d18cbe86d13));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e2c7ebbf2f85700328f12d18cbe86d13);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_37daea3319a9612ca1abc83420934166));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37daea3319a9612ca1abc83420934166);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_ab265f0b2d65659856e4fff924b79f26_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ab265f0b2d65659856e4fff924b79f26_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_int_pos_389));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_389);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_3b82a348bb826a452988c5d1e2d7a0c2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3b82a348bb826a452988c5d1e2d7a0c2);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef6535a8eae43ac2c5dfecac8cc2ab41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef6535a8eae43ac2c5dfecac8cc2ab41);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_daf7aa59261028d136e0dc5909d7a842));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_daf7aa59261028d136e0dc5909d7a842);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_20a2f134670b4580065adf10b6a27da6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_20a2f134670b4580065adf10b6a27da6_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_d72748891d56102505f44d93856561d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d72748891d56102505f44d93856561d6);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_c927adc8974bc13b4f22be289489ce00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c927adc8974bc13b4f22be289489ce00);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_2fd84b1b09a14bba8e79da07c7a9cab4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2fd84b1b09a14bba8e79da07c7a9cab4_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_fffe7d4b5a787e55fc509c9f91428c4b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fffe7d4b5a787e55fc509c9f91428c4b_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_part_str_plain_exc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_part_str_plain_exc_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_c6a448cba3e64532d09ba0dc57cd7ded_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c6a448cba3e64532d09ba0dc57cd7ded_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_d87b27152f9dc1dca9f3c72662467bed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d87b27152f9dc1dca9f3c72662467bed_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_closing_str_plain_connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_closing_str_plain_connection_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_connection_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_closing_connections_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_closing_connections_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_closing_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_closing_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_965505b9db29454daaf95703a7a0bebb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_965505b9db29454daaf95703a7a0bebb_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_9c6a4cd57a1781e18068be1f6700f2d2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9c6a4cd57a1781e18068be1f6700f2d2_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_timeout_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor_httpcore$_sync$connection_pool$ConnectionNotAvailable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$Event(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$HTTPConnection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPConnection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPConnection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPConnection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPConnection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnection);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$PoolByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$PoolRequest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolRequest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolRequest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolRequest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolRequest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolRequest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolRequest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolRequest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolRequest);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$RequestInterface(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestInterface);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestInterface);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestInterface, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestInterface);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestInterface, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestInterface);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestInterface);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestInterface);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$ShieldCancellation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ShieldCancellation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ShieldCancellation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ShieldCancellation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ShieldCancellation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ShieldCancellation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ShieldCancellation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ShieldCancellation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ShieldCancellation);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$SyncBackend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncBackend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncBackend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncBackend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncBackend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncBackend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncBackend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncBackend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncBackend);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$ThreadLock(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadLock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadLock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadLock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadLock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadLock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadLock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadLock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadLock);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$UnsupportedProtocol(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$_sync$connection_pool$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore$_sync$connection_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore$_sync$connection_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore$_sync$connection_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7c7ecb01645693a360d2a2178e362f2a;
static PyCodeObject *code_objects_de362e3d92735874eb2ccb41e881415f;
static PyCodeObject *code_objects_e095e311af924c813179bfe328297915;
static PyCodeObject *code_objects_0baadfa3fe8f3597c362539ca11ed7b4;
static PyCodeObject *code_objects_44f61a76e17841a1192d5b0887fbbef0;
static PyCodeObject *code_objects_eeb55d92810309685c6457d9ace5fe63;
static PyCodeObject *code_objects_92eea0dfaedaf7b6c151d8d5a1960366;
static PyCodeObject *code_objects_1576028a0742138b28646e97af12448e;
static PyCodeObject *code_objects_6135b41a7f5eaedd85e12dbafb02eded;
static PyCodeObject *code_objects_b8b4250d1fe7305006d1d31183f9fc98;
static PyCodeObject *code_objects_1c557a9282db86ad0ee73deb754ced9f;
static PyCodeObject *code_objects_64a8af2ab9f34a8091c21f678a1beff6;
static PyCodeObject *code_objects_5dc618dff00936ad4532a7306c9c85e2;
static PyCodeObject *code_objects_eb1f7c29ee8c78e747e29e061015e1b6;
static PyCodeObject *code_objects_a935f15e829be20cefe1528ad6b051ff;
static PyCodeObject *code_objects_6ee532bcc7b801d6eb938ee1f2e95997;
static PyCodeObject *code_objects_03a7c8294be9531acb9a51367b6e69c9;
static PyCodeObject *code_objects_85e2120ee21bb235506d4616dab34864;
static PyCodeObject *code_objects_b6f6993d062bc2a1c2288c0ed3ff7c15;
static PyCodeObject *code_objects_e390c726c6fca5fbdecdf36d35759096;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d72748891d56102505f44d93856561d6); CHECK_OBJECT(module_filename_obj);
code_objects_7c7ecb01645693a360d2a2178e362f2a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c927adc8974bc13b4f22be289489ce00, mod_consts.const_str_digest_c927adc8974bc13b4f22be289489ce00, NULL, NULL, 0, 0, 0);
code_objects_de362e3d92735874eb2ccb41e881415f = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConnectionPool, mod_consts.const_str_plain_ConnectionPool, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e095e311af924c813179bfe328297915 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0baadfa3fe8f3597c362539ca11ed7b4 = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, NULL, 4, 0, 0);
code_objects_44f61a76e17841a1192d5b0887fbbef0 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99, mod_consts.const_tuple_2fd84b1b09a14bba8e79da07c7a9cab4_tuple, NULL, 13, 0, 0);
code_objects_eeb55d92810309685c6457d9ace5fe63 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ef6535a8eae43ac2c5dfecac8cc2ab41, mod_consts.const_tuple_fffe7d4b5a787e55fc509c9f91428c4b_tuple, NULL, 4, 0, 0);
code_objects_92eea0dfaedaf7b6c151d8d5a1960366 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4a2812192de07cbe788e37635a04c4db, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_1576028a0742138b28646e97af12448e = MAKE_CODE_OBJECT(module_filename_obj, 401, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_016083c2df3f9daa3c30f1bcb16160fd, mod_consts.const_tuple_str_plain_self_str_plain_part_str_plain_exc_tuple, NULL, 1, 0, 0);
code_objects_6135b41a7f5eaedd85e12dbafb02eded = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_37daea3319a9612ca1abc83420934166, mod_consts.const_tuple_c6a448cba3e64532d09ba0dc57cd7ded_tuple, NULL, 1, 0, 0);
code_objects_b8b4250d1fe7305006d1d31183f9fc98 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__assign_requests_to_connections, mod_consts.const_str_digest_73d4dff6473a60c8015722a4f229778a, mod_consts.const_tuple_d87b27152f9dc1dca9f3c72662467bed_tuple, NULL, 1, 0, 0);
code_objects_1c557a9282db86ad0ee73deb754ced9f = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__close_connections, mod_consts.const_str_digest_fb9ecb3cd2bb41ec9ef8f96c920544e5, mod_consts.const_tuple_str_plain_self_str_plain_closing_str_plain_connection_tuple, NULL, 2, 0, 0);
code_objects_64a8af2ab9f34a8091c21f678a1beff6 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_assign_to_connection, mod_consts.const_str_digest_de923dd07c183d26370d25a676ca2a6a, mod_consts.const_tuple_str_plain_self_str_plain_connection_tuple, NULL, 2, 0, 0);
code_objects_5dc618dff00936ad4532a7306c9c85e2 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_clear_connection, mod_consts.const_str_digest_825f1ea6f939fee555b95ef60305b72c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eb1f7c29ee8c78e747e29e061015e1b6 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a, mod_consts.const_tuple_str_plain_self_str_plain_closing_connections_tuple, NULL, 1, 0, 0);
code_objects_a935f15e829be20cefe1528ad6b051ff = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_daf7aa59261028d136e0dc5909d7a842, mod_consts.const_tuple_str_plain_self_str_plain_closing_tuple, NULL, 1, 0, 0);
code_objects_6ee532bcc7b801d6eb938ee1f2e95997 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connections, mod_consts.const_str_digest_d45c7683c918cc06236d2978f0fc9f20, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_03a7c8294be9531acb9a51367b6e69c9 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_connection, mod_consts.const_str_digest_c2a4ed91e0c2b604fc001971d3c184fe, mod_consts.const_tuple_965505b9db29454daaf95703a7a0bebb_tuple, NULL, 2, 0, 0);
code_objects_85e2120ee21bb235506d4616dab34864 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_request, mod_consts.const_str_digest_1bf1d890576be4a1b4b180065fce161b, mod_consts.const_tuple_9c6a4cd57a1781e18068be1f6700f2d2_tuple, NULL, 2, 0, 0);
code_objects_b6f6993d062bc2a1c2288c0ed3ff7c15 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_queued, mod_consts.const_str_digest_53d49334f3f638ce1078a5b37b5da100, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e390c726c6fca5fbdecdf36d35759096 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_for_connection, mod_consts.const_str_digest_5bb3ed44666e85f6b56aae19dfc66e1b, mod_consts.const_tuple_str_plain_self_str_plain_timeout_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__11__close_connections(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__12_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__13___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__14___exit__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__15___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__16___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__17___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__18_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__2_assign_to_connection(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__3_clear_connection(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__4_wait_for_connection(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__5_is_queued(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__7_create_connection(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__8_connections(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__9_handle_request(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_sync$connection_pool$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_92eea0dfaedaf7b6c151d8d5a1960366, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__1___init__ = cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__1___init__);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_request);
tmp_assattr_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_request, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_connection, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_3;
tmp_called_value_1 = module_var_accessor_httpcore$_sync$connection_pool$Event(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__1___init__->m_frame.f_lineno = 21;
tmp_assattr_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__connection_acquired, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__1___init__,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__1___init__ == cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__1___init__);

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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__2_assign_to_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_connection = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_64a8af2ab9f34a8091c21f678a1beff6, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection = cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_connection);
tmp_assattr_value_1 = par_connection;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_connection, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connection_acquired);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection->m_frame.f_lineno = 25;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection,
    type_description_1,
    par_self,
    par_connection
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection == cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__2_assign_to_connection);

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
CHECK_OBJECT(par_connection);
Py_DECREF(par_connection);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_connection);
Py_DECREF(par_connection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$connection_pool$$$function__3_clear_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_5dc618dff00936ad4532a7306c9c85e2, module_httpcore$_sync$connection_pool, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection = cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_connection, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_httpcore$_sync$connection_pool$Event(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection->m_frame.f_lineno = 29;
tmp_assattr_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__connection_acquired, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection == cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__3_clear_connection);

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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__4_wait_for_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_timeout = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_e390c726c6fca5fbdecdf36d35759096, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection = cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connection_acquired);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_wait);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_0_1 = par_timeout;
frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection->m_frame.f_lineno = 35;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_timeout_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_connection);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection->m_frame.f_lineno = 36;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_connection);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection,
    type_description_1,
    par_self,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection == cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__4_wait_for_connection);

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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$connection_pool$$$function__5_is_queued(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued = MAKE_FUNCTION_FRAME(tstate, code_objects_b6f6993d062bc2a1c2288c0ed3ff7c15, module_httpcore$_sync$connection_pool, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued = cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_connection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued == cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__5_is_queued);

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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ssl_context = python_pars[1];
PyObject *par_proxy = python_pars[2];
PyObject *par_max_connections = python_pars[3];
PyObject *par_max_keepalive_connections = python_pars[4];
PyObject *par_keepalive_expiry = python_pars[5];
PyObject *par_http1 = python_pars[6];
PyObject *par_http2 = python_pars[7];
PyObject *par_retries = python_pars[8];
PyObject *par_local_address = python_pars[9];
PyObject *par_uds = python_pars[10];
PyObject *par_network_backend = python_pars[11];
PyObject *par_socket_options = python_pars[12];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_44f61a76e17841a1192d5b0887fbbef0, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__6___init__ = cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__6___init__);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__6___init__) == 2);

// Framed code:
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


exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_proxy);
tmp_assattr_value_2 = par_proxy;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__proxy, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_max_connections);
tmp_cmp_expr_left_1 = par_max_connections;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assattr_value_3 = mod_consts.const_int_hex_7fffffffffffffff;
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_max_connections);
tmp_assattr_value_3 = par_max_connections;
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__max_connections, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_max_keepalive_connections);
tmp_cmp_expr_left_2 = par_max_keepalive_connections;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assattr_value_4 = mod_consts.const_int_hex_7fffffffffffffff;
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(par_max_keepalive_connections);
tmp_assattr_value_4 = par_max_keepalive_connections;
condexpr_end_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__max_keepalive_connections, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_5;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__max_connections);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__max_keepalive_connections);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__6___init__->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assattr_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__max_keepalive_connections, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_keepalive_expiry);
tmp_assattr_value_6 = par_keepalive_expiry;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__keepalive_expiry, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_http1);
tmp_assattr_value_7 = par_http1;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__http1, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_http2);
tmp_assattr_value_8 = par_http2;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__http2, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_retries);
tmp_assattr_value_9 = par_retries;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__retries, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_local_address);
tmp_assattr_value_10 = par_local_address;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__local_address, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(par_uds);
tmp_assattr_value_11 = par_uds;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__uds, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_2;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_network_backend);
tmp_cmp_expr_left_3 = par_network_backend;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_called_value_2 = module_var_accessor_httpcore$_sync$connection_pool$SyncBackend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncBackend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__6___init__->m_frame.f_lineno = 114;
tmp_assattr_value_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assattr_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_3;
condexpr_false_3:;
CHECK_OBJECT(par_network_backend);
tmp_assattr_value_12 = par_network_backend;
Py_INCREF(tmp_assattr_value_12);
condexpr_end_3:;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain__network_backend, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
CHECK_OBJECT(par_socket_options);
tmp_assattr_value_13 = par_socket_options;
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain__socket_options, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
tmp_assattr_value_14 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain__connections, tmp_assattr_value_14);
CHECK_OBJECT(tmp_assattr_value_14);
Py_DECREF(tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
tmp_assattr_value_15 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain__requests, tmp_assattr_value_15);
CHECK_OBJECT(tmp_assattr_value_15);
Py_DECREF(tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_called_value_3;
PyObject *tmp_assattr_target_16;
tmp_called_value_3 = module_var_accessor_httpcore$_sync$connection_pool$ThreadLock(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadLock);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__6___init__->m_frame.f_lineno = 126;
tmp_assattr_value_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assattr_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain__optional_thread_lock, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__6___init__,
    type_description_1,
    par_self,
    par_ssl_context,
    par_proxy,
    par_max_connections,
    par_max_keepalive_connections,
    par_keepalive_expiry,
    par_http1,
    par_http2,
    par_retries,
    par_local_address,
    par_uds,
    par_network_backend,
    par_socket_options
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__6___init__ == cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__6___init__);

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
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
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
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__7_create_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_origin = python_pars[1];
PyObject *var_Socks5Connection = NULL;
PyObject *var_ForwardHTTPConnection = NULL;
PyObject *var_TunnelHTTPConnection = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_03a7c8294be9531acb9a51367b6e69c9, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection = cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__proxy);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooo";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_3a3f4ffdf207c3923acc3c244a2a4da5_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_socks_proxy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Socks5Connection_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame.f_lineno = 131;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_Socks5Connection,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Socks5Connection);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_Socks5Connection == NULL);
var_Socks5Connection = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_Socks5Connection);
tmp_called_value_1 = var_Socks5Connection;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_origin);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_origin);
tmp_kw_call_value_2_1 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__ssl_context);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_3_1);

exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__http1);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_4_1);

exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__http2);
if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);

exception_lineno = 140;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__network_backend);
if (tmp_kw_call_value_7_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);

exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame.f_lineno = 133;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_140ea1baebad0b2b6df86ec2338c0973_tuple);
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
CHECK_OBJECT(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_6_1);
CHECK_OBJECT(tmp_kw_call_value_7_1);
Py_DECREF(tmp_kw_call_value_7_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_origin);
tmp_expression_value_15 = par_origin;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_bytes_digest_1cbbabcd549ab1213865eef7f503ba9a;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_http_proxy;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ForwardHTTPConnection_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame.f_lineno = 144;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_ForwardHTTPConnection,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ForwardHTTPConnection);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_ForwardHTTPConnection == NULL);
var_ForwardHTTPConnection = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_value_5_2;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(var_ForwardHTTPConnection);
tmp_called_value_2 = var_ForwardHTTPConnection;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_origin);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 148;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 148;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_ssl_context);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_origin);
tmp_kw_call_value_3_2 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_4_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_2);

exception_lineno = 151;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_24 = par_self;
tmp_kw_call_value_5_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__network_backend);
if (tmp_kw_call_value_5_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_4_2);

exception_lineno = 152;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame.f_lineno = 146;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_aeb851cc7f71d11a1d43fcb2189ad2db_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
CHECK_OBJECT(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_4_2);
CHECK_OBJECT(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_5_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
branch_end_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_http_proxy;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_TunnelHTTPConnection_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame.f_lineno = 154;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_TunnelHTTPConnection,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TunnelHTTPConnection);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_TunnelHTTPConnection == NULL);
var_TunnelHTTPConnection = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_kw_call_value_3_3;
PyObject *tmp_kw_call_value_4_3;
PyObject *tmp_expression_value_32;
PyObject *tmp_kw_call_value_5_3;
PyObject *tmp_expression_value_33;
PyObject *tmp_kw_call_value_6_2;
PyObject *tmp_expression_value_34;
PyObject *tmp_kw_call_value_7_2;
PyObject *tmp_expression_value_35;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(var_TunnelHTTPConnection);
tmp_called_value_3 = var_TunnelHTTPConnection;
CHECK_OBJECT(par_self);
tmp_expression_value_27 = par_self;
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_origin);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 158;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 158;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_31 = par_self;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain__proxy);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_ssl_context);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);

exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_origin);
tmp_kw_call_value_3_3 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_32 = par_self;
tmp_kw_call_value_4_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain__ssl_context);
if (tmp_kw_call_value_4_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);

exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_33 = par_self;
tmp_kw_call_value_5_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_5_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_4_3);

exception_lineno = 162;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_34 = par_self;
tmp_kw_call_value_6_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain__http1);
if (tmp_kw_call_value_6_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_5_3);

exception_lineno = 163;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_35 = par_self;
tmp_kw_call_value_7_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain__http2);
if (tmp_kw_call_value_7_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_5_3);
Py_DECREF(tmp_kw_call_value_6_2);

exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_36 = par_self;
tmp_kw_call_value_8_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain__network_backend);
if (tmp_kw_call_value_8_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_5_3);
Py_DECREF(tmp_kw_call_value_6_2);
Py_DECREF(tmp_kw_call_value_7_2);

exception_lineno = 165;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame.f_lineno = 156;
{
    PyObject *kw_values[9] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_f395240e500800fad95c7c206c6c6cef_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
CHECK_OBJECT(tmp_kw_call_value_2_3);
Py_DECREF(tmp_kw_call_value_2_3);
CHECK_OBJECT(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_4_3);
CHECK_OBJECT(tmp_kw_call_value_5_3);
Py_DECREF(tmp_kw_call_value_5_3);
CHECK_OBJECT(tmp_kw_call_value_6_2);
Py_DECREF(tmp_kw_call_value_6_2);
CHECK_OBJECT(tmp_kw_call_value_7_2);
Py_DECREF(tmp_kw_call_value_7_2);
CHECK_OBJECT(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_8_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_expression_value_37;
PyObject *tmp_kw_call_value_2_4;
PyObject *tmp_expression_value_38;
PyObject *tmp_kw_call_value_3_4;
PyObject *tmp_expression_value_39;
PyObject *tmp_kw_call_value_4_4;
PyObject *tmp_expression_value_40;
PyObject *tmp_kw_call_value_5_4;
PyObject *tmp_expression_value_41;
PyObject *tmp_kw_call_value_6_3;
PyObject *tmp_expression_value_42;
PyObject *tmp_kw_call_value_7_3;
PyObject *tmp_expression_value_43;
PyObject *tmp_kw_call_value_8_2;
PyObject *tmp_expression_value_44;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_expression_value_45;
tmp_called_value_4 = module_var_accessor_httpcore$_sync$connection_pool$HTTPConnection(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPConnection);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_origin);
tmp_kw_call_value_0_4 = par_origin;
CHECK_OBJECT(par_self);
tmp_expression_value_37 = par_self;
tmp_kw_call_value_1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain__ssl_context);
if (tmp_kw_call_value_1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_38 = par_self;
tmp_kw_call_value_2_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain__keepalive_expiry);
if (tmp_kw_call_value_2_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);

exception_lineno = 171;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_39 = par_self;
tmp_kw_call_value_3_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain__http1);
if (tmp_kw_call_value_3_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);

exception_lineno = 172;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_40 = par_self;
tmp_kw_call_value_4_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain__http2);
if (tmp_kw_call_value_4_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_4);

exception_lineno = 173;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_41 = par_self;
tmp_kw_call_value_5_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain__retries);
if (tmp_kw_call_value_5_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_4_4);

exception_lineno = 174;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_42 = par_self;
tmp_kw_call_value_6_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain__local_address);
if (tmp_kw_call_value_6_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_5_4);

exception_lineno = 175;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_43 = par_self;
tmp_kw_call_value_7_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain__uds);
if (tmp_kw_call_value_7_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_5_4);
Py_DECREF(tmp_kw_call_value_6_3);

exception_lineno = 176;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_44 = par_self;
tmp_kw_call_value_8_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain__network_backend);
if (tmp_kw_call_value_8_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_5_4);
Py_DECREF(tmp_kw_call_value_6_3);
Py_DECREF(tmp_kw_call_value_7_3);

exception_lineno = 177;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_45 = par_self;
tmp_kw_call_value_9_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain__socket_options);
if (tmp_kw_call_value_9_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_5_4);
Py_DECREF(tmp_kw_call_value_6_3);
Py_DECREF(tmp_kw_call_value_7_3);
Py_DECREF(tmp_kw_call_value_8_2);

exception_lineno = 178;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame.f_lineno = 168;
{
    PyObject *kw_values[10] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3, tmp_kw_call_value_8_2, tmp_kw_call_value_9_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_2b9e2b50f8dc1645af579b2386259a61_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_4);
Py_DECREF(tmp_kw_call_value_1_4);
CHECK_OBJECT(tmp_kw_call_value_2_4);
Py_DECREF(tmp_kw_call_value_2_4);
CHECK_OBJECT(tmp_kw_call_value_3_4);
Py_DECREF(tmp_kw_call_value_3_4);
CHECK_OBJECT(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_4_4);
CHECK_OBJECT(tmp_kw_call_value_5_4);
Py_DECREF(tmp_kw_call_value_5_4);
CHECK_OBJECT(tmp_kw_call_value_6_3);
Py_DECREF(tmp_kw_call_value_6_3);
CHECK_OBJECT(tmp_kw_call_value_7_3);
Py_DECREF(tmp_kw_call_value_7_3);
CHECK_OBJECT(tmp_kw_call_value_8_2);
Py_DECREF(tmp_kw_call_value_8_2);
CHECK_OBJECT(tmp_kw_call_value_9_1);
Py_DECREF(tmp_kw_call_value_9_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection,
    type_description_1,
    par_self,
    par_origin,
    var_Socks5Connection,
    var_ForwardHTTPConnection,
    var_TunnelHTTPConnection
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection == cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__7_create_connection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_Socks5Connection);
var_Socks5Connection = NULL;
Py_XDECREF(var_ForwardHTTPConnection);
var_ForwardHTTPConnection = NULL;
Py_XDECREF(var_TunnelHTTPConnection);
var_TunnelHTTPConnection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_Socks5Connection);
var_Socks5Connection = NULL;
Py_XDECREF(var_ForwardHTTPConnection);
var_ForwardHTTPConnection = NULL;
Py_XDECREF(var_TunnelHTTPConnection);
var_TunnelHTTPConnection = NULL;
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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__8_connections(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__8_connections;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections = MAKE_FUNCTION_FRAME(tstate, code_objects_6ee532bcc7b801d6eb938ee1f2e95997, module_httpcore$_sync$connection_pool, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__8_connections = cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__8_connections);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__8_connections) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connections);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__8_connections, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__8_connections->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__8_connections, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__8_connections,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__8_connections == cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__8_connections = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__8_connections);

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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__9_handle_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_scheme = NULL;
PyObject *var_timeouts = NULL;
PyObject *var_timeout = NULL;
PyObject *var_pool_request = NULL;
PyObject *var_closing = NULL;
PyObject *var_connection = NULL;
PyObject *var_response = NULL;
PyObject *var_exc = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
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
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionStackItem exception_preserved_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request = MAKE_FUNCTION_FRAME(tstate, code_objects_85e2120ee21bb235506d4616dab34864, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request = cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_request);
tmp_expression_value_3 = par_request;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_url);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 205;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_scheme == NULL);
var_scheme = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_scheme);
tmp_cmp_expr_left_1 = var_scheme;
tmp_cmp_expr_right_1 = const_str_empty;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooo";
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
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_httpcore$_sync$connection_pool$UnsupportedProtocol(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnsupportedProtocol);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 207;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_67d7bf9b5731e0c631a428c2a5fdc39c_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 207;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_scheme);
tmp_cmp_expr_left_2 = var_scheme;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_http_str_plain_https_str_plain_ws_str_plain_wss_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_3 = module_var_accessor_httpcore$_sync$connection_pool$UnsupportedProtocol(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnsupportedProtocol);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c9f1a613df6feee2c2b46010f85cdb7d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_scheme);
tmp_format_value_1 = var_scheme;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ed37000d86d25897da6f4045a1a12c74;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 211;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 211;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(par_request);
tmp_expression_value_5 = par_request;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_extensions);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_timeout;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_timeouts == NULL);
var_timeouts = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_timeouts);
tmp_expression_value_6 = var_timeouts;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 216;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_pool_none_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_timeout == NULL);
var_timeout = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__optional_thread_lock);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_8 = tmp_with_1__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 218;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_9 = tmp_with_1__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___exit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_6;
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
tmp_called_value_7 = module_var_accessor_httpcore$_sync$connection_pool$PoolRequest(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolRequest);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_2 = par_request;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 220;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(var_pool_request == NULL);
var_pool_request = tmp_assign_source_8;
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__requests);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_pool_request);
tmp_args_element_value_3 = var_pool_request;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 221;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_1);
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
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 218;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
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
    exception_lineno = 218;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_5;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 218;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_5;
branch_end_3:;
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
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_10 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 218;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
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
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_11 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 218;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
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
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_12;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_12 = par_self;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__optional_thread_lock);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_with_2__source;
    tmp_with_2__source = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_13 = tmp_with_2__source;
tmp_called_value_12 = LOOKUP_SPECIAL(tstate, tmp_expression_value_13, const_str_plain___enter__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 225;
tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_with_2__enter;
    tmp_with_2__enter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_14 = tmp_with_2__source;
tmp_assign_source_12 = LOOKUP_SPECIAL(tstate, tmp_expression_value_14, const_str_plain___exit__);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_with_2__exit;
    tmp_with_2__exit = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_13;
tmp_assign_source_13 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_13;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}

tmp_called_instance_1 = par_self;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 228;
tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__assign_requests_to_connections);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_closing;
    var_closing = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_5);
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
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_15;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_13 = tmp_with_2__exit;
tmp_args_element_value_7 = EXC_TYPE(tstate);
tmp_args_element_value_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_8); 
tmp_args_element_value_9 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_9 == NULL) {
    tmp_args_element_value_9 = Py_None;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 225;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 225;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_10;
branch_no_8:;
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 225;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_10;
branch_end_7:;
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
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
try_except_handler_8:;
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
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_14 = tmp_with_2__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 225;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_9:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_7;
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
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_15 = tmp_with_2__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 225;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_10:;
goto try_end_8;
// Exception handler code:
try_except_handler_7:;
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

goto try_except_handler_6;
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
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_10;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_15 = par_self;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__close_connections);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
if (var_closing == NULL) {
Py_DECREF(tmp_called_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_10 = var_closing;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 229;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_0_1;
if (var_pool_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pool_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_16 = var_pool_request;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_wait_for_connection);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
if (var_timeout == NULL) {
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}

tmp_kw_call_value_0_1 = var_timeout;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 232;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_16 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_17, kw_values, mod_consts.const_tuple_str_plain_timeout_tuple);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_connection;
    var_connection = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_17;
tmp_assign_source_17 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_connection);
tmp_expression_value_17 = var_connection;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_handle_request);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
if (var_pool_request == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pool_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_18 = var_pool_request;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_request);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 237;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 236;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_19;
tmp_assign_source_19 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_19;
}
// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = module_var_accessor_httpcore$_sync$connection_pool$ConnectionNotAvailable(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionNotAvailable);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oooooooooo";
    goto try_except_handler_12;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_7;
if (var_pool_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pool_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "oooooooooo";
    goto try_except_handler_12;
}

tmp_called_instance_2 = var_pool_request;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 244;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_clear_connection);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
goto branch_end_11;
branch_no_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 234;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_12;
branch_end_11:;
goto try_end_10;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_6;
// End of try:
try_end_10:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_9;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_9:;
{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_end_1;
branch_no_12:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_11;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 5.
exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
tmp_cmp_expr_right_11 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
assert(!(tmp_res == -1));
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_20); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_20);
var_exc = tmp_assign_source_20;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_19;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_15;
}

tmp_expression_value_19 = par_self;
tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__optional_thread_lock);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_15;
}
assert(tmp_with_3__source == NULL);
tmp_with_3__source = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_with_3__source);
tmp_expression_value_20 = tmp_with_3__source;
tmp_called_value_19 = LOOKUP_SPECIAL(tstate, tmp_expression_value_20, const_str_plain___enter__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_15;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 249;
tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_15;
}
assert(tmp_with_3__enter == NULL);
tmp_with_3__enter = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_with_3__source);
tmp_expression_value_21 = tmp_with_3__source;
tmp_assign_source_23 = LOOKUP_SPECIAL(tstate, tmp_expression_value_21, const_str_plain___exit__);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_15;
}
assert(tmp_with_3__exit == NULL);
tmp_with_3__exit = tmp_assign_source_23;
}
{
nuitka_bool tmp_assign_source_24;
tmp_assign_source_24 = NUITKA_BOOL_TRUE;
tmp_with_3__indicator = tmp_assign_source_24;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_12;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "oooooooooo";
    goto try_except_handler_17;
}

tmp_expression_value_23 = par_self;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__requests);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooo";
    goto try_except_handler_17;
}
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooo";
    goto try_except_handler_17;
}
if (var_pool_request == NULL) {
Py_DECREF(tmp_called_value_20);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pool_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "oooooooooo";
    goto try_except_handler_17;
}

tmp_args_element_value_12 = var_pool_request;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 252;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooo";
    goto try_except_handler_17;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "oooooooooo";
    goto try_except_handler_17;
}

tmp_called_instance_3 = par_self;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 253;
tmp_assign_source_25 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__assign_requests_to_connections);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = var_closing;
    var_closing = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
goto try_end_12;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_12);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_12, exception_tb);
    } else if (exception_keeper_lineno_12 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_12, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_12);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
tmp_cmp_expr_left_12 = EXC_TYPE(tstate);
tmp_cmp_expr_right_12 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
nuitka_bool tmp_assign_source_26;
tmp_assign_source_26 = NUITKA_BOOL_FALSE;
tmp_with_3__indicator = tmp_assign_source_26;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_21 = tmp_with_3__exit;
tmp_args_element_value_13 = EXC_TYPE(tstate);
tmp_args_element_value_14 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_14); 
tmp_args_element_value_15 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_15 == NULL) {
    tmp_args_element_value_15 = Py_None;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 249;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_18;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_18;
}
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 249;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_18;
branch_no_15:;
goto branch_end_14;
branch_no_14:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 249;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_18;
branch_end_14:;
goto try_end_13;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

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
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_16;
nuitka_bool tmp_cmp_expr_left_13;
nuitka_bool tmp_cmp_expr_right_13;
assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_13 = tmp_with_3__indicator;
tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
tmp_condition_result_16 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_call_result_9;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_22 = tmp_with_3__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 249;
tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_22, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_14);

exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_16:;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
try_end_14:;
{
bool tmp_condition_result_17;
nuitka_bool tmp_cmp_expr_left_14;
nuitka_bool tmp_cmp_expr_right_14;
assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_14 = tmp_with_3__indicator;
tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
tmp_condition_result_17 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_call_result_10;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_23 = tmp_with_3__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 249;
tmp_call_result_10 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_23, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_17:;
goto try_end_15;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_3__source);
tmp_with_3__source = NULL;
Py_XDECREF(tmp_with_3__enter);
tmp_with_3__enter = NULL;
Py_XDECREF(tmp_with_3__exit);
tmp_with_3__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_14;
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
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_16;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto try_except_handler_14;
}

tmp_expression_value_24 = par_self;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__close_connections);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto try_except_handler_14;
}
if (var_closing == NULL) {
Py_DECREF(tmp_called_value_24);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_16 = var_closing;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 255;
tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_exc);
tmp_raise_type_input_3 = var_exc;
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooooooo";
    goto try_except_handler_14;
}
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 256;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooo";
goto try_except_handler_14;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_13;
// End of try:
goto branch_end_13;
branch_no_13:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 223;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_13;
branch_end_13:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_11:;
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = var_response;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_stream);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_26 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_26 == NULL));
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_Iterable);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 260;
type_description_1 = "oooooooooo";
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


exception_lineno = 260;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_18 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_4;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 260;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 260;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_18:;
{
PyObject *tmp_called_value_25;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_27;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_28;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_value_26;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_30;
tmp_called_value_25 = module_var_accessor_httpcore$_sync$connection_pool$Response(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = var_response;
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_status);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = var_response;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_headers);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 263;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_26 = module_var_accessor_httpcore$_sync$connection_pool$PoolByteStream(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolByteStream);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = var_response;
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_stream);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 265;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_pool_request == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pool_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_2 = var_pool_request;
if (par_self == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_2 = par_self;
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 264;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

    tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_26, kw_values, mod_consts.const_tuple_str_plain_stream_str_plain_pool_request_str_plain_pool_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 264;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = var_response;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_extensions);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame.f_lineno = 261;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_25, kw_values, mod_consts.const_tuple_7ca52466aebb30eb7c92bd4fdb83a775_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request,
    type_description_1,
    par_self,
    par_request,
    var_scheme,
    var_timeouts,
    var_timeout,
    var_pool_request,
    var_closing,
    var_connection,
    var_response,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request == cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__9_handle_request);

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
CHECK_OBJECT(var_timeouts);
CHECK_OBJECT(var_timeouts);
Py_DECREF(var_timeouts);
var_timeouts = NULL;
Py_XDECREF(var_timeout);
var_timeout = NULL;
Py_XDECREF(var_pool_request);
var_pool_request = NULL;
Py_XDECREF(var_closing);
var_closing = NULL;
CHECK_OBJECT(var_connection);
CHECK_OBJECT(var_connection);
Py_DECREF(var_connection);
var_connection = NULL;
Py_XDECREF(var_response);
var_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_timeouts);
var_timeouts = NULL;
Py_XDECREF(var_timeout);
var_timeout = NULL;
Py_XDECREF(var_pool_request);
var_pool_request = NULL;
Py_XDECREF(var_closing);
var_closing = NULL;
Py_XDECREF(var_connection);
var_connection = NULL;
Py_XDECREF(var_response);
var_response = NULL;
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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_closing_connections = NULL;
PyObject *var_connection = NULL;
PyObject *var_queued_requests = NULL;
PyObject *var_pool_request = NULL;
PyObject *var_origin = NULL;
PyObject *var_available_connections = NULL;
PyObject *var_idle_connections = NULL;
PyObject *outline_0_var_connection = NULL;
PyObject *outline_1_var_request = NULL;
PyObject *outline_2_var_connection = NULL;
PyObject *outline_3_var_connection = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
PyObject *tmp_listcomp_4__$0 = NULL;
PyObject *tmp_listcomp_4__contraction = NULL;
PyObject *tmp_listcomp_4__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_closing_connections == NULL);
var_closing_connections = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections = MAKE_FUNCTION_FRAME(tstate, code_objects_b8b4250d1fe7305006d1d31183f9fc98, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections = cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connections);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
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
type_description_1 = "oooooooo";
exception_lineno = 284;
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
    PyObject *old = var_connection;
    var_connection = tmp_assign_source_4;
    Py_INCREF(var_connection);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_connection);
tmp_called_instance_1 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 285;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_closed);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 285;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connections);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_connection);
tmp_args_element_value_1 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 287;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_connection);
tmp_called_instance_2 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 288;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_has_expired);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 288;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__connections);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_connection);
tmp_args_element_value_2 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 290;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_closing_connections == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing_connections);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_closing_connections;
CHECK_OBJECT(var_connection);
tmp_item_value_1 = var_connection;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_5;
int tmp_truth_name_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_connection);
tmp_called_instance_3 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 293;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_is_idle);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 293;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_6 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__connections);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_6;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 294;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_connection;
    outline_0_var_connection = tmp_assign_source_8;
    Py_INCREF(outline_0_var_connection);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_connection);
tmp_called_instance_4 = outline_0_var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 294;
tmp_append_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_is_idle);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_len_arg_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_len_arg_1);
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
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_connection);
outline_0_var_connection = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_connection);
outline_0_var_connection = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 294;
goto try_except_handler_2;
outline_result_1:;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__max_keepalive_connections);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 295;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__connections);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_connection);
tmp_args_element_value_3 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 298;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_closing_connections == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing_connections);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 299;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_closing_connections;
CHECK_OBJECT(var_connection);
tmp_item_value_2 = var_connection;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_3:;
branch_end_2:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_9;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_10;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_10 = par_self;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__requests);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_11;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_3 = tmp_listcomp_2__$0;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 302;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_request;
    outline_1_var_request = tmp_assign_source_13;
    Py_INCREF(outline_1_var_request);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_7;
int tmp_truth_name_4;
CHECK_OBJECT(outline_1_var_request);
tmp_called_instance_5 = outline_1_var_request;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 302;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_is_queued);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_7);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_7);

exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_request);
tmp_append_value_2 = outline_1_var_request;
tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_9 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_9);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_1_var_request);
outline_1_var_request = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_request);
outline_1_var_request = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 302;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_queued_requests == NULL);
var_queued_requests = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_queued_requests);
tmp_iter_arg_4 = var_queued_requests;
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_14;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_4 = tmp_for_loop_2__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 303;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_16 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_pool_request;
    var_pool_request = tmp_assign_source_16;
    Py_INCREF(var_pool_request);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_pool_request);
tmp_expression_value_13 = var_pool_request;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_request);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_origin);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_origin;
    var_origin = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_14;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_14 = par_self;
tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__connections);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_20;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_5 = tmp_listcomp_3__$0;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_5);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 305;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_22 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_2_var_connection;
    outline_2_var_connection = tmp_assign_source_22;
    Py_INCREF(outline_2_var_connection);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_5;
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_9;
int tmp_truth_name_6;
CHECK_OBJECT(outline_2_var_connection);
tmp_expression_value_15 = outline_2_var_connection;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_can_handle_request);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
if (var_origin == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_origin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_4 = var_origin;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 308;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_8);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_8);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_and_left_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(outline_2_var_connection);
tmp_called_instance_6 = outline_2_var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 308;
tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_is_available);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_9);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_9);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_and_right_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
CHECK_OBJECT(outline_2_var_connection);
tmp_append_value_3 = outline_2_var_connection;
tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
}
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_assign_source_18 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_assign_source_18);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(outline_2_var_connection);
outline_2_var_connection = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var_connection);
outline_2_var_connection = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 305;
goto try_except_handler_7;
outline_result_3:;
{
    PyObject *old = var_available_connections;
    var_available_connections = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_6;
PyObject *tmp_expression_value_16;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "oooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_16 = par_self;
tmp_iter_arg_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__connections);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooo";
    goto try_except_handler_10;
}
assert(tmp_listcomp_4__$0 == NULL);
tmp_listcomp_4__$0 = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_4__contraction == NULL);
tmp_listcomp_4__contraction = tmp_assign_source_25;
}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_listcomp_4__$0);
tmp_next_source_6 = tmp_listcomp_4__$0;
tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_26 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 310;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_listcomp_4__iter_value_0;
    tmp_listcomp_4__iter_value_0 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
tmp_assign_source_27 = tmp_listcomp_4__iter_value_0;
{
    PyObject *old = outline_3_var_connection;
    outline_3_var_connection = tmp_assign_source_27;
    Py_INCREF(outline_3_var_connection);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_10;
int tmp_truth_name_7;
CHECK_OBJECT(outline_3_var_connection);
tmp_called_instance_7 = outline_3_var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 311;
tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_is_idle);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooo";
    goto try_except_handler_11;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_10);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_10);

exception_lineno = 311;
type_description_1 = "oooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_6 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_append_list_4;
PyObject *tmp_append_value_4;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_append_list_4 = tmp_listcomp_4__contraction;
CHECK_OBJECT(outline_3_var_connection);
tmp_append_value_4 = outline_3_var_connection;
tmp_result = LIST_APPEND0(tmp_append_list_4, tmp_append_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooo";
    goto try_except_handler_11;
}
}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooo";
    goto try_except_handler_11;
}
goto loop_start_6;
loop_end_6:;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_assign_source_23 = tmp_listcomp_4__contraction;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_XDECREF(outline_3_var_connection);
outline_3_var_connection = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var_connection);
outline_3_var_connection = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 310;
goto try_except_handler_7;
outline_result_4:;
{
    PyObject *old = var_idle_connections;
    var_idle_connections = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_8;
CHECK_OBJECT(var_available_connections);
tmp_truth_name_8 = CHECK_IF_TRUE(var_available_connections);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_7 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_available_connections);
tmp_expression_value_17 = var_available_connections;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_28 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_1, 0);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_connection;
    var_connection = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_pool_request);
tmp_called_instance_8 = var_pool_request;
CHECK_OBJECT(var_connection);
tmp_args_element_value_5 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 323;
tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_assign_to_connection, tmp_args_element_value_5);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 324;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_18 = par_self;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__connections);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 324;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_19 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__max_connections);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 324;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = RICH_COMPARE_LT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 326;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_20 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_create_connection);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
if (var_origin == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_origin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 326;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_6 = var_origin;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 326;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_connection;
    var_connection = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_7;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 327;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_22 = par_self;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain__connections);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_connection);
tmp_args_element_value_7 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 327;
tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
{
PyObject *tmp_called_instance_9;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_pool_request);
tmp_called_instance_9 = var_pool_request;
CHECK_OBJECT(var_connection);
tmp_args_element_value_8 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 328;
tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_assign_to_connection, tmp_args_element_value_8);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_9;
CHECK_OBJECT(var_idle_connections);
tmp_truth_name_9 = CHECK_IF_TRUE(var_idle_connections);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_idle_connections);
tmp_expression_value_23 = var_idle_connections;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_30 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_2, 0);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_connection;
    var_connection = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_9;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_25 = par_self;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__connections);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_connection);
tmp_args_element_value_9 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 332;
tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
if (var_closing_connections == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing_connections);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_list_arg_value_3 = var_closing_connections;
CHECK_OBJECT(var_connection);
tmp_item_value_3 = var_connection;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_10;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 335;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_26 = par_self;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_create_connection);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
if (var_origin == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_origin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 335;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_10 = var_origin;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 335;
tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_connection;
    assert(old != NULL);
    var_connection = tmp_assign_source_31;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_15;
PyObject *tmp_args_element_value_11;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain__connections);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_connection);
tmp_args_element_value_11 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 336;
tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
{
PyObject *tmp_called_instance_10;
PyObject *tmp_call_result_16;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(var_pool_request);
tmp_called_instance_10 = var_pool_request;
CHECK_OBJECT(var_connection);
tmp_args_element_value_12 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame.f_lineno = 337;
tmp_call_result_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_assign_to_connection, tmp_args_element_value_12);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
branch_no_9:;
branch_end_8:;
branch_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
goto loop_start_4;
loop_end_4:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (var_closing_connections == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing_connections);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_closing_connections;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections,
    type_description_1,
    par_self,
    var_closing_connections,
    var_connection,
    var_queued_requests,
    var_pool_request,
    var_origin,
    var_available_connections,
    var_idle_connections
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections == cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_closing_connections);
var_closing_connections = NULL;
Py_XDECREF(var_connection);
var_connection = NULL;
CHECK_OBJECT(var_queued_requests);
CHECK_OBJECT(var_queued_requests);
Py_DECREF(var_queued_requests);
var_queued_requests = NULL;
Py_XDECREF(var_pool_request);
var_pool_request = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_available_connections);
var_available_connections = NULL;
Py_XDECREF(var_idle_connections);
var_idle_connections = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_closing_connections);
var_closing_connections = NULL;
Py_XDECREF(var_connection);
var_connection = NULL;
Py_XDECREF(var_queued_requests);
var_queued_requests = NULL;
Py_XDECREF(var_pool_request);
var_pool_request = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_available_connections);
var_available_connections = NULL;
Py_XDECREF(var_idle_connections);
var_idle_connections = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__11__close_connections(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_closing = python_pars[1];
PyObject *var_connection = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections = MAKE_FUNCTION_FRAME(tstate, code_objects_1c557a9282db86ad0ee73deb754ced9f, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections = cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpcore$_sync$connection_pool$ShieldCancellation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ShieldCancellation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = 343;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_2;
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


exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = 343;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_2;
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


exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_closing);
tmp_iter_arg_1 = par_closing;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 344;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_connection;
    var_connection = tmp_assign_source_7;
    Py_INCREF(var_connection);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_connection);
tmp_called_instance_1 = var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = 345;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
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
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
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
frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = 343;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooo";
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
    exception_lineno = 343;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 343;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = 343;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
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
frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame.f_lineno = 343;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections,
    type_description_1,
    par_self,
    par_closing,
    var_connection
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections == cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__11__close_connections);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
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
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_connection);
var_connection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_connection);
var_connection = NULL;
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
CHECK_OBJECT(par_closing);
Py_DECREF(par_closing);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_closing);
Py_DECREF(par_closing);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$connection_pool$$$function__12_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_closing_connections = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__12_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close = MAKE_FUNCTION_FRAME(tstate, code_objects_eb1f7c29ee8c78e747e29e061015e1b6, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__12_close = cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__12_close);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__12_close) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__optional_thread_lock);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame.f_lineno = 350;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_list_arg_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__connections);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_assign_source_5 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oo";
    goto try_except_handler_4;
}
assert(var_closing_connections == NULL);
var_closing_connections = tmp_assign_source_5;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__connections, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__12_close, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__12_close, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame.f_lineno = 350;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_5;
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
    exception_lineno = 350;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 350;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame.f_lineno = 350;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame.f_lineno = 350;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__close_connections);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (var_closing_connections == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing_connections);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 353;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = var_closing_connections;
frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame.f_lineno = 353;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__12_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__12_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__12_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__12_close,
    type_description_1,
    par_self,
    var_closing_connections
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__12_close == cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__12_close = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__12_close);

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
Py_XDECREF(var_closing_connections);
var_closing_connections = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_closing_connections);
var_closing_connections = NULL;
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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__13___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__14___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_value = python_pars[2];
PyObject *par_traceback = python_pars[3];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0baadfa3fe8f3597c362539ca11ed7b4, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__ = cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__->m_frame.f_lineno = 364;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_value,
    par_traceback
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__ == cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__14___exit__);

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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__15___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_class_name = NULL;
PyObject *var_request_is_queued = NULL;
PyObject *var_connection_is_idle = NULL;
PyObject *var_num_active_requests = NULL;
PyObject *var_num_queued_requests = NULL;
PyObject *var_num_active_connections = NULL;
PyObject *var_num_idle_connections = NULL;
PyObject *var_requests_info = NULL;
PyObject *var_connection_info = NULL;
PyObject *outline_0_var_request = NULL;
PyObject *outline_1_var_connection = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6135b41a7f5eaedd85e12dbafb02eded, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__ = cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_class_name == NULL);
var_class_name = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__optional_thread_lock);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 368;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_4;
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__requests);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 369;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_request;
    outline_0_var_request = tmp_assign_source_10;
    Py_INCREF(outline_0_var_request);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_request);
tmp_called_instance_1 = outline_0_var_request;
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 369;
tmp_append_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_queued);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_6 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_6);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
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
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_0_var_request);
outline_0_var_request = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_request);
outline_0_var_request = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 369;
goto try_except_handler_4;
outline_result_1:;
assert(var_request_is_queued == NULL);
var_request_is_queued = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_11;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__connections);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_13;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 370;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_15 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_connection;
    outline_1_var_connection = tmp_assign_source_15;
    Py_INCREF(outline_1_var_connection);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_connection);
tmp_called_instance_2 = outline_1_var_connection;
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 371;
tmp_append_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_idle);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_11 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_XDECREF(outline_1_var_connection);
outline_1_var_connection = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_connection);
outline_1_var_connection = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 370;
goto try_except_handler_4;
outline_result_2:;
assert(var_connection_is_idle == NULL);
var_connection_is_idle = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_request_is_queued);
tmp_expression_value_8 = var_request_is_queued;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_count);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 374;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_false_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(var_num_active_requests == NULL);
var_num_active_requests = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_request_is_queued);
tmp_expression_value_9 = var_request_is_queued;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_count);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 375;
tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_true_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(var_num_queued_requests == NULL);
var_num_queued_requests = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_connection_is_idle);
tmp_expression_value_10 = var_connection_is_idle;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_count);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 376;
tmp_assign_source_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_false_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(var_num_active_connections == NULL);
var_num_active_connections = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_connection_is_idle);
tmp_expression_value_11 = var_connection_is_idle;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_count);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 377;
tmp_assign_source_19 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_true_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(var_num_idle_connections == NULL);
var_num_idle_connections = tmp_assign_source_19;
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
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
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_20;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 368;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
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
    exception_lineno = 368;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_9;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 368;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_9;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 368;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
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
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame.f_lineno = 368;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

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
PyObject *tmp_assign_source_21;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_854aee975ce3a4b5b994906745e8291e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (var_num_active_requests == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_active_requests);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 380;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}

tmp_format_value_1 = var_num_active_requests;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3b835a804432e56664663f908d1b1077;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
if (var_num_queued_requests == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_queued_requests);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 380;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}

tmp_format_value_2 = var_num_queued_requests;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e71cbb803ae369ad7ffaf416a595f721;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_21 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_21 == NULL));
assert(var_requests_info == NULL);
var_requests_info = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_6b3ff0c9b4f0c95229ee1a481d052422;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (var_num_active_connections == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_active_connections);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 383;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}

tmp_format_value_3 = var_num_active_connections;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_3b835a804432e56664663f908d1b1077;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
if (var_num_idle_connections == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_idle_connections);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 383;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}

tmp_format_value_4 = var_num_idle_connections;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_060784e0e9774dfd9334df35a2f2f88a;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_22 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_22 == NULL));
assert(var_connection_info == NULL);
var_connection_info = tmp_assign_source_22;
}
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_chr_60;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_class_name);
tmp_format_value_5 = var_class_name;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_ae1bf19510647fb9d159b650e3dcc9f7;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_requests_info);
tmp_tuple_element_3 = var_requests_info;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_3e12364e6eae797aad5331e1f9618e84;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
CHECK_OBJECT(var_connection_info);
tmp_tuple_element_3 = var_connection_info;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 5, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_cea0da72f6f6b18d7a8cf0b444c2fdf1;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 6, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__,
    type_description_1,
    par_self,
    var_class_name,
    var_request_is_queued,
    var_connection_is_idle,
    var_num_active_requests,
    var_num_queued_requests,
    var_num_active_connections,
    var_num_idle_connections,
    var_requests_info,
    var_connection_info
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__ == cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__15___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_class_name);
CHECK_OBJECT(var_class_name);
Py_DECREF(var_class_name);
var_class_name = NULL;
Py_XDECREF(var_request_is_queued);
var_request_is_queued = NULL;
Py_XDECREF(var_connection_is_idle);
var_connection_is_idle = NULL;
Py_XDECREF(var_num_active_requests);
var_num_active_requests = NULL;
Py_XDECREF(var_num_queued_requests);
var_num_queued_requests = NULL;
Py_XDECREF(var_num_active_connections);
var_num_active_connections = NULL;
Py_XDECREF(var_num_idle_connections);
var_num_idle_connections = NULL;
CHECK_OBJECT(var_requests_info);
CHECK_OBJECT(var_requests_info);
Py_DECREF(var_requests_info);
var_requests_info = NULL;
CHECK_OBJECT(var_connection_info);
CHECK_OBJECT(var_connection_info);
Py_DECREF(var_connection_info);
var_connection_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_class_name);
var_class_name = NULL;
Py_XDECREF(var_request_is_queued);
var_request_is_queued = NULL;
Py_XDECREF(var_connection_is_idle);
var_connection_is_idle = NULL;
Py_XDECREF(var_num_active_requests);
var_num_active_requests = NULL;
Py_XDECREF(var_num_queued_requests);
var_num_queued_requests = NULL;
Py_XDECREF(var_num_active_connections);
var_num_active_connections = NULL;
Py_XDECREF(var_num_idle_connections);
var_num_idle_connections = NULL;
Py_XDECREF(var_requests_info);
var_requests_info = NULL;
Py_XDECREF(var_connection_info);
var_connection_info = NULL;
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


static PyObject *impl_httpcore$_sync$connection_pool$$$function__16___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_pool_request = python_pars[2];
PyObject *par_pool = python_pars[3];
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__16___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_eeb55d92810309685c6457d9ace5fe63, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__16___init__ = cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__16___init__);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__16___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_stream);
tmp_assattr_value_1 = par_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__stream, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_pool_request);
tmp_assattr_value_2 = par_pool_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__pool_request, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_pool);
tmp_assattr_value_3 = par_pool;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__pool, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__closed, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__16___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__16___init__,
    type_description_1,
    par_self,
    par_stream,
    par_pool_request,
    par_pool
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__16___init__ == cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__16___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__16___init__);

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
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_pool_request);
Py_DECREF(par_pool_request);
CHECK_OBJECT(par_pool);
Py_DECREF(par_pool);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_pool_request);
Py_DECREF(par_pool_request);
CHECK_OBJECT(par_pool);
Py_DECREF(par_pool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$connection_pool$$$function__17___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter___locals {
PyObject *var_part;
PyObject *var_exc;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_part = NULL;
generator_heap->var_exc = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1576028a0742138b28646e97af12448e, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__stream);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coo";
generator_heap->exception_lineno = 403;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_part;
    generator_heap->var_part = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_part);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_part);
tmp_expression_value_2 = generator_heap->var_part;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 404;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_3;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_4);
generator_heap->var_exc = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 406;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 406;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 406;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(generator_heap->var_exc);
tmp_raise_type_input_1 = generator_heap->var_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 407;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}
tmp_raise_cause_1 = Py_None;
generator_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
generator_heap->exception_lineno = 407;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &generator_heap->exception_state, tmp_raise_cause_1);
generator_heap->type_description_1 = "coo";
goto try_except_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 402;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "coo";
goto try_except_handler_4;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;

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
    generator_heap->var_part,
    generator_heap->var_exc
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
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_part);
generator_heap->var_part = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_part);
generator_heap->var_part = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter___context,
        module_httpcore$_sync$connection_pool,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_016083c2df3f9daa3c30f1bcb16160fd,
#endif
        code_objects_1576028a0742138b28646e97af12448e,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_sync$connection_pool$$$function__17___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_sync$connection_pool$$$function__18_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_closing = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$function__18_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close)) {
    Py_XDECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close = MAKE_FUNCTION_FRAME(tstate, code_objects_a935f15e829be20cefe1528ad6b051ff, module_httpcore$_sync$connection_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_type_description == NULL);
frame_frame_httpcore$_sync$connection_pool$$$function__18_close = cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$function__18_close);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$function__18_close) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__closed);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__closed, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpcore$_sync$connection_pool$ShieldCancellation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ShieldCancellation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 412;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 412;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_2;
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
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__stream);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, const_str_plain_close);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto try_except_handler_4;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__stream);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 414;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__18_close, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__18_close, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
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
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 412;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_5;
}
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
    exception_lineno = 412;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 412;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_3:;
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
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 412;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 412;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
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
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__pool);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_6;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__optional_thread_lock);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_6;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_9 = tmp_with_2__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_6;
}
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 416;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_6;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_10 = tmp_with_2__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_6;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_9;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__pool);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto try_except_handler_8;
}
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__requests);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto try_except_handler_8;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto try_except_handler_8;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__pool_request);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 417;
type_description_1 = "oo";
    goto try_except_handler_8;
}
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 417;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__pool);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto try_except_handler_8;
}
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 418;
tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__assign_requests_to_connections);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto try_except_handler_8;
}
assert(var_closing == NULL);
var_closing = tmp_assign_source_10;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__18_close, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__18_close, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_8 = tmp_with_2__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 416;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 416;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_9;
branch_no_8:;
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 416;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame)) {
        frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_9;
branch_end_7:;
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
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_2__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_9 = tmp_with_2__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 416;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_9:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
try_end_7:;
{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 416;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_10:;
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
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__pool);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__close_connections);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (var_closing == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closing);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = var_closing;
frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame.f_lineno = 420;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$function__18_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$function__18_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$function__18_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$function__18_close,
    type_description_1,
    par_self,
    var_closing
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$_sync$connection_pool$$$function__18_close == cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close);
    cache_frame_frame_httpcore$_sync$connection_pool$$$function__18_close = NULL;
}

assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$function__18_close);

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
Py_XDECREF(var_closing);
var_closing = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_closing);
var_closing = NULL;
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



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections,
        mod_consts.const_str_plain__assign_requests_to_connections,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_73d4dff6473a60c8015722a4f229778a,
#endif
        code_objects_b8b4250d1fe7305006d1d31183f9fc98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        mod_consts.const_str_digest_10fef81664a4a700be3c80bc5243d509,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__11__close_connections(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__11__close_connections,
        mod_consts.const_str_plain__close_connections,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb9ecb3cd2bb41ec9ef8f96c920544e5,
#endif
        code_objects_1c557a9282db86ad0ee73deb754ced9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__12_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__12_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f4bfc452424dc866a47e0b4ba5b97c1a,
#endif
        code_objects_eb1f7c29ee8c78e747e29e061015e1b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__13___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__13___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d5ce309bb23bad4cf56bebbcfee2e1d4,
#endif
        code_objects_e095e311af924c813179bfe328297915,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__14___exit__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__14___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0c2cfd5e87a8ed7cf1566521e8239646,
#endif
        code_objects_0baadfa3fe8f3597c362539ca11ed7b4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__15___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__15___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_37daea3319a9612ca1abc83420934166,
#endif
        code_objects_6135b41a7f5eaedd85e12dbafb02eded,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__16___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ef6535a8eae43ac2c5dfecac8cc2ab41,
#endif
        code_objects_eeb55d92810309685c6457d9ace5fe63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__17___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__17___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_016083c2df3f9daa3c30f1bcb16160fd,
#endif
        code_objects_1576028a0742138b28646e97af12448e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__18_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__18_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_daf7aa59261028d136e0dc5909d7a842,
#endif
        code_objects_a935f15e829be20cefe1528ad6b051ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4a2812192de07cbe788e37635a04c4db,
#endif
        code_objects_92eea0dfaedaf7b6c151d8d5a1960366,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__2_assign_to_connection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__2_assign_to_connection,
        mod_consts.const_str_plain_assign_to_connection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_de923dd07c183d26370d25a676ca2a6a,
#endif
        code_objects_64a8af2ab9f34a8091c21f678a1beff6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__3_clear_connection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__3_clear_connection,
        mod_consts.const_str_plain_clear_connection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_825f1ea6f939fee555b95ef60305b72c,
#endif
        code_objects_5dc618dff00936ad4532a7306c9c85e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__4_wait_for_connection(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__4_wait_for_connection,
        mod_consts.const_str_plain_wait_for_connection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5bb3ed44666e85f6b56aae19dfc66e1b,
#endif
        code_objects_e390c726c6fca5fbdecdf36d35759096,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__5_is_queued(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__5_is_queued,
        mod_consts.const_str_plain_is_queued,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53d49334f3f638ce1078a5b37b5da100,
#endif
        code_objects_b6f6993d062bc2a1c2288c0ed3ff7c15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e1f773e4dbf5fdc604f0ef0fb6409e99,
#endif
        code_objects_44f61a76e17841a1192d5b0887fbbef0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        mod_consts.const_str_digest_4b02164a2d5fa2f2649ee4a2fb930401,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__7_create_connection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__7_create_connection,
        mod_consts.const_str_plain_create_connection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c2a4ed91e0c2b604fc001971d3c184fe,
#endif
        code_objects_03a7c8294be9531acb9a51367b6e69c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__8_connections(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__8_connections,
        mod_consts.const_str_plain_connections,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d45c7683c918cc06236d2978f0fc9f20,
#endif
        code_objects_6ee532bcc7b801d6eb938ee1f2e95997,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        mod_consts.const_str_digest_526e0b3e41c1285c01411b6ef8ad0bf9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__9_handle_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$connection_pool$$$function__9_handle_request,
        mod_consts.const_str_plain_handle_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1bf1d890576be4a1b4b180065fce161b,
#endif
        code_objects_85e2120ee21bb235506d4616dab34864,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$connection_pool,
        mod_consts.const_str_digest_f89f0eedeb46c3a8f4ccce659a7550fc,
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

static function_impl_code const function_table_httpcore$_sync$connection_pool[] = {
impl_httpcore$_sync$connection_pool$$$function__1___init__,
impl_httpcore$_sync$connection_pool$$$function__2_assign_to_connection,
impl_httpcore$_sync$connection_pool$$$function__3_clear_connection,
impl_httpcore$_sync$connection_pool$$$function__4_wait_for_connection,
impl_httpcore$_sync$connection_pool$$$function__5_is_queued,
impl_httpcore$_sync$connection_pool$$$function__6___init__,
impl_httpcore$_sync$connection_pool$$$function__7_create_connection,
impl_httpcore$_sync$connection_pool$$$function__8_connections,
impl_httpcore$_sync$connection_pool$$$function__9_handle_request,
impl_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections,
impl_httpcore$_sync$connection_pool$$$function__11__close_connections,
impl_httpcore$_sync$connection_pool$$$function__12_close,
impl_httpcore$_sync$connection_pool$$$function__13___enter__,
impl_httpcore$_sync$connection_pool$$$function__14___exit__,
impl_httpcore$_sync$connection_pool$$$function__15___repr__,
impl_httpcore$_sync$connection_pool$$$function__16___init__,
impl_httpcore$_sync$connection_pool$$$function__17___iter__,
impl_httpcore$_sync$connection_pool$$$function__18_close,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpcore$_sync$connection_pool);
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
        module_httpcore$_sync$connection_pool,
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
        function_table_httpcore$_sync$connection_pool,
        sizeof(function_table_httpcore$_sync$connection_pool) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpcore._sync.connection_pool";
#endif

// Internal entry point for module code.
PyObject *module_code_httpcore$_sync$connection_pool(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore$_sync$connection_pool");

    // Store the module for future use.
    module_httpcore$_sync$connection_pool = module;

    moduledict_httpcore$_sync$connection_pool = MODULE_DICT(module_httpcore$_sync$connection_pool);

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
        PRINT_STRING("httpcore$_sync$connection_pool: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore$_sync$connection_pool: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpcore$_sync$connection_pool: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore._sync.connection_pool" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpcore$_sync$connection_pool\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_sync$connection_pool,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$connection_pool,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$connection_pool,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$connection_pool,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$connection_pool,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_sync$connection_pool);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpcore$_sync$connection_pool);
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

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool;
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
PyObject *locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
int tmp_res;
PyObject *locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43 = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpcore$_sync$connection_pool = MAKE_MODULE_FRAME(code_objects_7c7ecb01645693a360d2a2178e362f2a, module_httpcore$_sync$connection_pool);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpcore$_sync$connection_pool$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpcore$_sync$connection_pool$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_SyncBackend_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 8;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_SyncBackend,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_SyncBackend);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncBackend, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_SOCKET_OPTION_str_plain_NetworkBackend_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 9;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_SOCKET_OPTION,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_SOCKET_OPTION);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKET_OPTION, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_NetworkBackend,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_NetworkBackend);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkBackend, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_d46bb39f0795caf97cadf6525350cf75_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 10;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_ConnectionNotAvailable,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ConnectionNotAvailable);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable, tmp_assign_source_14);
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
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_UnsupportedProtocol,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_UnsupportedProtocol);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_5 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_8445987f7ba1146b2d2041a6751c7c0f_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 11;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_Origin,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Origin);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Origin, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_Proxy,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Proxy);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Proxy, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__synchronization;
tmp_globals_arg_value_6 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_08cd96082ec1e08d66521bc6801cdac0_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 12;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_10 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_Event,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Event);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_11 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_ShieldCancellation,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ShieldCancellation);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ShieldCancellation, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_12 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_ThreadLock,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ThreadLock);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadLock, tmp_assign_source_24);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_connection;
tmp_globals_arg_value_7 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_HTTPConnection_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 13;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_HTTPConnection,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_HTTPConnection);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnection, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_interfaces;
tmp_globals_arg_value_8 = (PyObject *)moduledict_httpcore$_sync$connection_pool;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ConnectionInterface_str_plain_RequestInterface_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 14;
tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_14 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_ConnectionInterface,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_ConnectionInterface);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionInterface, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_15 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_httpcore$_sync$connection_pool,
        mod_consts.const_str_plain_RequestInterface,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_RequestInterface);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestInterface, tmp_assign_source_28);
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
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
// Tried code:
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_266f9e94b2e71ec9e8691775f6cbd94b;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_PoolRequest;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f8c409c4d84bb9d9d5363c59aef4fd3d);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_661fb0df8d3f46549821436fc3b3ae08);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__2_assign_to_connection(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, mod_consts.const_str_plain_assign_to_connection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__3_clear_connection(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, mod_consts.const_str_plain_clear_connection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_4;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e2837fa3bd6c7a82606a261477b2efa1);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__4_wait_for_connection(tstate, tmp_defaults_1, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, mod_consts.const_str_plain_wait_for_connection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__5_is_queued(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, mod_consts.const_str_plain_is_queued, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_f37e4a7f36d8d0f5cd7486dbf19328ba_tuple;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_PoolRequest;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 17;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_32;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_31 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17);
locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17);
locals_httpcore$_sync$connection_pool$$$class__1_PoolRequest_17 = NULL;
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
exception_lineno = 17;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolRequest, tmp_assign_source_31);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_httpcore$_sync$connection_pool$RequestInterface(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestInterface);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto try_except_handler_9;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
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
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_ConnectionPool;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 43;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_9;
}
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 43;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 43;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_38;
}
branch_end_1:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_266f9e94b2e71ec9e8691775f6cbd94b;
tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_3178fe01996e8cfd7622dc76d29b4940;
tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectionPool;
tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_43;
tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2 = MAKE_CLASS_FRAME(tstate, code_objects_de362e3d92735874eb2ccb41e881415f, module_httpcore$_sync$connection_pool, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2);
assert(Py_REFCNT(frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_6;
tmp_defaults_2 = mod_consts.const_tuple_4c6be1a517ac1c0e6ed34d8cac77263f_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_297c340f5ccc52913b5f08c51dabff18);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__6___init__(tstate, tmp_defaults_2, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_ac4616f3ad437ceccda40df832f1439d);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__7_create_connection(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain_create_connection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_8;
tmp_called_value_3 = PyObject_GetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_3e869b3a6975f5e69d1ef15de6842b76);

tmp_args_element_value_1 = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__8_connections(tstate, tmp_annotations_8);

frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2->m_frame.f_lineno = 181;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain_connections, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__9_handle_request(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain_handle_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_3e869b3a6975f5e69d1ef15de6842b76);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__10__assign_requests_to_connections(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain__assign_requests_to_connections, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_28cd2ae719e4ae225eac4c03d61a63bb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__11__close_connections(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain__close_connections, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__12_close(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_232b9d39832ce7d5220eedb0808f1fb4);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__13___enter__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_14;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e2c7ebbf2f85700328f12d18cbe86d13);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__14___exit__(tstate, tmp_defaults_3, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__15___repr__(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_11;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_ab265f0b2d65659856e4fff924b79f26_tuple;
tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
branch_no_3:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_ConnectionPool;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 43;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_11;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_39 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43);
locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43);
locals_httpcore$_sync$connection_pool$$$class__2_ConnectionPool_43 = NULL;
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
exception_lineno = 43;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionPool, tmp_assign_source_39);
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
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_42;
}
// Tried code:
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_266f9e94b2e71ec9e8691775f6cbd94b;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_PoolByteStream;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_389;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_3b82a348bb826a452988c5d1e2d7a0c2);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__16___init__(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__17___iter__(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$connection_pool$$$function__18_close(tstate, tmp_annotations_18);

tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_20a2f134670b4580065adf10b6a27da6_tuple;
tmp_result = DICT_SET_ITEM(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
tmp_called_value_5 = (PyObject *)&PyType_Type;
tmp_tuple_element_6 = mod_consts.const_str_plain_PoolByteStream;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_httpcore$_sync$connection_pool->m_frame.f_lineno = 389;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;

    goto try_except_handler_14;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_44;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_43 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_43);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389);
locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389);
locals_httpcore$_sync$connection_pool$$$class__3_PoolByteStream_389 = NULL;
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
exception_lineno = 389;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolByteStream, tmp_assign_source_43);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$_sync$connection_pool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$_sync$connection_pool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$_sync$connection_pool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpcore$_sync$connection_pool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore$_sync$connection_pool", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore._sync.connection_pool" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpcore$_sync$connection_pool);
    return module_httpcore$_sync$connection_pool;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$connection_pool, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_sync$connection_pool", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

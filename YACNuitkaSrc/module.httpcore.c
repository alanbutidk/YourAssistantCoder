/* Generated code for Python module 'httpcore'
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



/* The "module_httpcore" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore;
PyDictObject *moduledict_httpcore;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_643b22067dc8845705e2c012d9b6021c;
PyObject *const_str_digest_9e4880a62ee5a500fee258d6d3ed5678;
PyObject *const_str_plain_environ;
PyObject *const_tuple_a86c03a3adbfec0402c8a03b313b23a7_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain__api;
PyObject *const_tuple_str_plain_request_str_plain_stream_tuple;
PyObject *const_str_plain_request;
PyObject *const_str_plain_stream;
PyObject *const_str_plain__async;
PyObject *const_tuple_04581b1032c81a6eccc2e9e00b72ec63_tuple;
PyObject *const_str_plain_AsyncConnectionInterface;
PyObject *const_str_plain_AsyncConnectionPool;
PyObject *const_str_plain_AsyncHTTP2Connection;
PyObject *const_str_plain_AsyncHTTP11Connection;
PyObject *const_str_plain_AsyncHTTPConnection;
PyObject *const_str_plain_AsyncHTTPProxy;
PyObject *const_str_plain_AsyncSOCKSProxy;
PyObject *const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
PyObject *const_tuple_45729c35fac09074f14c42f74d5be075_tuple;
PyObject *const_str_plain_SOCKET_OPTION;
PyObject *const_str_plain_AsyncNetworkBackend;
PyObject *const_str_plain_AsyncNetworkStream;
PyObject *const_str_plain_NetworkBackend;
PyObject *const_str_plain_NetworkStream;
PyObject *const_str_digest_393a907239d1b7d899e02adcf93ef054;
PyObject *const_tuple_4b0f53e1666688702d511c9aef35dbc2_tuple;
PyObject *const_str_plain_AsyncMockBackend;
PyObject *const_str_plain_AsyncMockStream;
PyObject *const_str_plain_MockBackend;
PyObject *const_str_plain_MockStream;
PyObject *const_str_digest_efa31d579adeff7e25b40d397a38eb0d;
PyObject *const_tuple_str_plain_SyncBackend_tuple;
PyObject *const_str_plain_SyncBackend;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_1ea1d0deae8d6381b8762a75332e4cf3_tuple;
PyObject *const_str_plain_ConnectError;
PyObject *const_str_plain_ConnectionNotAvailable;
PyObject *const_str_plain_ConnectTimeout;
PyObject *const_str_plain_LocalProtocolError;
PyObject *const_str_plain_NetworkError;
PyObject *const_str_plain_PoolTimeout;
PyObject *const_str_plain_ProtocolError;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_plain_ReadError;
PyObject *const_str_plain_ReadTimeout;
PyObject *const_str_plain_RemoteProtocolError;
PyObject *const_str_plain_TimeoutException;
PyObject *const_str_plain_UnsupportedProtocol;
PyObject *const_str_plain_WriteError;
PyObject *const_str_plain_WriteTimeout;
PyObject *const_str_plain__models;
PyObject *const_tuple_7bc2db9686ece87a80bd7730d1a918e3_tuple;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_Origin;
PyObject *const_str_plain_Proxy;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_Response;
PyObject *const_str_plain__ssl;
PyObject *const_tuple_str_plain_default_ssl_context_tuple;
PyObject *const_str_plain_default_ssl_context;
PyObject *const_str_plain__sync;
PyObject *const_tuple_fec546900471ca86f4ceedb8ba49d2d7_tuple;
PyObject *const_str_plain_ConnectionInterface;
PyObject *const_str_plain_ConnectionPool;
PyObject *const_str_plain_HTTP2Connection;
PyObject *const_str_plain_HTTP11Connection;
PyObject *const_str_plain_HTTPConnection;
PyObject *const_str_plain_HTTPProxy;
PyObject *const_str_plain_SOCKSProxy;
PyObject *const_str_digest_013a8fb2d21e970c93919089b542718f;
PyObject *const_tuple_str_plain_AnyIOBackend_tuple;
PyObject *const_str_plain_AnyIOBackend;
PyObject *const_str_plain_httpcore;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_54;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_544b2e8c81a9192ca14e9b4d1bdfa7d4;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_b85c918fa6123061d5cd6eb397877310;
PyObject *const_tuple_str_plain_TrioBackend_tuple;
PyObject *const_str_plain_TrioBackend;
PyObject *const_int_pos_67;
PyObject *const_str_digest_9b7268ed56d327079cd2486fae155e31;
PyObject *const_list_07b5b9a51a3e5dee5e41035e471aa04f_list;
PyObject *const_str_digest_6d7295f83edc7950989ab19a27d8736f;
PyObject *const_str_plain___version__;
PyObject *const_str_plain___locals;
PyObject *const_str_plain___name;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_tuple_str_plain____str_plain_SOCKET_OPTION_tuple_tuple;
PyObject *const_str_digest_9d131c40598cf9c191637a8d52d26b64;
PyObject *const_str_digest_9d511b9506e26c5cee3ac19d45e1ef02;
PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_msg_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[96];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpcore"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_643b22067dc8845705e2c012d9b6021c);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e4880a62ee5a500fee258d6d3ed5678);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_a86c03a3adbfec0402c8a03b313b23a7_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__api);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_stream_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__async);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_04581b1032c81a6eccc2e9e00b72ec63_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionInterface);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP2Connection);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP11Connection);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPConnection);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPProxy);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSOCKSProxy);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_45729c35fac09074f14c42f74d5be075_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkBackend);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkStream);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkBackend);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkStream);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_393a907239d1b7d899e02adcf93ef054);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_4b0f53e1666688702d511c9aef35dbc2_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncMockBackend);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncMockStream);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockBackend);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockStream);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncBackend_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncBackend);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_1ea1d0deae8d6381b8762a75332e4cf3_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectError);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionNotAvailable);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkError);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolTimeout);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadError);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutException);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteError);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteTimeout);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_7bc2db9686ece87a80bd7730d1a918e3_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Origin);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Proxy);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_ssl_context_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_ssl_context);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__sync);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_fec546900471ca86f4ceedb8ba49d2d7_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionInterface);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionPool);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Connection);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP11Connection);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnection);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPProxy);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKSProxy);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_013a8fb2d21e970c93919089b542718f);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyIOBackend_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyIOBackend);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpcore);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_54);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_544b2e8c81a9192ca14e9b4d1bdfa7d4);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_b85c918fa6123061d5cd6eb397877310);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TrioBackend_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_TrioBackend);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_67);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b7268ed56d327079cd2486fae155e31);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_list_07b5b9a51a3e5dee5e41035e471aa04f_list);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d7295f83edc7950989ab19a27d8736f);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain___locals);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain___name);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_str_plain____str_plain_SOCKET_OPTION_tuple_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d131c40598cf9c191637a8d52d26b64);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d511b9506e26c5cee3ac19d45e1ef02);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_msg_tuple);
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
void checkModuleConstants_httpcore(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_643b22067dc8845705e2c012d9b6021c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_643b22067dc8845705e2c012d9b6021c);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e4880a62ee5a500fee258d6d3ed5678));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e4880a62ee5a500fee258d6d3ed5678);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_a86c03a3adbfec0402c8a03b313b23a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a86c03a3adbfec0402c8a03b313b23a7_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__api));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_str_plain_stream_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__async));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__async);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_04581b1032c81a6eccc2e9e00b72ec63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_04581b1032c81a6eccc2e9e00b72ec63_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionInterface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConnectionInterface);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConnectionPool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConnectionPool);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP2Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTP2Connection);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTP11Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTP11Connection);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTPConnection);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncHTTPProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncHTTPProxy);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncSOCKSProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncSOCKSProxy);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_45729c35fac09074f14c42f74d5be075_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_45729c35fac09074f14c42f74d5be075_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKET_OPTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKET_OPTION);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncNetworkBackend);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncNetworkStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncNetworkStream);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NetworkBackend);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NetworkStream);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_393a907239d1b7d899e02adcf93ef054));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_393a907239d1b7d899e02adcf93ef054);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_4b0f53e1666688702d511c9aef35dbc2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4b0f53e1666688702d511c9aef35dbc2_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncMockBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncMockBackend);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncMockStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncMockStream);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MockBackend);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MockStream);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncBackend_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncBackend);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_1ea1d0deae8d6381b8762a75332e4cf3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1ea1d0deae8d6381b8762a75332e4cf3_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectError);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionNotAvailable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionNotAvailable);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectTimeout);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocalProtocolError);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_NetworkError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NetworkError);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PoolTimeout);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadError);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadTimeout);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RemoteProtocolError);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutException);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedProtocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnsupportedProtocol);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteError);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteTimeout);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_7bc2db9686ece87a80bd7730d1a918e3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7bc2db9686ece87a80bd7730d1a918e3_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Origin);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Proxy);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ssl);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_ssl_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_ssl_context_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_ssl_context);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sync);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_fec546900471ca86f4ceedb8ba49d2d7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fec546900471ca86f4ceedb8ba49d2d7_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionInterface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionInterface);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionPool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionPool);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTP2Connection);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP11Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTP11Connection);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPConnection);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPProxy);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCKSProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCKSProxy);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_013a8fb2d21e970c93919089b542718f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_013a8fb2d21e970c93919089b542718f);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyIOBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyIOBackend_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyIOBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyIOBackend);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpcore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpcore);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_54));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_54);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_544b2e8c81a9192ca14e9b4d1bdfa7d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_544b2e8c81a9192ca14e9b4d1bdfa7d4);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_b85c918fa6123061d5cd6eb397877310));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b85c918fa6123061d5cd6eb397877310);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TrioBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TrioBackend_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_TrioBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TrioBackend);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_67));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_67);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b7268ed56d327079cd2486fae155e31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b7268ed56d327079cd2486fae155e31);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_list_07b5b9a51a3e5dee5e41035e471aa04f_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_07b5b9a51a3e5dee5e41035e471aa04f_list);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d7295f83edc7950989ab19a27d8736f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d7295f83edc7950989ab19a27d8736f);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain___locals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___locals);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain___name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___name);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_str_plain____str_plain_SOCKET_OPTION_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_str_plain____str_plain_SOCKET_OPTION_tuple_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d131c40598cf9c191637a8d52d26b64));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d131c40598cf9c191637a8d52d26b64);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d511b9506e26c5cee3ac19d45e1ef02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d511b9506e26c5cee3ac19d45e1ef02);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_msg_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_httpcore$__all__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___all__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___all__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___all__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___all__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___all__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___all__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___all__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___all__);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$__locals(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___locals);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___locals, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___locals);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___locals, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$__name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_httpcore$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpcore->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpcore->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpcore->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_bf8511bbbb3672d9a5b593f6a2b76530;
static PyCodeObject *code_objects_cacaae92efd843643df52e460c8e958c;
static PyCodeObject *code_objects_8aedc13ee362f7a38b658b3a07ed43fb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9d131c40598cf9c191637a8d52d26b64); CHECK_OBJECT(module_filename_obj);
code_objects_bf8511bbbb3672d9a5b593f6a2b76530 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_9d511b9506e26c5cee3ac19d45e1ef02, mod_consts.const_str_digest_9d511b9506e26c5cee3ac19d45e1ef02, NULL, NULL, 0, 0, 0);
code_objects_cacaae92efd843643df52e460c8e958c = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_544b2e8c81a9192ca14e9b4d1bdfa7d4, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_msg_tuple, NULL, 1, 0, 0);
code_objects_8aedc13ee362f7a38b658b3a07ed43fb = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_9b7268ed56d327079cd2486fae155e31, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_msg_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_httpcore$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_httpcore$$$function__2___init__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_httpcore$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_httpcore$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$$$function__1___init__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cacaae92efd843643df52e460c8e958c, module_httpcore, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$$$function__1___init__->m_type_description == NULL);
frame_frame_httpcore$$$function__1___init__ = cache_frame_frame_httpcore$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$$$function__1___init__);
assert(Py_REFCNT(frame_frame_httpcore$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_643b22067dc8845705e2c012d9b6021c;
frame_frame_httpcore$$$function__1___init__->m_frame.f_lineno = 59;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooN";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$$$function__1___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$$$function__1___init__ == cache_frame_frame_httpcore$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$$$function__1___init__);
    cache_frame_frame_httpcore$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$$$function__1___init__);

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

}


static PyObject *impl_httpcore$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_httpcore$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpcore$$$function__2___init__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpcore$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_httpcore$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpcore$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpcore$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8aedc13ee362f7a38b658b3a07ed43fb, module_httpcore, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpcore$$$function__2___init__->m_type_description == NULL);
frame_frame_httpcore$$$function__2___init__ = cache_frame_frame_httpcore$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore$$$function__2___init__);
assert(Py_REFCNT(frame_frame_httpcore$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9e4880a62ee5a500fee258d6d3ed5678;
frame_frame_httpcore$$$function__2___init__->m_frame.f_lineno = 70;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 70;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooN";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpcore$$$function__2___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_httpcore$$$function__2___init__ == cache_frame_frame_httpcore$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpcore$$$function__2___init__);
    cache_frame_frame_httpcore$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_httpcore$$$function__2___init__);

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

}



static PyObject *MAKE_FUNCTION_httpcore$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_544b2e8c81a9192ca14e9b4d1bdfa7d4,
#endif
        code_objects_cacaae92efd843643df52e460c8e958c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_httpcore,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$$$function__2___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9b7268ed56d327079cd2486fae155e31,
#endif
        code_objects_8aedc13ee362f7a38b658b3a07ed43fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_httpcore,
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

static function_impl_code const function_table_httpcore[] = {
impl_httpcore$$$function__1___init__,
impl_httpcore$$$function__2___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpcore);
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
        module_httpcore,
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
        function_table_httpcore,
        sizeof(function_table_httpcore) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpcore";
#endif

// Internal entry point for module code.
PyObject *module_code_httpcore(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore");

    // Store the module for future use.
    module_httpcore = module;

    moduledict_httpcore = MODULE_DICT(module_httpcore);

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
        PRINT_STRING("httpcore: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpcore: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpcore\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpcore);
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

        UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpcore;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_httpcore$$$class__1_AnyIOBackend_54 = NULL;
PyObject *tmp_dictset_value;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
PyObject *locals_httpcore$$$class__2_TrioBackend_67 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpcore = MAKE_MODULE_FRAME(code_objects_bf8511bbbb3672d9a5b593f6a2b76530, module_httpcore);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpcore);
assert(Py_REFCNT(frame_frame_httpcore) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_httpcore->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_httpcore->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_httpcore->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_httpcore->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_a86c03a3adbfec0402c8a03b313b23a7_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpcore$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpcore$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_httpcore$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_httpcore$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__api;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_request_str_plain_stream_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 1;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_request,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_request);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_request, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_stream,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_stream);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_stream, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__async;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_04581b1032c81a6eccc2e9e00b72ec63_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 2;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncConnectionInterface,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AsyncConnectionInterface);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionInterface, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_AsyncConnectionPool);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConnectionPool, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncHTTP2Connection,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AsyncHTTP2Connection);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP2Connection, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncHTTP11Connection,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_AsyncHTTP11Connection);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTP11Connection, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncHTTPConnection,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_AsyncHTTPConnection);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPConnection, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncHTTPProxy,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_AsyncHTTPProxy);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncHTTPProxy, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncSOCKSProxy,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_AsyncSOCKSProxy);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncSOCKSProxy, tmp_assign_source_15);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_97e6d8ff4fbed34660f4fb50204c8dfc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_45729c35fac09074f14c42f74d5be075_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 11;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
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
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_SOCKET_OPTION,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_SOCKET_OPTION);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKET_OPTION, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncNetworkBackend,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_AsyncNetworkBackend);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncNetworkBackend, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncNetworkStream,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_AsyncNetworkStream);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncNetworkStream, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_NetworkBackend,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_NetworkBackend);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkBackend, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_NetworkStream,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_NetworkStream);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkStream, tmp_assign_source_21);
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
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_393a907239d1b7d899e02adcf93ef054;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_4b0f53e1666688702d511c9aef35dbc2_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 18;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncMockBackend,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_AsyncMockBackend);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncMockBackend, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AsyncMockStream,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_AsyncMockStream);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncMockStream, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_MockBackend,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_MockBackend);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_MockBackend, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_18 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_MockStream,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_MockStream);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_MockStream, tmp_assign_source_26);
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
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_efa31d579adeff7e25b40d397a38eb0d;
tmp_globals_arg_value_5 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_SyncBackend_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 19;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_SyncBackend,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_SyncBackend);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncBackend, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_6 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_1ea1d0deae8d6381b8762a75332e4cf3_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 20;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_20 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ConnectError,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_ConnectError);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectError, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_21 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ConnectionNotAvailable,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_ConnectionNotAvailable);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionNotAvailable, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_22 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ConnectTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ConnectTimeout);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_23 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_LocalProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_24 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_NetworkError,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_NetworkError);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_NetworkError, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_25 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_PoolTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_PoolTimeout);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolTimeout, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_26 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_27 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ProxyError,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_ProxyError);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_28 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ReadError,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ReadError);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadError, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_29 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ReadTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ReadTimeout);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_30 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_RemoteProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_31 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_TimeoutException,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_TimeoutException);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutException, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_32 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_UnsupportedProtocol,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_UnsupportedProtocol);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedProtocol, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_33 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_WriteError,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_WriteError);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteError, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_34 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_WriteTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_WriteTimeout);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteTimeout, tmp_assign_source_43);
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
PyObject *tmp_assign_source_44;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_7 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_7bc2db9686ece87a80bd7730d1a918e3_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 37;
tmp_assign_source_44 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_35 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_URL,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_URL);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_URL, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_36 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_Origin,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_Origin);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_Origin, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_37 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_Proxy,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_Proxy);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_Proxy, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_38 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_39 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_49);
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
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__ssl;
tmp_globals_arg_value_8 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_default_ssl_context_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 38;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_default_ssl_context,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_default_ssl_context);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_default_ssl_context, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__sync;
tmp_globals_arg_value_9 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_fec546900471ca86f4ceedb8ba49d2d7_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 39;
tmp_assign_source_51 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_51;
}
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_41 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ConnectionInterface,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_ConnectionInterface);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionInterface, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_42 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_ConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_ConnectionPool);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionPool, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_43 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_HTTP2Connection,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_HTTP2Connection);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP2Connection, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_44 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_HTTP11Connection,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_HTTP11Connection);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP11Connection, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_45 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_HTTPConnection,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_HTTPConnection);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnection, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_46 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_HTTPProxy,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_HTTPProxy);
}

if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPProxy, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_47;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_47 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_SOCKSProxy,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_SOCKSProxy);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_SOCKSProxy, tmp_assign_source_58);
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
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_013a8fb2d21e970c93919089b542718f;
tmp_globals_arg_value_10 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_AnyIOBackend_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 51;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_AnyIOBackend,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_AnyIOBackend);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyIOBackend, tmp_assign_source_59);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore, exception_keeper_lineno_8);
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
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_61;
}
// Tried code:
{
PyObject *tmp_assign_source_62;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpcore$$$class__1_AnyIOBackend_54 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_plain_httpcore;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__1_AnyIOBackend_54, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AnyIOBackend;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__1_AnyIOBackend_54, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_54;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__1_AnyIOBackend_54, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_httpcore$$$function__1___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__1_AnyIOBackend_54, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__1_AnyIOBackend_54, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_3 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_AnyIOBackend;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_httpcore$$$class__1_AnyIOBackend_54;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpcore->m_frame.f_lineno = 54;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_63;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_62 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_62);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_httpcore$$$class__1_AnyIOBackend_54);
locals_httpcore$$$class__1_AnyIOBackend_54 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$$$class__1_AnyIOBackend_54);
locals_httpcore$$$class__1_AnyIOBackend_54 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 54;
goto try_except_handler_10;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyIOBackend, tmp_assign_source_62);
}
goto try_end_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_9;
// End of try:
try_end_9:;
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
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 50;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore->m_frame)) {
        frame_frame_httpcore->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_9;
branch_end_1:;
goto try_end_10;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_8;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_8:;
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_49;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_b85c918fa6123061d5cd6eb397877310;
tmp_globals_arg_value_11 = (PyObject *)moduledict_httpcore;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_TrioBackend_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_httpcore->m_frame.f_lineno = 64;
tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_13;
}
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_httpcore,
        mod_consts.const_str_plain_TrioBackend,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_TrioBackend);
}

CHECK_OBJECT(tmp_import_name_from_49);
Py_DECREF(tmp_import_name_from_49);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_TrioBackend, tmp_assign_source_64);
}
goto try_end_11;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore, exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore, exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_13);
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
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_66;
}
// Tried code:
{
PyObject *tmp_assign_source_67;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpcore$$$class__2_TrioBackend_67 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_plain_httpcore;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__2_TrioBackend_67, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_TrioBackend;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__2_TrioBackend_67, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_67;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__2_TrioBackend_67, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_httpcore$$$function__2___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__2_TrioBackend_67, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_httpcore$$$class__2_TrioBackend_67, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_TrioBackend;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_httpcore$$$class__2_TrioBackend_67;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpcore->m_frame.f_lineno = 67;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_17;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_68;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_67 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_67);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_httpcore$$$class__2_TrioBackend_67);
locals_httpcore$$$class__2_TrioBackend_67 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpcore$$$class__2_TrioBackend_67);
locals_httpcore$$$class__2_TrioBackend_67 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

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
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 67;
goto try_except_handler_15;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain_TrioBackend, tmp_assign_source_67);
}
goto try_end_12;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_14;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 63;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpcore->m_frame)) {
        frame_frame_httpcore->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_14;
branch_end_2:;
goto try_end_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_11;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_11:;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = LIST_COPY(tstate, mod_consts.const_list_07b5b9a51a3e5dee5e41035e471aa04f_list);
UPDATE_STRING_DICT1(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = mod_consts.const_str_digest_6d7295f83edc7950989ab19a27d8736f;
UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = (PyObject *)moduledict_httpcore;
UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___locals, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_httpcore$__all__(tstate);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_72 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_72;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_73;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_73 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_73 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 138;
        goto try_except_handler_18;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_73;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_74;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_74 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_httpcore, (Nuitka_StringObject *)mod_consts.const_str_plain___name, tmp_assign_source_74);
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_httpcore$__name(tstate);
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_18;
}
frame_frame_httpcore->m_frame.f_lineno = 140;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_tuple_str_plain____str_plain_SOCKET_OPTION_tuple_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_18;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto try_except_handler_18;
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
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_name_value_12;
PyObject *tmp_value_value_1;
PyObject *tmp_capi_result_1;
tmp_expression_value_5 = module_var_accessor_httpcore$__locals(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___locals);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto try_except_handler_18;
}
tmp_subscript_value_1 = module_var_accessor_httpcore$__name(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___name);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto try_except_handler_18;
}
tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto try_except_handler_18;
}
tmp_name_value_12 = const_str_plain___module__;
tmp_value_value_1 = mod_consts.const_str_plain_httpcore;
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_4, tmp_name_value_12, tmp_value_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto try_except_handler_18;
}
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_18;
}
goto loop_start_1;
loop_end_1:;
goto try_end_14;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_14:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpcore, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpcore->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpcore, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpcore);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpcore" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpcore);
    return module_httpcore;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

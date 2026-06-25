/* Generated code for Python module 'google$auth$aio$transport$sessions'
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



/* The "module_google$auth$aio$transport$sessions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$aio$transport$sessions;
PyDictObject *moduledict_google$auth$aio$transport$sessions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_9b3a3b8ab95a82e6727f0e52b36478dd;
PyObject *const_str_plain_time;
PyObject *const_str_plain_monotonic;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain__remaining_time;
PyObject *const_str_digest_7a0741d3a3386cb64baf818ec4e116c5;
PyObject *const_str_plain_with_timeout;
PyObject *const_str_digest_cee4378461b83c8164aa316cbcaf0867;
PyObject *const_str_plain_timeout_guard;
PyObject *const_str_plain_start;
PyObject *const_str_plain_total_timeout;
PyObject *const_str_plain_TimeoutError;
PyObject *const_str_digest_8016cdba6bea264e87a5f0b8ad874486;
PyObject *const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_wait_for;
PyObject *const_str_plain_coro;
PyObject *const_str_digest_3f5a73b447ad30b27bafd74c7686e189;
PyObject *const_str_digest_221d4736c186173097c8cbd48310fa60;
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_InvalidType;
PyObject *const_str_digest_44380e49d847b0978ff79bb48bac5e14;
PyObject *const_str_digest_05affbe92acd5a43f20afa072fc8ed4f;
PyObject *const_str_plain__credentials;
PyObject *const_str_plain_AIOHTTP_INSTALLED;
PyObject *const_str_plain_AiohttpRequest;
PyObject *const_str_plain__is_mtls;
PyObject *const_str_plain__mtls_init_task;
PyObject *const_str_plain__cached_cert;
PyObject *const_str_plain_TransportError;
PyObject *const_tuple_str_digest_fc0e6d79dfb3c38d0541fad94918d130_tuple;
PyObject *const_str_plain__auth_request;
PyObject *const_str_digest_12cd158d4f27e96ba5392bef2b7f4797;
PyObject *const_str_plain_self;
PyObject *const_str_plain__do_configure;
PyObject *const_str_digest_b476479a0d573eb9f90742796f1f8c3b;
PyObject *const_str_plain_create_task;
PyObject *const_str_plain_configure_mtls_channel;
PyObject *const_str_digest_31c1803ba32e80bdb4eff898a1e7ec5e;
PyObject *const_str_plain_mtls;
PyObject *const_str_plain__run_in_executor;
PyObject *const_str_plain_google;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_transport;
PyObject *const_str_plain__mtls_helper;
PyObject *const_str_plain_check_use_client_cert;
PyObject *const_str_plain_get_client_cert_and_key;
PyObject *const_str_plain_client_cert_callback;
PyObject *const_str_plain_make_client_cert_ssl_context;
PyObject *const_str_plain_aiohttp;
PyObject *const_str_plain_TCPConnector;
PyObject *const_tuple_str_plain_ssl_tuple;
PyObject *const_str_plain_ClientSession;
PyObject *const_tuple_str_plain_connector_tuple;
PyObject *const_tuple_str_plain_session_tuple;
PyObject *const_str_plain_ClientCertError;
PyObject *const_str_plain_MutualTLSChannelError;
PyObject *const_str_digest_de6bc3591f004dadbd3b8175a8bab9c9;
PyObject *const_str_plain__exponential_backoff;
PyObject *const_str_plain_AsyncExponentialBackoff;
PyObject *const_str_plain_total_attempts;
PyObject *const_tuple_str_plain_total_attempts_tuple;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_max_allowed_time;
PyObject *const_str_plain_before_request;
PyObject *const_str_plain_method;
PyObject *const_str_plain_url;
PyObject *const_str_plain_ClientTimeout;
PyObject *const_str_plain_total;
PyObject *const_tuple_type_int_type_float_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_plain_actual_timeout;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_response;
PyObject *const_str_plain_request;
PyObject *const_str_digest_ccf9f09c5a9f8f9fea157012ba153b8d;
PyObject *const_str_digest_9b3efd1297986409dc558c0e68419abe;
PyObject *const_str_plain_GET;
PyObject *const_str_digest_2e41bc93d382ff286afcc096576178ef;
PyObject *const_str_plain_POST;
PyObject *const_str_plain_post;
PyObject *const_str_digest_4abe965b3f00289bc1faa405f81a4906;
PyObject *const_str_plain_PUT;
PyObject *const_str_plain_put;
PyObject *const_str_digest_12ae199570cd5d89444926b93e3d5256;
PyObject *const_str_plain_PATCH;
PyObject *const_str_plain_patch;
PyObject *const_str_digest_90df6b8a8c0bbdccfbba84792a07572f;
PyObject *const_str_plain_DELETE;
PyObject *const_str_plain_delete;
PyObject *const_str_digest_072feda80f3bd96378903a303e5a64af;
PyObject *const_str_digest_23f04d0fe4e60de83616d6dfbd048b9e;
PyObject *const_str_digest_f6440429f63e8466ced697bac1a070a3;
PyObject *const_str_digest_015e7eeb66d244f596843b8f0a38da5a;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_asynccontextmanager_tuple;
PyObject *const_str_plain_asynccontextmanager;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Union;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__exponential_backoff_str_plain_exceptions_tuple;
PyObject *const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1;
PyObject *const_tuple_str_plain_transport_tuple;
PyObject *const_str_digest_ced036a8dd44419291c265f31a9c9296;
PyObject *const_tuple_str_plain_Credentials_tuple;
PyObject *const_str_digest_c0ff43dd516001b189426b5de2ba23e2;
PyObject *const_tuple_str_plain_mtls_tuple;
PyObject *const_str_digest_9c754f3997648344cda997f9dda0ce3b;
PyObject *const_tuple_str_plain_TimeoutError_tuple;
PyObject *const_str_digest_76c4c07798963223889b12fc60a097b0;
PyObject *const_tuple_str_plain_ClientTimeout_tuple;
PyObject *const_tuple_type_ImportError_type_AttributeError_tuple;
PyObject *const_str_digest_7dc5a140662b24154616e907a3f54390;
PyObject *const_tuple_str_plain_Request_tuple;
PyObject *const_str_plain_Request;
PyObject *const_str_digest_4b00ce312a7bf0cfd5a3f1e049854eea;
PyObject *const_str_digest_28aced4135d0768c4ee50a8eca538edb;
PyObject *const_str_plain_AsyncAuthorizedSession;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_92;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain_auth_request;
PyObject *const_str_digest_71c8822808df2386f0efe02a82dc68fa;
PyObject *const_str_plain__DEFAULT_TIMEOUT_SECONDS;
PyObject *const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS;
PyObject *const_tuple_type_str_type_str_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_wraps;
PyObject *const_str_plain_is_mtls;
PyObject *const_str_digest_99a05734e213710e8e9f64f85c2ac7a9;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_tuple_e26aaf480b6a7321af156c58707e1245_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_ca4ebe36c80a3198babdb539a7c25ea3;
PyObject *const_str_digest_76aefdf44e0952f55f59bf226041ec9d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_2aa939ecb772e7a24697400e421edfee_tuple;
PyObject *const_tuple_d78728e851fe9c5524229697def6af4a_tuple;
PyObject *const_tuple_str_plain_client_cert_callback_str_plain_self_tuple;
PyObject *const_tuple_66f035fc552d556ac68a8170297dcc6d_tuple;
PyObject *const_tuple_str_plain_start_str_plain_total_timeout_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_9104cd655c308ce10221ff853edfa903_tuple;
PyObject *const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple;
PyObject *const_tuple_633400995e36c1ae59b64b4195775bab_tuple;
PyObject *const_tuple_9afeb9bc3d6fcd8b2732f1a6cc39e98f_tuple;
PyObject *const_tuple_468cecf7323fdc58440a93cd09f5cafd_tuple;
PyObject *const_tuple_str_plain__remaining_time_str_plain_total_timeout_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[160];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.aio.transport.sessions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b3a3b8ab95a82e6727f0e52b36478dd);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__remaining_time);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a0741d3a3386cb64baf818ec4e116c5);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_timeout);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_cee4378461b83c8164aa316cbcaf0867);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout_guard);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_timeout);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutError);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_8016cdba6bea264e87a5f0b8ad874486);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_coro);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f5a73b447ad30b27bafd74c7686e189);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_221d4736c186173097c8cbd48310fa60);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidType);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_44380e49d847b0978ff79bb48bac5e14);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_05affbe92acd5a43f20afa072fc8ed4f);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__credentials);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_AIOHTTP_INSTALLED);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_AiohttpRequest);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_mtls);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_init_task);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__cached_cert);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fc0e6d79dfb3c38d0541fad94918d130_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__auth_request);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_12cd158d4f27e96ba5392bef2b7f4797);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__do_configure);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_b476479a0d573eb9f90742796f1f8c3b);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_task);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_configure_mtls_channel);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_31c1803ba32e80bdb4eff898a1e7ec5e);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_mtls);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_in_executor);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_google);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_transport);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_use_client_cert);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_cert_callback);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_client_cert_ssl_context);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiohttp);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_TCPConnector);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientSession);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connector_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_de6bc3591f004dadbd3b8175a8bab9c9);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__exponential_backoff);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncExponentialBackoff);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_attempts);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_total_attempts_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_allowed_time);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_before_request);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientTimeout);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_total);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_actual_timeout);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccf9f09c5a9f8f9fea157012ba153b8d);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e41bc93d382ff286afcc096576178ef);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_POST);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_4abe965b3f00289bc1faa405f81a4906);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_PUT);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_put);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_12ae199570cd5d89444926b93e3d5256);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_PATCH);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_patch);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_90df6b8a8c0bbdccfbba84792a07572f);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_072feda80f3bd96378903a303e5a64af);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_23f04d0fe4e60de83616d6dfbd048b9e);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6440429f63e8466ced697bac1a070a3);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_015e7eeb66d244f596843b8f0a38da5a);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asynccontextmanager_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_asynccontextmanager);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exponential_backoff_str_plain_exceptions_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_ced036a8dd44419291c265f31a9c9296);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Credentials_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0ff43dd516001b189426b5de2ba23e2);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mtls_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TimeoutError_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientTimeout_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b00ce312a7bf0cfd5a3f1e049854eea);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_28aced4135d0768c4ee50a8eca538edb);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAuthorizedSession);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth_request);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_71c8822808df2386f0efe02a82dc68fa);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_mtls);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_99a05734e213710e8e9f64f85c2ac7a9);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_e26aaf480b6a7321af156c58707e1245_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca4ebe36c80a3198babdb539a7c25ea3);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_76aefdf44e0952f55f59bf226041ec9d);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_2aa939ecb772e7a24697400e421edfee_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_d78728e851fe9c5524229697def6af4a_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_cert_callback_str_plain_self_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_66f035fc552d556ac68a8170297dcc6d_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_total_timeout_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_9104cd655c308ce10221ff853edfa903_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_633400995e36c1ae59b64b4195775bab_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_9afeb9bc3d6fcd8b2732f1a6cc39e98f_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_468cecf7323fdc58440a93cd09f5cafd_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__remaining_time_str_plain_total_timeout_tuple);
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
void checkModuleConstants_google$auth$aio$transport$sessions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b3a3b8ab95a82e6727f0e52b36478dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b3a3b8ab95a82e6727f0e52b36478dd);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_monotonic);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__remaining_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__remaining_time);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a0741d3a3386cb64baf818ec4e116c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a0741d3a3386cb64baf818ec4e116c5);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_timeout);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_cee4378461b83c8164aa316cbcaf0867));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cee4378461b83c8164aa316cbcaf0867);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout_guard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout_guard);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_timeout);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutError);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_8016cdba6bea264e87a5f0b8ad874486));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8016cdba6bea264e87a5f0b8ad874486);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_for);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_coro));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coro);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f5a73b447ad30b27bafd74c7686e189));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f5a73b447ad30b27bafd74c7686e189);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_221d4736c186173097c8cbd48310fa60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_221d4736c186173097c8cbd48310fa60);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidType);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_44380e49d847b0978ff79bb48bac5e14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44380e49d847b0978ff79bb48bac5e14);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_05affbe92acd5a43f20afa072fc8ed4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05affbe92acd5a43f20afa072fc8ed4f);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credentials);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_AIOHTTP_INSTALLED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AIOHTTP_INSTALLED);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_AiohttpRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AiohttpRequest);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_mtls);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_init_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mtls_init_task);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__cached_cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cached_cert);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fc0e6d79dfb3c38d0541fad94918d130_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_fc0e6d79dfb3c38d0541fad94918d130_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__auth_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__auth_request);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_12cd158d4f27e96ba5392bef2b7f4797));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12cd158d4f27e96ba5392bef2b7f4797);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__do_configure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__do_configure);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_b476479a0d573eb9f90742796f1f8c3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b476479a0d573eb9f90742796f1f8c3b);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_task);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_configure_mtls_channel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_configure_mtls_channel);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_31c1803ba32e80bdb4eff898a1e7ec5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31c1803ba32e80bdb4eff898a1e7ec5e);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mtls);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_in_executor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_in_executor);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_google));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transport);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mtls_helper);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_use_client_cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_use_client_cert);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_client_cert_and_key);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_cert_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_cert_callback);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_client_cert_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_client_cert_ssl_context);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiohttp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiohttp);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_TCPConnector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TCPConnector);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ssl_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientSession);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connector_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_connector_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_session_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientCertError);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutualTLSChannelError);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_de6bc3591f004dadbd3b8175a8bab9c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de6bc3591f004dadbd3b8175a8bab9c9);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__exponential_backoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exponential_backoff);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncExponentialBackoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncExponentialBackoff);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_attempts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_attempts);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_total_attempts_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_total_attempts_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_allowed_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_allowed_time);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_before_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before_request);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientTimeout);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_total));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_float_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_actual_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_actual_timeout);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccf9f09c5a9f8f9fea157012ba153b8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccf9f09c5a9f8f9fea157012ba153b8d);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e41bc93d382ff286afcc096576178ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e41bc93d382ff286afcc096576178ef);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_POST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POST);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_4abe965b3f00289bc1faa405f81a4906));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4abe965b3f00289bc1faa405f81a4906);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_PUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PUT);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_put));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_put);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_12ae199570cd5d89444926b93e3d5256));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12ae199570cd5d89444926b93e3d5256);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_PATCH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PATCH);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_patch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_patch);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_90df6b8a8c0bbdccfbba84792a07572f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90df6b8a8c0bbdccfbba84792a07572f);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DELETE);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_072feda80f3bd96378903a303e5a64af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_072feda80f3bd96378903a303e5a64af);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_23f04d0fe4e60de83616d6dfbd048b9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23f04d0fe4e60de83616d6dfbd048b9e);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6440429f63e8466ced697bac1a070a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f6440429f63e8466ced697bac1a070a3);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_015e7eeb66d244f596843b8f0a38da5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_015e7eeb66d244f596843b8f0a38da5a);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asynccontextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_asynccontextmanager_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_asynccontextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asynccontextmanager);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exponential_backoff_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__exponential_backoff_str_plain_exceptions_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_transport_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_ced036a8dd44419291c265f31a9c9296));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ced036a8dd44419291c265f31a9c9296);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Credentials_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Credentials_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0ff43dd516001b189426b5de2ba23e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0ff43dd516001b189426b5de2ba23e2);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mtls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mtls_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TimeoutError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TimeoutError_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientTimeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClientTimeout_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Request_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b00ce312a7bf0cfd5a3f1e049854eea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b00ce312a7bf0cfd5a3f1e049854eea);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_28aced4135d0768c4ee50a8eca538edb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28aced4135d0768c4ee50a8eca538edb);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAuthorizedSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAuthorizedSession);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_92));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_92);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth_request);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_71c8822808df2386f0efe02a82dc68fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71c8822808df2386f0efe02a82dc68fa);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_str_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_mtls);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_99a05734e213710e8e9f64f85c2ac7a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99a05734e213710e8e9f64f85c2ac7a9);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_e26aaf480b6a7321af156c58707e1245_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e26aaf480b6a7321af156c58707e1245_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca4ebe36c80a3198babdb539a7c25ea3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca4ebe36c80a3198babdb539a7c25ea3);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_76aefdf44e0952f55f59bf226041ec9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76aefdf44e0952f55f59bf226041ec9d);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_2aa939ecb772e7a24697400e421edfee_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2aa939ecb772e7a24697400e421edfee_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_d78728e851fe9c5524229697def6af4a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d78728e851fe9c5524229697def6af4a_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_cert_callback_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_client_cert_callback_str_plain_self_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_66f035fc552d556ac68a8170297dcc6d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_66f035fc552d556ac68a8170297dcc6d_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_total_timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_start_str_plain_total_timeout_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_9104cd655c308ce10221ff853edfa903_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9104cd655c308ce10221ff853edfa903_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_633400995e36c1ae59b64b4195775bab_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_633400995e36c1ae59b64b4195775bab_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_9afeb9bc3d6fcd8b2732f1a6cc39e98f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9afeb9bc3d6fcd8b2732f1a6cc39e98f_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_468cecf7323fdc58440a93cd09f5cafd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_468cecf7323fdc58440a93cd09f5cafd_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__remaining_time_str_plain_total_timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__remaining_time_str_plain_total_timeout_tuple);
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
static PyObject *module_var_accessor_google$auth$aio$transport$sessions$AIOHTTP_INSTALLED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AIOHTTP_INSTALLED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AIOHTTP_INSTALLED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AIOHTTP_INSTALLED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AIOHTTP_INSTALLED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AIOHTTP_INSTALLED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AIOHTTP_INSTALLED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AIOHTTP_INSTALLED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AIOHTTP_INSTALLED);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$AiohttpRequest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AiohttpRequest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AiohttpRequest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AiohttpRequest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AiohttpRequest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AiohttpRequest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AiohttpRequest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AiohttpRequest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AiohttpRequest);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientTimeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientTimeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientTimeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientTimeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$Credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$Mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$TimeoutError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutError);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$_exponential_backoff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$aiohttp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aiohttp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aiohttp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aiohttp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aiohttp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$asynccontextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asynccontextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asynccontextmanager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asynccontextmanager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asynccontextmanager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asynccontextmanager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asynccontextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asynccontextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asynccontextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$google(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$mtls(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_mtls);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mtls);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mtls, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mtls);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mtls, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_mtls);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_mtls);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mtls);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$timeout_guard(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout_guard);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_timeout_guard);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_timeout_guard, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_timeout_guard);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_timeout_guard, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout_guard);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout_guard);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout_guard);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$sessions$transport(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$sessions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$sessions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$sessions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3f427b883d249a2f7ebcf8e110ea3e45;
static PyCodeObject *code_objects_41716c7f2d65b21bc51b32b0db2d59b2;
static PyCodeObject *code_objects_9f1f6ab2b857bb21826481e13e7ed69f;
static PyCodeObject *code_objects_10d9fdcbc07e3c3db1cd5bf17fa18b02;
static PyCodeObject *code_objects_ccd29478086307be6748be4156fa786c;
static PyCodeObject *code_objects_89e820a82082b4d29dbfd35669e76100;
static PyCodeObject *code_objects_0cf84ca8379df36bb7703f6a4db16ac3;
static PyCodeObject *code_objects_0d60b571a2afefab96d3504c8355ef0e;
static PyCodeObject *code_objects_10d068de1f436046ec5dc3a018c9fbbb;
static PyCodeObject *code_objects_fc6823c176ece6b546f1224fff5fac47;
static PyCodeObject *code_objects_b57bd5ec904345bf9a90d9ab555c62dc;
static PyCodeObject *code_objects_f23ebbc0faed0e1d53dcfa4bff2b28e9;
static PyCodeObject *code_objects_94faa4e84c16fb7f229aa4eecf6b62d3;
static PyCodeObject *code_objects_f0bdf27a0ee701abae8f6e054f879def;
static PyCodeObject *code_objects_3512253321e0b71a14305af64dbbadbe;
static PyCodeObject *code_objects_53a1eb716648b6a28c412b3cd5390f4d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ca4ebe36c80a3198babdb539a7c25ea3); CHECK_OBJECT(module_filename_obj);
code_objects_3f427b883d249a2f7ebcf8e110ea3e45 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_76aefdf44e0952f55f59bf226041ec9d, mod_consts.const_str_digest_76aefdf44e0952f55f59bf226041ec9d, NULL, NULL, 0, 0, 0);
code_objects_41716c7f2d65b21bc51b32b0db2d59b2 = MAKE_CODE_OBJECT(module_filename_obj, 92, 0, mod_consts.const_str_plain_AsyncAuthorizedSession, mod_consts.const_str_plain_AsyncAuthorizedSession, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9f1f6ab2b857bb21826481e13e7ed69f = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_71c8822808df2386f0efe02a82dc68fa, mod_consts.const_tuple_2aa939ecb772e7a24697400e421edfee_tuple, NULL, 3, 0, 0);
code_objects_10d9fdcbc07e3c3db1cd5bf17fa18b02 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__do_configure, mod_consts.const_str_digest_b476479a0d573eb9f90742796f1f8c3b, mod_consts.const_tuple_d78728e851fe9c5524229697def6af4a_tuple, mod_consts.const_tuple_str_plain_client_cert_callback_str_plain_self_tuple, 0, 0, 0);
code_objects_ccd29478086307be6748be4156fa786c = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__remaining_time, mod_consts.const_str_digest_7a0741d3a3386cb64baf818ec4e116c5, mod_consts.const_tuple_66f035fc552d556ac68a8170297dcc6d_tuple, mod_consts.const_tuple_str_plain_start_str_plain_total_timeout_tuple, 0, 0, 0);
code_objects_89e820a82082b4d29dbfd35669e76100 = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_015e7eeb66d244f596843b8f0a38da5a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0cf84ca8379df36bb7703f6a4db16ac3 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_configure_mtls_channel, mod_consts.const_str_digest_31c1803ba32e80bdb4eff898a1e7ec5e, mod_consts.const_tuple_9104cd655c308ce10221ff853edfa903_tuple, NULL, 2, 0, 0);
code_objects_0d60b571a2afefab96d3504c8355ef0e = MAKE_CODE_OBJECT(module_filename_obj, 515, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_delete, mod_consts.const_str_digest_072feda80f3bd96378903a303e5a64af, mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple, NULL, 7, 0, 0);
code_objects_10d068de1f436046ec5dc3a018c9fbbb = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain_get, mod_consts.const_str_digest_2e41bc93d382ff286afcc096576178ef, mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple, NULL, 7, 0, 0);
code_objects_fc6823c176ece6b546f1224fff5fac47 = MAKE_CODE_OBJECT(module_filename_obj, 568, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_mtls, mod_consts.const_str_digest_99a05734e213710e8e9f64f85c2ac7a9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b57bd5ec904345bf9a90d9ab555c62dc = MAKE_CODE_OBJECT(module_filename_obj, 462, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_patch, mod_consts.const_str_digest_90df6b8a8c0bbdccfbba84792a07572f, mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple, NULL, 7, 0, 0);
code_objects_f23ebbc0faed0e1d53dcfa4bff2b28e9 = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_post, mod_consts.const_str_digest_4abe965b3f00289bc1faa405f81a4906, mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple, NULL, 7, 0, 0);
code_objects_94faa4e84c16fb7f229aa4eecf6b62d3 = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_put, mod_consts.const_str_digest_12ae199570cd5d89444926b93e3d5256, mod_consts.const_tuple_626bb7f8dc72c6dbd5387539ddb9c98d_tuple, NULL, 7, 0, 0);
code_objects_f0bdf27a0ee701abae8f6e054f879def = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_request, mod_consts.const_str_digest_ccf9f09c5a9f8f9fea157012ba153b8d, mod_consts.const_tuple_633400995e36c1ae59b64b4195775bab_tuple, NULL, 8, 0, 0);
code_objects_3512253321e0b71a14305af64dbbadbe = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_timeout_guard, mod_consts.const_str_plain_timeout_guard, mod_consts.const_tuple_9afeb9bc3d6fcd8b2732f1a6cc39e98f_tuple, NULL, 1, 0, 0);
code_objects_53a1eb716648b6a28c412b3cd5390f4d = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_timeout, mod_consts.const_str_digest_cee4378461b83c8164aa316cbcaf0867, mod_consts.const_tuple_468cecf7323fdc58440a93cd09f5cafd_tuple, mod_consts.const_tuple_str_plain__remaining_time_str_plain_total_timeout_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_ASYNCGEN_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__10_is_mtls(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__11_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__4_request(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__5_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__6_post(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__7_put(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__8_patch(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__9_delete(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_timeout;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_ASYNCGEN_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard_locals {
struct Nuitka_CellObject *var_start;
struct Nuitka_CellObject *var_total_timeout;
struct Nuitka_CellObject *var__remaining_time;
PyObject *var_with_timeout;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard_locals *asyncgen_heap = (struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_start = Nuitka_Cell_NewEmpty();
asyncgen_heap->var_total_timeout = Nuitka_Cell_NewEmpty();
asyncgen_heap->var__remaining_time = Nuitka_Cell_NewEmpty();
asyncgen_heap->var_with_timeout = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3512253321e0b71a14305af64dbbadbe, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$sessions$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 63;
asyncgen_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 63;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_monotonic);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 63;
asyncgen_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(asyncgen_heap->var_start) == NULL);
Nuitka_Cell_SET(asyncgen_heap->var_start, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 64;
asyncgen_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}

tmp_assign_source_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
assert(Nuitka_Cell_GET(asyncgen_heap->var_total_timeout) == NULL);
Py_INCREF(tmp_assign_source_2);
Nuitka_Cell_SET(asyncgen_heap->var_total_timeout, tmp_assign_source_2);

}
{
PyObject *tmp_assign_source_3;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = asyncgen_heap->var_start;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = asyncgen_heap->var_total_timeout;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_3 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time(tstate, tmp_closure_1);

assert(Nuitka_Cell_GET(asyncgen_heap->var__remaining_time) == NULL);
Nuitka_Cell_SET(asyncgen_heap->var__remaining_time, tmp_assign_source_3);

}
{
PyObject *tmp_assign_source_4;
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_closure_2[0] = asyncgen_heap->var__remaining_time;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = asyncgen_heap->var_total_timeout;
Py_INCREF(tmp_closure_2[1]);
tmp_assign_source_4 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout(tstate, tmp_closure_2);

assert(asyncgen_heap->var_with_timeout == NULL);
asyncgen_heap->var_with_timeout = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_with_timeout);
tmp_expression_value_1 = asyncgen_heap->var_with_timeout;
Py_INCREF(tmp_expression_value_1);
asyncgen->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 86;
asyncgen_heap->type_description_1 = "cccco";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 1.
asyncgen_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(Nuitka_Cell_GET(asyncgen_heap->var__remaining_time));
tmp_called_value_1 = Nuitka_Cell_GET(asyncgen_heap->var__remaining_time);
asyncgen->m_frame->m_frame.f_lineno = 89;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 89;
asyncgen_heap->type_description_1 = "cccco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 85;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "cccco";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(Nuitka_Cell_GET(asyncgen_heap->var__remaining_time));
tmp_called_value_2 = Nuitka_Cell_GET(asyncgen_heap->var__remaining_time);
asyncgen->m_frame->m_frame.f_lineno = 89;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 89;
asyncgen_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

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
    asyncgen_heap->var_start,
    asyncgen_heap->var_total_timeout,
    asyncgen_heap->var__remaining_time,
    asyncgen_heap->var_with_timeout
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
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(asyncgen_heap->var_start);
CHECK_OBJECT(asyncgen_heap->var_start);
Py_DECREF(asyncgen_heap->var_start);
asyncgen_heap->var_start = NULL;
CHECK_OBJECT(asyncgen_heap->var_total_timeout);
CHECK_OBJECT(asyncgen_heap->var_total_timeout);
Py_DECREF(asyncgen_heap->var_total_timeout);
asyncgen_heap->var_total_timeout = NULL;
CHECK_OBJECT(asyncgen_heap->var__remaining_time);
CHECK_OBJECT(asyncgen_heap->var__remaining_time);
Py_DECREF(asyncgen_heap->var__remaining_time);
asyncgen_heap->var__remaining_time = NULL;
CHECK_OBJECT(asyncgen_heap->var_with_timeout);
CHECK_OBJECT(asyncgen_heap->var_with_timeout);
Py_DECREF(asyncgen_heap->var_with_timeout);
asyncgen_heap->var_with_timeout = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

CHECK_OBJECT(asyncgen_heap->var_start);
CHECK_OBJECT(asyncgen_heap->var_start);
Py_DECREF(asyncgen_heap->var_start);
asyncgen_heap->var_start = NULL;
CHECK_OBJECT(asyncgen_heap->var_total_timeout);
CHECK_OBJECT(asyncgen_heap->var_total_timeout);
Py_DECREF(asyncgen_heap->var_total_timeout);
asyncgen_heap->var_total_timeout = NULL;
CHECK_OBJECT(asyncgen_heap->var__remaining_time);
CHECK_OBJECT(asyncgen_heap->var__remaining_time);
Py_DECREF(asyncgen_heap->var__remaining_time);
asyncgen_heap->var__remaining_time = NULL;
Py_XDECREF(asyncgen_heap->var_with_timeout);
asyncgen_heap->var_with_timeout = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

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

static PyObject *MAKE_ASYNCGEN_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_timeout_guard,
        NULL,
        code_objects_3512253321e0b71a14305af64dbbadbe,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_elapsed = NULL;
PyObject *var_remaining = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time = MAKE_FUNCTION_FRAME(tstate, code_objects_ccd29478086307be6748be4156fa786c, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time->m_type_description == NULL);
frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time = cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$sessions$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time->m_frame.f_lineno = 67;
tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_monotonic);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_sub_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
assert(var_elapsed == NULL);
var_elapsed = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_total_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 68;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_2 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(var_elapsed);
tmp_sub_expr_right_2 = var_elapsed;
tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
assert(var_remaining == NULL);
var_remaining = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_remaining);
tmp_cmp_expr_left_1 = var_remaining;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oocc";
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_google$auth$aio$transport$sessions$TimeoutError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_8016cdba6bea264e87a5f0b8ad874486;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_total_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "oocc";
    goto tuple_build_exception_1;
}

tmp_format_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6;
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
frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time->m_frame.f_lineno = 70;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 70;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time,
    type_description_1,
    var_elapsed,
    var_remaining,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time == cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time);
    cache_frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_remaining);
tmp_return_value = var_remaining;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_elapsed);
CHECK_OBJECT(var_elapsed);
Py_DECREF(var_elapsed);
var_elapsed = NULL;
CHECK_OBJECT(var_remaining);
CHECK_OBJECT(var_remaining);
Py_DECREF(var_remaining);
var_remaining = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_elapsed);
var_elapsed = NULL;
Py_XDECREF(var_remaining);
var_remaining = NULL;
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


static PyObject *impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_coro = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_coro;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = self->m_closure[1];
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_coro);
CHECK_OBJECT(par_coro);
Py_DECREF(par_coro);
par_coro = NULL;
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
struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout_locals {
PyObject *var_remaining;
PyObject *var_response;
PyObject *var_e;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_remaining = NULL;
coroutine_heap->var_response = NULL;
coroutine_heap->var_e = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_53a1eb716648b6a28c412b3cd5390f4d, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__remaining_time);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 77;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}

tmp_called_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 77;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 77;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}
assert(coroutine_heap->var_remaining == NULL);
coroutine_heap->var_remaining = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 78;
tmp_expression_value_3 = module_var_accessor_google$auth$aio$transport$sessions$asyncio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_wait_for);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_coro);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
CHECK_OBJECT(coroutine_heap->var_remaining);
tmp_args_element_value_2 = coroutine_heap->var_remaining;
coroutine->m_frame->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_2;
}
tmp_assign_source_2 = yield_return_value;
assert(coroutine_heap->var_response == NULL);
coroutine_heap->var_response = tmp_assign_source_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_4 = module_var_accessor_google$auth$aio$transport$sessions$asyncio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 80;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_3;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_TimeoutError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 80;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_google$auth$aio$transport$sessions$TimeoutError(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_TimeoutError);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 80;
coroutine_heap->type_description_1 = "cooocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 80;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
assert(coroutine_heap->var_e == NULL);
Py_INCREF(tmp_assign_source_3);
coroutine_heap->var_e = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_3 = module_var_accessor_google$auth$aio$transport$sessions$TimeoutError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_TimeoutError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_3f5a73b447ad30b27bafd74c7686e189;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_coro);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 82;
coroutine_heap->type_description_1 = "cooocc";
    goto tuple_build_exception_2;
}

tmp_format_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 82;
coroutine_heap->type_description_1 = "cooocc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_221d4736c186173097c8cbd48310fa60;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 82;
coroutine_heap->type_description_1 = "cooocc";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 82;
coroutine_heap->type_description_1 = "cooocc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_b7f77ebc7e22759268ea9aaebad9a1c6;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_3 == NULL));
coroutine->m_frame->m_frame.f_lineno = 81;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 81;
coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_e);
tmp_raise_cause_1 = coroutine_heap->var_e;
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
coroutine_heap->exception_lineno = 83;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_1);
coroutine_heap->type_description_1 = "cooocc";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 76;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cooocc";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;

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
    coroutine->m_closure[1],
    coroutine_heap->var_remaining,
    coroutine_heap->var_response,
    coroutine_heap->var_e,
    coroutine->m_closure[0],
    coroutine->m_closure[2]
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
CHECK_OBJECT(coroutine_heap->var_response);
coroutine_heap->tmp_return_value = coroutine_heap->var_response;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_remaining);
CHECK_OBJECT(coroutine_heap->var_remaining);
Py_DECREF(coroutine_heap->var_remaining);
coroutine_heap->var_remaining = NULL;
CHECK_OBJECT(coroutine_heap->var_response);
CHECK_OBJECT(coroutine_heap->var_response);
Py_DECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_remaining);
coroutine_heap->var_remaining = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_with_timeout,
        mod_consts.const_str_digest_cee4378461b83c8164aa316cbcaf0867,
        code_objects_53a1eb716648b6a28c412b3cd5390f4d,
        closure,
        3,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout$$$coroutine__1_with_timeout_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_credentials = python_pars[1];
PyObject *par_auth_request = python_pars[2];
PyObject *var__auth_request = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$sessions$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9f1f6ab2b857bb21826481e13e7ed69f, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__->m_type_description == NULL);
frame_frame_google$auth$aio$transport$sessions$$$function__2___init__ = cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$sessions$$$function__2___init__);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$sessions$$$function__2___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_credentials);
tmp_isinstance_inst_1 = par_credentials;
tmp_isinstance_cls_1 = module_var_accessor_google$auth$aio$transport$sessions$Credentials(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_google$auth$aio$transport$sessions$exceptions(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_InvalidType);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_44380e49d847b0978ff79bb48bac5e14;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_credentials);
tmp_type_arg_1 = par_credentials;
tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_05affbe92acd5a43f20afa072fc8ed4f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_google$auth$aio$transport$sessions$$$function__2___init__->m_frame.f_lineno = 134;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 134;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_credentials);
tmp_assattr_value_1 = par_credentials;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__credentials, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_auth_request);
tmp_assign_source_1 = par_auth_request;
assert(var__auth_request == NULL);
Py_INCREF(tmp_assign_source_1);
var__auth_request = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var__auth_request);
tmp_operand_value_2 = var__auth_request;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_mvar_value_1 = module_var_accessor_google$auth$aio$transport$sessions$AIOHTTP_INSTALLED(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AIOHTTP_INSTALLED);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_google$auth$aio$transport$sessions$AiohttpRequest(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AiohttpRequest);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aio$transport$sessions$$$function__2___init__->m_frame.f_lineno = 140;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__auth_request;
    assert(old != NULL);
    var__auth_request = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__is_mtls, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__mtls_init_task, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__cached_cert, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var__auth_request);
tmp_cmp_expr_left_1 = var__auth_request;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$sessions$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aio$transport$sessions$$$function__2___init__->m_frame.f_lineno = 145;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TransportError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_fc0e6d79dfb3c38d0541fad94918d130_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 145;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var__auth_request);
tmp_assattr_value_5 = var__auth_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__auth_request, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$sessions$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$sessions$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$sessions$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$sessions$$$function__2___init__,
    type_description_1,
    par_self,
    par_credentials,
    par_auth_request,
    var__auth_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$sessions$$$function__2___init__ == cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__);
    cache_frame_frame_google$auth$aio$transport$sessions$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$sessions$$$function__2___init__);

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
CHECK_OBJECT(var__auth_request);
CHECK_OBJECT(var__auth_request);
Py_DECREF(var__auth_request);
var__auth_request = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__auth_request);
var__auth_request = NULL;
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
CHECK_OBJECT(par_auth_request);
Py_DECREF(par_auth_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_auth_request);
Py_DECREF(par_auth_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_client_cert_callback = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_client_cert_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_client_cert_callback);
CHECK_OBJECT(par_client_cert_callback);
Py_DECREF(par_client_cert_callback);
par_client_cert_callback = NULL;
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
struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel_locals {
PyObject *var__do_configure;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var__do_configure = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0cf84ca8379df36bb7703f6a4db16ac3, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__mtls_init_task);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cco";
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
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = coroutine->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure(tstate, tmp_closure_1);

assert(coroutine_heap->var__do_configure == NULL);
coroutine_heap->var__do_configure = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_assattr_target_1;
tmp_expression_value_2 = module_var_accessor_google$auth$aio$transport$sessions$asyncio(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create_task);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var__do_configure);
tmp_called_value_2 = coroutine_heap->var__do_configure;
coroutine->m_frame->m_frame.f_lineno = 219;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 219;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__mtls_init_task, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 219;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
coroutine->m_frame->m_frame.f_lineno = 221;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__mtls_init_task);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "cco";
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
    coroutine_heap->var__do_configure
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
Py_XDECREF(coroutine_heap->var__do_configure);
coroutine_heap->var__do_configure = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var__do_configure);
coroutine_heap->var__do_configure = NULL;
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_configure_mtls_channel,
        mod_consts.const_str_digest_31c1803ba32e80bdb4eff898a1e7ec5e,
        code_objects_0cf84ca8379df36bb7703f6a4db16ac3,
        closure,
        2,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure(tstate, tmp_closure_1);

goto function_return_exit;
}

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
struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure_locals {
PyObject *var_use_client_cert;
PyObject *var_cert;
PyObject *var_key;
PyObject *var_ssl_context;
PyObject *var_connector;
PyObject *var_new_session;
PyObject *var_old_auth_request;
PyObject *var_caught_exc;
PyObject *var_new_exc;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_use_client_cert = NULL;
coroutine_heap->var_cert = NULL;
coroutine_heap->var_key = NULL;
coroutine_heap->var_ssl_context = NULL;
coroutine_heap->var_connector = NULL;
coroutine_heap->var_new_session = NULL;
coroutine_heap->var_old_auth_request = NULL;
coroutine_heap->var_caught_exc = NULL;
coroutine_heap->var_new_exc = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_10d9fdcbc07e3c3db1cd5bf17fa18b02, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
coroutine->m_frame->m_frame.f_lineno = 179;
tmp_expression_value_3 = module_var_accessor_google$auth$aio$transport$sessions$mtls(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_mtls);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__run_in_executor);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_google$auth$aio$transport$sessions$google(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 180;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_auth);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 180;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_transport);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 180;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__mtls_helper);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 180;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_check_use_client_cert);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 180;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 179;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_use_client_cert == NULL);
coroutine_heap->var_use_client_cert = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(coroutine_heap->var_use_client_cert);
tmp_operand_value_1 = coroutine_heap->var_use_client_cert;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "ooooooooocc";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 183;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__is_mtls, tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 183;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto frame_exception_exit_1;
}
}
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 191;
tmp_expression_value_10 = module_var_accessor_google$auth$aio$transport$sessions$mtls(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_mtls);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_get_client_cert_and_key);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_client_cert_callback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 191;
tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}
tmp_iter_arg_1 = yield_return_value;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_3 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 3);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assattr_value_2 = coroutine_heap->tmp_tuple_unpack_1__element_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 188;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__is_mtls, tmp_assattr_value_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_3;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_3);
coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = coroutine_heap->tmp_tuple_unpack_1__element_2;
assert(coroutine_heap->var_cert == NULL);
Py_INCREF(tmp_assign_source_6);
coroutine_heap->var_cert = tmp_assign_source_6;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = coroutine_heap->tmp_tuple_unpack_1__element_3;
assert(coroutine_heap->var_key == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var_key = tmp_assign_source_7;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_3);
coroutine_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}

tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__is_mtls);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(coroutine_heap->var_cert);
tmp_assattr_value_3 = coroutine_heap->var_cert;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__cached_cert, tmp_assattr_value_3);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
coroutine->m_frame->m_frame.f_lineno = 195;
tmp_expression_value_14 = module_var_accessor_google$auth$aio$transport$sessions$mtls(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_mtls);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__run_in_executor);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_expression_value_15 = module_var_accessor_google$auth$aio$transport$sessions$mtls(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_mtls);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_make_client_cert_ssl_context);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(coroutine_heap->var_cert);
tmp_args_element_value_4 = coroutine_heap->var_cert;
CHECK_OBJECT(coroutine_heap->var_key);
tmp_args_element_value_5 = coroutine_heap->var_key;
coroutine->m_frame->m_frame.f_lineno = 195;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_expression_value_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_expression_value_12 = ASYNC_AWAIT(tstate, tmp_expression_value_13, await_normal);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_12;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_assign_source_8 = yield_return_value;
assert(coroutine_heap->var_ssl_context == NULL);
coroutine_heap->var_ssl_context = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_16;
tmp_mvar_value_1 = module_var_accessor_google$auth$aio$transport$sessions$AIOHTTP_INSTALLED(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AIOHTTP_INSTALLED);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 200;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 200;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 200;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 201;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}

tmp_expression_value_16 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__auth_request);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 201;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_isinstance_cls_1 = module_var_accessor_google$auth$aio$transport$sessions$AiohttpRequest(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AiohttpRequest);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_isinstance_inst_1);

coroutine_heap->exception_lineno = 201;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 200;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_17 = module_var_accessor_google$auth$aio$transport$sessions$aiohttp(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_TCPConnector);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(coroutine_heap->var_ssl_context);
tmp_kw_call_value_0_1 = coroutine_heap->var_ssl_context;
coroutine->m_frame->m_frame.f_lineno = 203;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_ssl_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
assert(coroutine_heap->var_connector == NULL);
coroutine_heap->var_connector = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_value_0_2;
tmp_expression_value_18 = module_var_accessor_google$auth$aio$transport$sessions$aiohttp(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_ClientSession);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(coroutine_heap->var_connector);
tmp_kw_call_value_0_2 = coroutine_heap->var_connector;
coroutine->m_frame->m_frame.f_lineno = 204;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_connector_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
assert(coroutine_heap->var_new_session == NULL);
coroutine_heap->var_new_session = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_19;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}

tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__auth_request);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 206;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
assert(coroutine_heap->var_old_auth_request == NULL);
coroutine_heap->var_old_auth_request = tmp_assign_source_11;
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_assattr_target_4;
tmp_called_value_6 = module_var_accessor_google$auth$aio$transport$sessions$AiohttpRequest(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AiohttpRequest);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 207;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(coroutine_heap->var_new_session);
tmp_kw_call_value_0_3 = coroutine_heap->var_new_session;
coroutine->m_frame->m_frame.f_lineno = 207;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

    tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_session_tuple);
}

if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 207;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 207;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}

tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__auth_request, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 207;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_called_instance_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 209;
CHECK_OBJECT(coroutine_heap->var_old_auth_request);
tmp_called_instance_1 = coroutine_heap->var_old_auth_request;
coroutine->m_frame->m_frame.f_lineno = 209;
tmp_expression_value_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 209;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_expression_value_20 = ASYNC_AWAIT(tstate, tmp_expression_value_21, await_normal);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 209;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_20;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 209;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_2;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_3:;
branch_no_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_22;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_22 = module_var_accessor_google$auth$aio$transport$sessions$exceptions(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 212;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_5;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_ClientCertError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 212;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_ImportError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_OSError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 211;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (coroutine_heap->tmp_res != 0) ? true : false;
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
assert(coroutine_heap->var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_12);
coroutine_heap->var_caught_exc = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = module_var_accessor_google$auth$aio$transport$sessions$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 216;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_6;
}
CHECK_OBJECT(coroutine_heap->var_caught_exc);
tmp_args_element_value_6 = coroutine_heap->var_caught_exc;
coroutine->m_frame->m_frame.f_lineno = 216;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_MutualTLSChannelError, tmp_args_element_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 216;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_6;
}
assert(coroutine_heap->var_new_exc == NULL);
coroutine_heap->var_new_exc = tmp_assign_source_13;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(coroutine_heap->var_new_exc);
tmp_raise_type_input_1 = coroutine_heap->var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "ooooooooocc";
    goto try_except_handler_6;
}
CHECK_OBJECT(coroutine_heap->var_caught_exc);
tmp_raise_cause_1 = coroutine_heap->var_caught_exc;
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
coroutine_heap->exception_lineno = 217;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_1);
coroutine_heap->type_description_1 = "ooooooooocc";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_caught_exc);
coroutine_heap->var_caught_exc = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_4;
branch_no_4:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 186;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ooooooooocc";
goto try_except_handler_5;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;

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
    coroutine_heap->var_use_client_cert,
    coroutine_heap->var_cert,
    coroutine_heap->var_key,
    coroutine_heap->var_ssl_context,
    coroutine_heap->var_connector,
    coroutine_heap->var_new_session,
    coroutine_heap->var_old_auth_request,
    coroutine_heap->var_caught_exc,
    coroutine_heap->var_new_exc,
    coroutine->m_closure[1],
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
goto try_except_handler_1;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_use_client_cert);
CHECK_OBJECT(coroutine_heap->var_use_client_cert);
Py_DECREF(coroutine_heap->var_use_client_cert);
coroutine_heap->var_use_client_cert = NULL;
Py_XDECREF(coroutine_heap->var_cert);
coroutine_heap->var_cert = NULL;
Py_XDECREF(coroutine_heap->var_key);
coroutine_heap->var_key = NULL;
Py_XDECREF(coroutine_heap->var_ssl_context);
coroutine_heap->var_ssl_context = NULL;
Py_XDECREF(coroutine_heap->var_connector);
coroutine_heap->var_connector = NULL;
Py_XDECREF(coroutine_heap->var_new_session);
coroutine_heap->var_new_session = NULL;
Py_XDECREF(coroutine_heap->var_old_auth_request);
coroutine_heap->var_old_auth_request = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_use_client_cert);
coroutine_heap->var_use_client_cert = NULL;
Py_XDECREF(coroutine_heap->var_cert);
coroutine_heap->var_cert = NULL;
Py_XDECREF(coroutine_heap->var_key);
coroutine_heap->var_key = NULL;
Py_XDECREF(coroutine_heap->var_ssl_context);
coroutine_heap->var_ssl_context = NULL;
Py_XDECREF(coroutine_heap->var_connector);
coroutine_heap->var_connector = NULL;
Py_XDECREF(coroutine_heap->var_new_session);
coroutine_heap->var_new_session = NULL;
Py_XDECREF(coroutine_heap->var_old_auth_request);
coroutine_heap->var_old_auth_request = NULL;
Py_XDECREF(coroutine_heap->var_new_exc);
coroutine_heap->var_new_exc = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain__do_configure,
        mod_consts.const_str_digest_b476479a0d573eb9f90742796f1f8c3b,
        code_objects_10d9fdcbc07e3c3db1cd5bf17fa18b02,
        closure,
        2,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure$$$coroutine__1__do_configure_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__4_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_method = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_max_allowed_time = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_total_attempts = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[8]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[9];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_max_allowed_time;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_method;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_self;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_timeout;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_total_attempts;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_url;
Py_INCREF(tmp_closure_1[8]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_method);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
par_method = NULL;
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_max_allowed_time);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
par_max_allowed_time = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(par_total_attempts);
CHECK_OBJECT(par_total_attempts);
Py_DECREF(par_total_attempts);
par_total_attempts = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request_locals {
PyObject *var_actual_timeout;
PyObject *var_retries;
PyObject *var_with_timeout;
PyObject *var__;
PyObject *var_response;
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

static PyObject *google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
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
coroutine_heap->var_actual_timeout = NULL;
coroutine_heap->var_retries = NULL;
coroutine_heap->var_with_timeout = NULL;
coroutine_heap->var__ = NULL;
coroutine_heap->var_response = NULL;
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f0bdf27a0ee701abae8f6e054f879def, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__mtls_init_task);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "cccccccccooooo";
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
// Tried code:
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 268;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__mtls_init_task);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_2;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
tmp_cmp_expr_right_1 = PyExc_Exception;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
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
    coroutine_heap->exception_lineno = 267;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccccooooo";
goto try_except_handler_3;
branch_no_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_5 = module_var_accessor_google$auth$aio$transport$sessions$_exponential_backoff(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__exponential_backoff);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_AsyncExponentialBackoff);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_attempts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 273;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_total_attempts_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_retries == NULL);
coroutine_heap->var_retries = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_2);
    Py_XDECREF(old);
}

}
branch_no_3:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_google$auth$aio$transport$sessions$timeout_guard(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout_guard);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_allowed_time);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 278;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_6 = coroutine_heap->tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___aenter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 278;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_7 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___aexit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
coroutine->m_frame->m_frame.f_lineno = 278;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_9 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_enter);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_8 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_with_timeout == NULL);
Py_INCREF(tmp_assign_source_8);
coroutine_heap->var_with_timeout = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 279;
CHECK_OBJECT(coroutine_heap->var_with_timeout);
tmp_called_value_4 = coroutine_heap->var_with_timeout;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__credentials);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_before_request);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__auth_request);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[8]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 281;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
coroutine->m_frame->m_frame.f_lineno = 279;
tmp_expression_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 279;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_expression_value_10 = ASYNC_AWAIT(tstate, tmp_expression_value_11, await_normal);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 279;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_10;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 279;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_float_0_0;
assert(coroutine_heap->var_actual_timeout == NULL);
Py_INCREF(tmp_assign_source_9);
coroutine_heap->var_actual_timeout = tmp_assign_source_9;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
tmp_cmp_expr_left_3 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_cmp_expr_left_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_isinstance_inst_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_isinstance_cls_1 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_and_right_value_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_10;
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_total);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_expression_value_16 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_total);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_10 = const_float_0_0;
Py_INCREF(tmp_assign_source_10);
condexpr_end_1:;
{
    PyObject *old = coroutine_heap->var_actual_timeout;
    assert(old != NULL);
    coroutine_heap->var_actual_timeout = tmp_assign_source_10;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_isinstance_inst_2 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_int_type_float_tuple;
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_float_arg_1;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 289;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}

tmp_float_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_assign_source_11 = TO_FLOAT(tmp_float_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 289;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = coroutine_heap->var_actual_timeout;
    assert(old != NULL);
    coroutine_heap->var_actual_timeout = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_value_value_1;
CHECK_OBJECT(coroutine_heap->var_retries);
tmp_value_value_1 = coroutine_heap->var_retries;
tmp_expression_value_17 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_17;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_6;
}
tmp_assign_source_12 = yield_return_value;
assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_12;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_18;
PyObject *tmp_value_value_2;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = coroutine_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_18 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_18;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_8;
}
tmp_assign_source_13 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
    coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = coroutine_heap->exception_keeper_name_3.exception_value;
tmp_cmp_expr_right_5 = PyExc_StopAsyncIteration;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_7 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);
goto loop_end_1;
goto branch_end_6;
branch_no_6:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_7;
branch_end_6:;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_14 = coroutine_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = coroutine_heap->var__;
    coroutine_heap->var__ = tmp_assign_source_14;
    Py_INCREF(coroutine_heap->var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 293;
if (coroutine_heap->var_with_timeout == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_with_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}

tmp_called_value_6 = coroutine_heap->var_with_timeout;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}

tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__auth_request);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[8]);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 3, tmp_tuple_element_1);
if (coroutine_heap->var_actual_timeout == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_actual_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = coroutine_heap->var_actual_timeout;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 4, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_args_element_value_7 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
coroutine->m_frame->m_frame.f_lineno = 293;
tmp_expression_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
tmp_expression_value_19 = ASYNC_AWAIT(tstate, tmp_expression_value_20, await_normal);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 6;
coroutine->m_yield_from = tmp_expression_value_19;
coroutine->m_awaiting = true;
return NULL;

yield_return_6:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
tmp_assign_source_15 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_response;
    coroutine_heap->var_response = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_22 = coroutine_heap->var_response;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
tmp_expression_value_23 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
goto loop_end_1;
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
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
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_9 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_16;
tmp_assign_source_16 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_16;
}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
coroutine->m_frame->m_frame.f_lineno = 278;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_8 = EXC_TYPE(tstate);
tmp_args_element_value_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_9); 
tmp_args_element_value_10 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_10 == NULL) {
    tmp_args_element_value_10 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 278;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_expression_value_25 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_9;
}
tmp_expression_value_24 = ASYNC_AWAIT(tstate, tmp_expression_value_25, await_exit);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_9;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_10, sizeof(bool), &tmp_expression_value_25, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 7;
coroutine->m_yield_from = tmp_expression_value_24;
coroutine->m_awaiting = true;
return NULL;

yield_return_7:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_10, sizeof(bool), &tmp_expression_value_25, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_9;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_9;
}
tmp_condition_result_10 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 278;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccccooooo";
goto try_except_handler_9;
branch_no_9:;
goto branch_end_8;
branch_no_8:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 278;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccccooooo";
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

goto try_except_handler_5;
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
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_called_value_8;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 278;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_8 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 278;
tmp_expression_value_27 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
tmp_expression_value_26 = ASYNC_AWAIT(tstate, tmp_expression_value_27, await_exit);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 8;
coroutine->m_yield_from = tmp_expression_value_26;
coroutine->m_awaiting = true;
return NULL;

yield_return_8:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
branch_no_10:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_4;
// End of try:
try_end_7:;
{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_9;
nuitka_bool tmp_cmp_expr_right_9;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_9 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_called_value_9;
PyObject *tmp_await_result_4;
coroutine->m_frame->m_frame.f_lineno = 278;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_9 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 278;
tmp_expression_value_29 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
tmp_expression_value_28 = ASYNC_AWAIT(tstate, tmp_expression_value_29, await_exit);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 9;
coroutine->m_yield_from = tmp_expression_value_28;
coroutine->m_awaiting = true;
return NULL;

yield_return_9:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 278;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto try_except_handler_4;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
if (coroutine_heap->var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 300;
coroutine_heap->type_description_1 = "cccccccccooooo";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = coroutine_heap->var_response;
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
    coroutine->m_closure[5],
    coroutine->m_closure[4],
    coroutine->m_closure[8],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[6],
    coroutine->m_closure[7],
    coroutine->m_closure[2],
    coroutine_heap->var_actual_timeout,
    coroutine_heap->var_retries,
    coroutine_heap->var_with_timeout,
    coroutine_heap->var__,
    coroutine_heap->var_response
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
Py_XDECREF(coroutine_heap->var_actual_timeout);
coroutine_heap->var_actual_timeout = NULL;
CHECK_OBJECT(coroutine_heap->var_retries);
CHECK_OBJECT(coroutine_heap->var_retries);
Py_DECREF(coroutine_heap->var_retries);
coroutine_heap->var_retries = NULL;
Py_XDECREF(coroutine_heap->var_with_timeout);
coroutine_heap->var_with_timeout = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
Py_XDECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_actual_timeout);
coroutine_heap->var_actual_timeout = NULL;
Py_XDECREF(coroutine_heap->var_retries);
coroutine_heap->var_retries = NULL;
Py_XDECREF(coroutine_heap->var_with_timeout);
coroutine_heap->var_with_timeout = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
Py_XDECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_request,
        mod_consts.const_str_digest_ccf9f09c5a9f8f9fea157012ba153b8d,
        code_objects_f0bdf27a0ee701abae8f6e054f879def,
        closure,
        9,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__4_request$$$coroutine__1_request_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__5_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_max_allowed_time = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_total_attempts = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_max_allowed_time;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_total_attempts;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_url;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_max_allowed_time);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
par_max_allowed_time = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(par_total_attempts);
CHECK_OBJECT(par_total_attempts);
Py_DECREF(par_total_attempts);
par_total_attempts = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_10d068de1f436046ec5dc3a018c9fbbb, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 344;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_GET;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 348;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 3, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_allowed_time);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 4, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 5, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_attempts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 351;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 6, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 352;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "cccccccc";
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
    coroutine->m_closure[4],
    coroutine->m_closure[7],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[5],
    coroutine->m_closure[6],
    coroutine->m_closure[2]
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get_context,
        module_google$auth$aio$transport$sessions,
        const_str_plain_get,
        mod_consts.const_str_digest_2e41bc93d382ff286afcc096576178ef,
        code_objects_10d068de1f436046ec5dc3a018c9fbbb,
        closure,
        8,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__5_get$$$coroutine__1_get_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__6_post(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_max_allowed_time = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_total_attempts = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_max_allowed_time;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_total_attempts;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_url;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_max_allowed_time);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
par_max_allowed_time = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(par_total_attempts);
CHECK_OBJECT(par_total_attempts);
Py_DECREF(par_total_attempts);
par_total_attempts = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f23ebbc0faed0e1d53dcfa4bff2b28e9, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 397;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_POST;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 399;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 400;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 3, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_allowed_time);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 4, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 403;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 5, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_attempts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 404;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 6, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccccccc";
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
    coroutine->m_closure[4],
    coroutine->m_closure[7],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[5],
    coroutine->m_closure[6],
    coroutine->m_closure[2]
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_post,
        mod_consts.const_str_digest_4abe965b3f00289bc1faa405f81a4906,
        code_objects_f23ebbc0faed0e1d53dcfa4bff2b28e9,
        closure,
        8,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__6_post$$$coroutine__1_post_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__7_put(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_max_allowed_time = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_total_attempts = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_max_allowed_time;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_total_attempts;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_url;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_max_allowed_time);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
par_max_allowed_time = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(par_total_attempts);
CHECK_OBJECT(par_total_attempts);
Py_DECREF(par_total_attempts);
par_total_attempts = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_94faa4e84c16fb7f229aa4eecf6b62d3, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 450;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_PUT;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 452;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 454;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 3, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_allowed_time);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 4, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 456;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 5, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_attempts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 457;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 6, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 458;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "cccccccc";
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
    coroutine->m_closure[4],
    coroutine->m_closure[7],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[5],
    coroutine->m_closure[6],
    coroutine->m_closure[2]
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_put,
        mod_consts.const_str_digest_12ae199570cd5d89444926b93e3d5256,
        code_objects_94faa4e84c16fb7f229aa4eecf6b62d3,
        closure,
        8,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__7_put$$$coroutine__1_put_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__8_patch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_max_allowed_time = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_total_attempts = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_max_allowed_time;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_total_attempts;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_url;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_max_allowed_time);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
par_max_allowed_time = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(par_total_attempts);
CHECK_OBJECT(par_total_attempts);
Py_DECREF(par_total_attempts);
par_total_attempts = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b57bd5ec904345bf9a90d9ab555c62dc, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 503;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 503;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 503;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_PATCH;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 505;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 506;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 507;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 3, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_allowed_time);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 508;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 4, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 509;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 5, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_attempts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 510;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 6, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 503;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 503;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 503;
coroutine_heap->type_description_1 = "cccccccc";
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
    coroutine->m_closure[4],
    coroutine->m_closure[7],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[5],
    coroutine->m_closure[6],
    coroutine->m_closure[2]
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_patch,
        mod_consts.const_str_digest_90df6b8a8c0bbdccfbba84792a07572f,
        code_objects_b57bd5ec904345bf9a90d9ab555c62dc,
        closure,
        8,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__8_patch$$$coroutine__1_patch_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__9_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_max_allowed_time = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_total_attempts = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_max_allowed_time;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_total_attempts;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_url;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_max_allowed_time);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
par_max_allowed_time = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(par_total_attempts);
CHECK_OBJECT(par_total_attempts);
Py_DECREF(par_total_attempts);
par_total_attempts = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0d60b571a2afefab96d3504c8355ef0e, module_google$auth$aio$transport$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 556;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_DELETE;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 558;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 559;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 560;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 3, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_allowed_time);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 561;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 4, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 562;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 5, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_attempts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 563;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 6, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 564;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccccc";
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
    coroutine->m_closure[4],
    coroutine->m_closure[7],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[5],
    coroutine->m_closure[6],
    coroutine->m_closure[2]
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete_context,
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_delete,
        mod_consts.const_str_digest_072feda80f3bd96378903a303e5a64af,
        code_objects_0d60b571a2afefab96d3504c8355ef0e,
        closure,
        8,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__9_delete$$$coroutine__1_delete_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$sessions$$$function__10_is_mtls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls = MAKE_FUNCTION_FRAME(tstate, code_objects_fc6823c176ece6b546f1224fff5fac47, module_google$auth$aio$transport$sessions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls->m_type_description == NULL);
frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls = cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__is_mtls);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls == cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls);
    cache_frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$sessions$$$function__10_is_mtls);

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


static PyObject *impl_google$auth$aio$transport$sessions$$$function__11_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close(tstate, tmp_closure_1);

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
struct google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close_locals *coroutine_heap = (struct google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_89e820a82082b4d29dbfd35669e76100, module_google$auth$aio$transport$sessions, sizeof(void *));
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
coroutine->m_frame->m_frame.f_lineno = 576;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 576;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__auth_request);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 576;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 576;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 576;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 576;
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


coroutine_heap->exception_lineno = 576;
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close_context,
        module_google$auth$aio$transport$sessions,
        const_str_plain_close,
        mod_consts.const_str_digest_015e7eeb66d244f596843b8f0a38da5a,
        code_objects_89e820a82082b4d29dbfd35669e76100,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$sessions$$$function__11_close$$$coroutine__1_close_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__10_is_mtls(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__10_is_mtls,
        mod_consts.const_str_plain_is_mtls,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_99a05734e213710e8e9f64f85c2ac7a9,
#endif
        code_objects_fc6823c176ece6b546f1224fff5fac47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_23f04d0fe4e60de83616d6dfbd048b9e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__11_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__11_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_015e7eeb66d244f596843b8f0a38da5a,
#endif
        code_objects_89e820a82082b4d29dbfd35669e76100,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_f6440429f63e8466ced697bac1a070a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard,
        mod_consts.const_str_plain_timeout_guard,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3512253321e0b71a14305af64dbbadbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_9b3a3b8ab95a82e6727f0e52b36478dd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time,
        mod_consts.const_str_plain__remaining_time,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a0741d3a3386cb64baf818ec4e116c5,
#endif
        code_objects_ccd29478086307be6748be4156fa786c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$sessions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout,
        mod_consts.const_str_plain_with_timeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cee4378461b83c8164aa316cbcaf0867,
#endif
        code_objects_53a1eb716648b6a28c412b3cd5390f4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$sessions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_71c8822808df2386f0efe02a82dc68fa,
#endif
        code_objects_9f1f6ab2b857bb21826481e13e7ed69f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel,
        mod_consts.const_str_plain_configure_mtls_channel,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_31c1803ba32e80bdb4eff898a1e7ec5e,
#endif
        code_objects_0cf84ca8379df36bb7703f6a4db16ac3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_12cd158d4f27e96ba5392bef2b7f4797,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure,
        mod_consts.const_str_plain__do_configure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b476479a0d573eb9f90742796f1f8c3b,
#endif
        code_objects_10d9fdcbc07e3c3db1cd5bf17fa18b02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$sessions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__4_request(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__4_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ccf9f09c5a9f8f9fea157012ba153b8d,
#endif
        code_objects_f0bdf27a0ee701abae8f6e054f879def,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_de6bc3591f004dadbd3b8175a8bab9c9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__5_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__5_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2e41bc93d382ff286afcc096576178ef,
#endif
        code_objects_10d068de1f436046ec5dc3a018c9fbbb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__6_post(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__6_post,
        mod_consts.const_str_plain_post,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4abe965b3f00289bc1faa405f81a4906,
#endif
        code_objects_f23ebbc0faed0e1d53dcfa4bff2b28e9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__7_put(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__7_put,
        mod_consts.const_str_plain_put,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_12ae199570cd5d89444926b93e3d5256,
#endif
        code_objects_94faa4e84c16fb7f229aa4eecf6b62d3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__8_patch(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__8_patch,
        mod_consts.const_str_plain_patch,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_90df6b8a8c0bbdccfbba84792a07572f,
#endif
        code_objects_b57bd5ec904345bf9a90d9ab555c62dc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__9_delete(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$sessions$$$function__9_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_072feda80f3bd96378903a303e5a64af,
#endif
        code_objects_0d60b571a2afefab96d3504c8355ef0e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$sessions,
        mod_consts.const_str_digest_9b3efd1297986409dc558c0e68419abe,
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

static function_impl_code const function_table_google$auth$aio$transport$sessions[] = {
impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__1__remaining_time,
impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard$$$asyncgen__1_timeout_guard$$$function__2_with_timeout,
impl_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel$$$coroutine__1_configure_mtls_channel$$$function__1__do_configure,
impl_google$auth$aio$transport$sessions$$$function__1_timeout_guard,
impl_google$auth$aio$transport$sessions$$$function__2___init__,
impl_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel,
impl_google$auth$aio$transport$sessions$$$function__4_request,
impl_google$auth$aio$transport$sessions$$$function__5_get,
impl_google$auth$aio$transport$sessions$$$function__6_post,
impl_google$auth$aio$transport$sessions$$$function__7_put,
impl_google$auth$aio$transport$sessions$$$function__8_patch,
impl_google$auth$aio$transport$sessions$$$function__9_delete,
impl_google$auth$aio$transport$sessions$$$function__10_is_mtls,
impl_google$auth$aio$transport$sessions$$$function__11_close,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$aio$transport$sessions);
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
        module_google$auth$aio$transport$sessions,
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
        function_table_google$auth$aio$transport$sessions,
        sizeof(function_table_google$auth$aio$transport$sessions) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.aio.transport.sessions";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$aio$transport$sessions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$aio$transport$sessions");

    // Store the module for future use.
    module_google$auth$aio$transport$sessions = module;

    moduledict_google$auth$aio$transport$sessions = MODULE_DICT(module_google$auth$aio$transport$sessions);

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
        PRINT_STRING("google$auth$aio$transport$sessions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$aio$transport$sessions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$aio$transport$sessions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aio.transport.sessions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$aio$transport$sessions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$aio$transport$sessions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$aio$transport$sessions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$aio$transport$sessions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aio$transport$sessions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aio$transport$sessions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$aio$transport$sessions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$aio$transport$sessions);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$sessions;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$aio$transport$sessions = MAKE_MODULE_FRAME(code_objects_3f427b883d249a2f7ebcf8e110ea3e45, module_google$auth$aio$transport$sessions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$sessions);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$sessions) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$aio$transport$sessions$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$aio$transport$sessions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 15;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_asynccontextmanager_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 16;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_asynccontextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_asynccontextmanager);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_asynccontextmanager, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 18;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_11);
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
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_12);
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
tmp_name_value_4 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__exponential_backoff_str_plain_exceptions_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 21;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

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
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain__exponential_backoff,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__exponential_backoff);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff, tmp_assign_source_14);
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
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_exceptions);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_15);
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
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_transport_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 22;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_transport,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_transport);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_transport, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_ced036a8dd44419291c265f31a9c9296;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Credentials_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 23;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_Credentials,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Credentials);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_c0ff43dd516001b189426b5de2ba23e2;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_mtls_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 24;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_mtls,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_mtls);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_mtls, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_TimeoutError_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 25;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_TimeoutError,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_TimeoutError);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutError, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = Py_None;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 26;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_google, tmp_assign_source_20);
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_aiohttp;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = Py_None;
tmp_level_value_10 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 34;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_aiohttp;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_ClientTimeout_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 35;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_3;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_ClientTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ClientTimeout);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout, tmp_assign_source_22);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$sessions, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$sessions, exception_keeper_lineno_3);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout, tmp_assign_source_23);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 33;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$sessions->m_frame)) {
        frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$auth$aio$transport$sessions;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_Request_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 41;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_5;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_google$auth$aio$transport$sessions,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Request);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AiohttpRequest, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = Py_True;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AIOHTTP_INSTALLED, tmp_assign_source_25);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$sessions, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$sessions, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
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
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = Py_False;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AIOHTTP_INSTALLED, tmp_assign_source_26);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 40;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$sessions->m_frame)) {
        frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_6;
branch_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
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
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$aio$transport$sessions$asynccontextmanager(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asynccontextmanager);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__1_timeout_guard(tstate);

frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 48;
tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout_guard, tmp_assign_source_27);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_4b00ce312a7bf0cfd5a3f1e049854eea;
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_28aced4135d0768c4ee50a8eca538edb;
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncAuthorizedSession;
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_92;
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2 = MAKE_CLASS_FRAME(tstate, code_objects_41716c7f2d65b21bc51b32b0db2d59b2, module_google$auth$aio$transport$sessions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_credentials;
tmp_dict_value_1 = module_var_accessor_google$auth$aio$transport$sessions$Credentials(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_auth_request;
tmp_expression_value_1 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Request);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__2___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__3_configure_mtls_channel(tstate, tmp_defaults_2);

tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_configure_mtls_channel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_tuple_element_1 = Py_None;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_1);
tmp_expression_value_3 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_3, 2, tmp_tuple_element_1);
tmp_expression_value_4 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_3, 3, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_3, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_dict_key_2 = mod_consts.const_str_plain_method;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_annotations_2 = _PyDict_NewPresized( 8 );
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_6;
PyObject *tmp_expression_value_11;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_url;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_data;
tmp_expression_value_6 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_subscript_value_2 = (PyObject *)&PyBytes_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_headers;
tmp_expression_value_7 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_8 = module_var_accessor_google$auth$aio$transport$sessions$Mapping(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_subscript_value_4 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_max_allowed_time;
tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
tmp_expression_value_9 = module_var_accessor_google$auth$aio$transport$sessions$Union(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_tuple_element_2 = (PyObject *)&PyFloat_Type;
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_5);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_total_attempts;
tmp_expression_value_10 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_subscript_value_6 = (PyObject *)&PyLong_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_6);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_11 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Response);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_defaults_3);
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__4_request(tstate, tmp_defaults_3, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_3;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_expression_value_12 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_expression_value_12 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_wraps);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_2 = DICT_GET_ITEM0(tstate, locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_request);

if (unlikely(tmp_args_element_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);

exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 302;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_3 = Py_None;
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_3);
tmp_expression_value_13 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_4, 2, tmp_tuple_element_3);
tmp_expression_value_14 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_4, 3, tmp_tuple_element_3);
tmp_expression_value_15 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_4, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_defaults_4);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_key_3 = mod_consts.const_str_plain_url;
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_annotations_3 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_8;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_11;
PyObject *tmp_expression_value_21;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_data;
tmp_expression_value_16 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_subscript_value_7 = (PyObject *)&PyBytes_Type;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_7);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_headers;
tmp_expression_value_17 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_18 = module_var_accessor_google$auth$aio$transport$sessions$Mapping(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_subscript_value_9 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_9);
if (tmp_subscript_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_max_allowed_time;
tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_timeout;
tmp_expression_value_19 = module_var_accessor_google$auth$aio$transport$sessions$Union(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_tuple_element_4 = (PyObject *)&PyFloat_Type;
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_10);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_total_attempts;
tmp_expression_value_20 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_subscript_value_11 = (PyObject *)&PyLong_Type;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_11);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_21 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Response);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_defaults_4);
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__5_get(tstate, tmp_defaults_4, tmp_annotations_3);

frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 302;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, const_str_plain_get, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_expression_value_22 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_expression_value_22 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_wraps);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_4 = DICT_GET_ITEM0(tstate, locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_request);

if (unlikely(tmp_args_element_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);

exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 355;
tmp_called_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_5 = Py_None;
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_5);
tmp_expression_value_23 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_defaults_5, 2, tmp_tuple_element_5);
tmp_expression_value_24 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_defaults_5, 3, tmp_tuple_element_5);
tmp_expression_value_25 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_defaults_5, 4, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_defaults_5);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dict_key_4 = mod_consts.const_str_plain_url;
tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
tmp_annotations_4 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_12;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_13;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_14;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_15;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_16;
PyObject *tmp_expression_value_31;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_data;
tmp_expression_value_26 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_subscript_value_12 = (PyObject *)&PyBytes_Type;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_12);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_headers;
tmp_expression_value_27 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_expression_value_28 = module_var_accessor_google$auth$aio$transport$sessions$Mapping(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_subscript_value_14 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_14);
if (tmp_subscript_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_13);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_max_allowed_time;
tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_timeout;
tmp_expression_value_29 = module_var_accessor_google$auth$aio$transport$sessions$Union(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_tuple_element_6 = (PyObject *)&PyFloat_Type;
tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_15);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_15);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_total_attempts;
tmp_expression_value_30 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_subscript_value_16 = (PyObject *)&PyLong_Type;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_16);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_31 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_Response);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_defaults_5);
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_args_element_value_5 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__6_post(tstate, tmp_defaults_5, tmp_annotations_4);

frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 355;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_post, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_defaults_6;
PyObject *tmp_tuple_element_7;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_expression_value_32 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_expression_value_32 == NULL));
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_wraps);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_6 = DICT_GET_ITEM0(tstate, locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_request);

if (unlikely(tmp_args_element_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_7);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);

exception_lineno = 408;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 408;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 408;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_7 = Py_None;
tmp_defaults_6 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 1, tmp_tuple_element_7);
tmp_expression_value_33 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_defaults_6, 2, tmp_tuple_element_7);
tmp_expression_value_34 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 415;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_defaults_6, 3, tmp_tuple_element_7);
tmp_expression_value_35 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_defaults_6, 4, tmp_tuple_element_7);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_defaults_6);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_dict_key_5 = mod_consts.const_str_plain_url;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_annotations_5 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_17;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_18;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_19;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_20;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_21;
PyObject *tmp_expression_value_41;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_data;
tmp_expression_value_36 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_subscript_value_17 = (PyObject *)&PyBytes_Type;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_17);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_headers;
tmp_expression_value_37 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 413;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_expression_value_38 = module_var_accessor_google$auth$aio$transport$sessions$Mapping(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 413;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_subscript_value_19 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_19);
if (tmp_subscript_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_18);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_max_allowed_time;
tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_timeout;
tmp_expression_value_39 = module_var_accessor_google$auth$aio$transport$sessions$Union(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 415;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_tuple_element_8 = (PyObject *)&PyFloat_Type;
tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 415;
type_description_2 = "o";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM0(tmp_subscript_value_20, 1, tmp_tuple_element_8);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_subscript_value_20);
goto dict_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_20);
CHECK_OBJECT(tmp_subscript_value_20);
Py_DECREF(tmp_subscript_value_20);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_total_attempts;
tmp_expression_value_40 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_subscript_value_21 = (PyObject *)&PyLong_Type;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_21);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_expression_value_41 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_Response);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_defaults_6);
Py_DECREF(tmp_annotations_5);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_args_element_value_7 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__7_put(tstate, tmp_defaults_6, tmp_annotations_5);

frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 408;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_put, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_42;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_defaults_7;
PyObject *tmp_tuple_element_9;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_expression_value_42 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_expression_value_42 == NULL));
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_wraps);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_8 = DICT_GET_ITEM0(tstate, locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_request);

if (unlikely(tmp_args_element_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_9);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);

exception_lineno = 461;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 461;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 461;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_9 = Py_None;
tmp_defaults_7 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_9);
tmp_expression_value_43 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 467;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_defaults_7, 2, tmp_tuple_element_9);
tmp_expression_value_44 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_defaults_7, 3, tmp_tuple_element_9);
tmp_expression_value_45 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 469;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_defaults_7, 4, tmp_tuple_element_9);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_defaults_7);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_dict_key_6 = mod_consts.const_str_plain_url;
tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
tmp_annotations_6 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_22;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_23;
PyObject *tmp_expression_value_48;
PyObject *tmp_subscript_value_24;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_25;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_26;
PyObject *tmp_expression_value_51;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_data;
tmp_expression_value_46 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_subscript_value_22 = (PyObject *)&PyBytes_Type;
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_22);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_headers;
tmp_expression_value_47 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 466;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_expression_value_48 = module_var_accessor_google$auth$aio$transport$sessions$Mapping(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 466;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_subscript_value_24 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_24);
if (tmp_subscript_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_23);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_max_allowed_time;
tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_timeout;
tmp_expression_value_49 = module_var_accessor_google$auth$aio$transport$sessions$Union(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_tuple_element_10 = (PyObject *)&PyFloat_Type;
tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_10);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_25);
goto dict_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_25);
CHECK_OBJECT(tmp_subscript_value_25);
Py_DECREF(tmp_subscript_value_25);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_total_attempts;
tmp_expression_value_50 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 469;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_subscript_value_26 = (PyObject *)&PyLong_Type;
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_26);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_expression_value_51 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 471;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_Response);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_defaults_7);
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_args_element_value_9 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__8_patch(tstate, tmp_defaults_7, tmp_annotations_6);

frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 461;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_patch, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_defaults_8;
PyObject *tmp_tuple_element_11;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_expression_value_52 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_expression_value_52 == NULL));
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_wraps);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_10 = DICT_GET_ITEM0(tstate, locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_request);

if (unlikely(tmp_args_element_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_11);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);

exception_lineno = 514;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 514;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 514;
tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_11 = Py_None;
tmp_defaults_8 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyTuple_SET_ITEM0(tmp_defaults_8, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_8, 1, tmp_tuple_element_11);
tmp_expression_value_53 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_defaults_8, 2, tmp_tuple_element_11);
tmp_expression_value_54 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_defaults_8, 3, tmp_tuple_element_11);
tmp_expression_value_55 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_DEFAULT_MAX_RETRY_ATTEMPTS);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_defaults_8, 4, tmp_tuple_element_11);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_defaults_8);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_dict_key_7 = mod_consts.const_str_plain_url;
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
tmp_annotations_7 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_27;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_28;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_29;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_30;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_31;
PyObject *tmp_expression_value_61;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_data;
tmp_expression_value_56 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 518;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_subscript_value_27 = (PyObject *)&PyBytes_Type;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_27);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_headers;
tmp_expression_value_57 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 519;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_expression_value_58 = module_var_accessor_google$auth$aio$transport$sessions$Mapping(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 519;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_subscript_value_29 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_29);
if (tmp_subscript_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_28);
CHECK_OBJECT(tmp_subscript_value_28);
Py_DECREF(tmp_subscript_value_28);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_max_allowed_time;
tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_timeout;
tmp_expression_value_59 = module_var_accessor_google$auth$aio$transport$sessions$Union(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_tuple_element_12 = (PyObject *)&PyFloat_Type;
tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_30, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_google$auth$aio$transport$sessions$ClientTimeout(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_subscript_value_30, 1, tmp_tuple_element_12);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_subscript_value_30);
goto dict_build_exception_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_30);
CHECK_OBJECT(tmp_subscript_value_30);
Py_DECREF(tmp_subscript_value_30);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_total_attempts;
tmp_expression_value_60 = module_var_accessor_google$auth$aio$transport$sessions$Optional(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_subscript_value_31 = (PyObject *)&PyLong_Type;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_31);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_61 = module_var_accessor_google$auth$aio$transport$sessions$transport(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_Response);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_defaults_8);
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_args_element_value_11 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__9_delete(tstate, tmp_defaults_8, tmp_annotations_7);

frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 514;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_12;
tmp_called_value_12 = (PyObject *)&PyProperty_Type;

tmp_args_element_value_12 = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__10_is_mtls(tstate);

frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame.f_lineno = 567;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain_is_mtls, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$sessions$$$function__11_close(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_e26aaf480b6a7321af156c58707e1245_tuple;
tmp_result = DICT_SET_ITEM(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_1;
tmp_called_value_13 = (PyObject *)&PyType_Type;
tmp_tuple_element_13 = mod_consts.const_str_plain_AsyncAuthorizedSession;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$aio$transport$sessions->m_frame.f_lineno = 92;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_9;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92);
locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92);
locals_google$auth$aio$transport$sessions$$$class__1_AsyncAuthorizedSession_92 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 92;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAuthorizedSession, tmp_assign_source_30);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$sessions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$sessions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$sessions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$aio$transport$sessions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$aio$transport$sessions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aio.transport.sessions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$aio$transport$sessions);
    return module_google$auth$aio$transport$sessions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$sessions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$aio$transport$sessions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

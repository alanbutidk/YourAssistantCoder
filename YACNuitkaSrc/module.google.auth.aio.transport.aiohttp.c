/* Generated code for Python module 'google$auth$aio$transport$aiohttp'
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



/* The "module_google$auth$aio$transport$aiohttp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$aio$transport$aiohttp;
PyDictObject *moduledict_google$auth$aio$transport$aiohttp;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__response;
PyObject *const_str_plain_status;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_items;
PyObject *const_str_plain_self;
PyObject *const_str_plain_content;
PyObject *const_str_plain_iter_chunked;
PyObject *const_str_plain_chunk_size;
PyObject *const_str_plain_aiohttp;
PyObject *const_str_plain_ClientPayloadError;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_ResponseError;
PyObject *const_tuple_str_digest_985942270a925d05b0d644dbcd59e71c_tuple;
PyObject *const_str_digest_348bf71e331c9735b4586700c50b8723;
PyObject *const_str_plain_ClientResponseError;
PyObject *const_tuple_str_digest_af51ef5b83bb2c1192186921627e8373_tuple;
PyObject *const_str_digest_9bde344001d4d2e216cf8aea5ccb2d94;
PyObject *const_str_digest_873021ee4cc0d5585e9d8e185b1ab52e;
PyObject *const_str_plain__session;
PyObject *const_str_plain__closed;
PyObject *const_str_digest_510d82ad0ea3bb9939b020d6d062c535;
PyObject *const_str_plain_TransportError;
PyObject *const_tuple_str_digest_cd597e30817087d75cd75ddb0d440fd8_tuple;
PyObject *const_str_plain_ClientSession;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_ClientTimeout;
PyObject *const_tuple_str_plain_total_tuple;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_request_log;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_method;
PyObject *const_str_plain_url;
PyObject *const_str_plain_body;
PyObject *const_str_plain_request;
PyObject *const_str_plain_data;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain__helpers_async;
PyObject *const_str_plain_response_log_async;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_ClientError;
PyObject *const_str_digest_2bd02a4aedba6b361df973ce8f3cd7fd;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_TimeoutError;
PyObject *const_str_plain_total;
PyObject *const_str_digest_80c028772a8fd83f29078bd99cbf527e;
PyObject *const_str_digest_1a996111c094ea2fd44da8e66488e222;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109;
PyObject *const_str_digest_370287a5a1e41d3087e13e0a153bfad9;
PyObject *const_str_digest_a230b600e738fe1f4bbdb8d677db881f;
PyObject *const_str_digest_eeb533dc830cec1ba332c5be642a3319;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_AsyncGenerator;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_caught_exc;
PyObject *const_str_digest_d944067d7db26a9babbe30c0c530e667;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1;
PyObject *const_tuple_str_plain_transport_tuple;
PyObject *const_str_plain_transport;
PyObject *const_tuple_str_plain_ClientTimeout_tuple;
PyObject *const_tuple_type_ImportError_type_AttributeError_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_7dc5a140662b24154616e907a3f54390_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_7dc5a140662b24154616e907a3f54390;
PyObject *const_str_digest_7aa7de4dbfe633711c4310ba9863f87d;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_response;
PyObject *const_str_plain_ClientResponse;
PyObject *const_str_digest_e9cd727418a159a4992d6182f80db48c;
PyObject *const_str_plain_property;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_plain_return;
PyObject *const_str_plain_status_code;
PyObject *const_str_digest_0c4783a70c167e802bef02970e03edbc;
PyObject *const_str_plain_str;
PyObject *const_str_digest_b574f047d4cb5998aff6fbf669b57152;
PyObject *const_tuple_int_pos_1024_tuple;
PyObject *const_tuple_str_plain__response_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Request;
PyObject *const_str_digest_b569238c040ea3c1cd797c8f8ca047ff;
PyObject *const_int_pos_94;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_session;
PyObject *const_str_digest_45e22ae6dbd065d35ef185f04e7a930e;
PyObject *const_str_plain_GET;
PyObject *const_str_plain__DEFAULT_TIMEOUT_SECONDS;
PyObject *const_str_plain_float;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_tuple_str_plain__session_str_plain__closed_tuple;
PyObject *const_str_digest_86ecef13583b70eaf6a8d0bc07d11f18;
PyObject *const_str_digest_8e967e900e72b410c4e24eb86355b0ed;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_e7ca9a3be01c65f5447c9f7f58cc9aca_tuple;
PyObject *const_tuple_str_plain_self_str_plain_session_tuple;
PyObject *const_tuple_str_plain_self_str_plain_response_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_d257e0a2fdd7414b04ff5355749c49ee_tuple;
PyObject *const_tuple_str_plain_self_str_plain_exc_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[114];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.aio.transport.aiohttp"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_chunked);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiohttp);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientPayloadError);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_985942270a925d05b0d644dbcd59e71c_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_348bf71e331c9735b4586700c50b8723);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientResponseError);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_af51ef5b83bb2c1192186921627e8373_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bde344001d4d2e216cf8aea5ccb2d94);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_873021ee4cc0d5585e9d8e185b1ab52e);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__session);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__closed);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_510d82ad0ea3bb9939b020d6d062c535);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cd597e30817087d75cd75ddb0d440fd8_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientSession);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientTimeout);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_total_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_log);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers_async);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_log_async);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientError);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bd02a4aedba6b361df973ce8f3cd7fd);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutError);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_total);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_80c028772a8fd83f29078bd99cbf527e);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a996111c094ea2fd44da8e66488e222);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_370287a5a1e41d3087e13e0a153bfad9);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_a230b600e738fe1f4bbdb8d677db881f);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_eeb533dc830cec1ba332c5be642a3319);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGenerator);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_caught_exc);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_d944067d7db26a9babbe30c0c530e667);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_transport);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientTimeout_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7dc5a140662b24154616e907a3f54390_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_7aa7de4dbfe633711c4310ba9863f87d);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientResponse);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9cd727418a159a4992d6182f80db48c);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c4783a70c167e802bef02970e03edbc);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_b574f047d4cb5998aff6fbf669b57152);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__response_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_b569238c040ea3c1cd797c8f8ca047ff);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_94);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_session);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_float);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__session_str_plain__closed_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_86ecef13583b70eaf6a8d0bc07d11f18);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e967e900e72b410c4e24eb86355b0ed);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_e7ca9a3be01c65f5447c9f7f58cc9aca_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_session_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_d257e0a2fdd7414b04ff5355749c49ee_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_exc_tuple);
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
void checkModuleConstants_google$auth$aio$transport$aiohttp(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_chunked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_chunked);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_size);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiohttp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiohttp);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientPayloadError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientPayloadError);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseError);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_985942270a925d05b0d644dbcd59e71c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_985942270a925d05b0d644dbcd59e71c_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_348bf71e331c9735b4586700c50b8723));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_348bf71e331c9735b4586700c50b8723);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientResponseError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientResponseError);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_af51ef5b83bb2c1192186921627e8373_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_af51ef5b83bb2c1192186921627e8373_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bde344001d4d2e216cf8aea5ccb2d94));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bde344001d4d2e216cf8aea5ccb2d94);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_873021ee4cc0d5585e9d8e185b1ab52e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_873021ee4cc0d5585e9d8e185b1ab52e);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__session);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__closed);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_510d82ad0ea3bb9939b020d6d062c535));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_510d82ad0ea3bb9939b020d6d062c535);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cd597e30817087d75cd75ddb0d440fd8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_cd597e30817087d75cd75ddb0d440fd8_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientSession);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientTimeout);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_total_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_total_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_log);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers_async));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers_async);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_log_async));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_log_async);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientError);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bd02a4aedba6b361df973ce8f3cd7fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bd02a4aedba6b361df973ce8f3cd7fd);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutError);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_total));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_80c028772a8fd83f29078bd99cbf527e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80c028772a8fd83f29078bd99cbf527e);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a996111c094ea2fd44da8e66488e222));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a996111c094ea2fd44da8e66488e222);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_370287a5a1e41d3087e13e0a153bfad9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_370287a5a1e41d3087e13e0a153bfad9);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_a230b600e738fe1f4bbdb8d677db881f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a230b600e738fe1f4bbdb8d677db881f);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_eeb533dc830cec1ba332c5be642a3319));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eeb533dc830cec1ba332c5be642a3319);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGenerator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncGenerator);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_caught_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_caught_exc);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_d944067d7db26a9babbe30c0c530e667));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d944067d7db26a9babbe30c0c530e667);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_transport_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transport);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientTimeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClientTimeout_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7dc5a140662b24154616e907a3f54390_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7dc5a140662b24154616e907a3f54390_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_7aa7de4dbfe633711c4310ba9863f87d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7aa7de4dbfe633711c4310ba9863f87d);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientResponse);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9cd727418a159a4992d6182f80db48c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9cd727418a159a4992d6182f80db48c);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c4783a70c167e802bef02970e03edbc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c4783a70c167e802bef02970e03edbc);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_b574f047d4cb5998aff6fbf669b57152));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b574f047d4cb5998aff6fbf669b57152);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__response_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_b569238c040ea3c1cd797c8f8ca047ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b569238c040ea3c1cd797c8f8ca047ff);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_94));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_94);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__session_str_plain__closed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__session_str_plain__closed_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_86ecef13583b70eaf6a8d0bc07d11f18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86ecef13583b70eaf6a8d0bc07d11f18);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e967e900e72b410c4e24eb86355b0ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e967e900e72b410c4e24eb86355b0ed);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_e7ca9a3be01c65f5447c9f7f58cc9aca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e7ca9a3be01c65f5447c9f7f58cc9aca_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_session_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_session_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_d257e0a2fdd7414b04ff5355749c49ee_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d257e0a2fdd7414b04ff5355749c49ee_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_exc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_exc_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 16
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
static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$AsyncGenerator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGenerator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncGenerator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncGenerator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncGenerator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncGenerator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGenerator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGenerator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGenerator);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$ClientTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$Mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$_helpers_async(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers_async);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers_async);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers_async, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers_async);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers_async, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers_async);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers_async);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers_async);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$caught_exc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aio$transport$aiohttp$transport(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aio$transport$aiohttp->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aio$transport$aiohttp->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aio$transport$aiohttp->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_00f024fea3008743c0580cd6444fd91d;
static PyCodeObject *code_objects_6993868587ebd8a4ff78461e7efbdc6b;
static PyCodeObject *code_objects_f085742dabd7b6320ba6a7fa657bec6a;
static PyCodeObject *code_objects_58704555673da053a9f79ee801483746;
static PyCodeObject *code_objects_902dbfb40931542e1a1dc3807632cf64;
static PyCodeObject *code_objects_1ccd442c82aa5c83c3e937874ec288ab;
static PyCodeObject *code_objects_f98443daa4ce6451e26bd7d38ec65008;
static PyCodeObject *code_objects_e29baf1689dee5aff5d8fa8f101a989e;
static PyCodeObject *code_objects_c1339290d2a8a6eec67429519ed50c80;
static PyCodeObject *code_objects_02e8e6db9fdfad01f313d6b36079d56d;
static PyCodeObject *code_objects_3c2fc7b92c10a57c38d8ef55be89d1e4;
static PyCodeObject *code_objects_1f2ec8d7c7f6ea84bf5c0ca8478c0aca;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_86ecef13583b70eaf6a8d0bc07d11f18); CHECK_OBJECT(module_filename_obj);
code_objects_00f024fea3008743c0580cd6444fd91d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_8e967e900e72b410c4e24eb86355b0ed, mod_consts.const_str_digest_8e967e900e72b410c4e24eb86355b0ed, NULL, NULL, 0, 0, 0);
code_objects_6993868587ebd8a4ff78461e7efbdc6b = MAKE_CODE_OBJECT(module_filename_obj, 94, 0, mod_consts.const_str_plain_Request, mod_consts.const_str_plain_Request, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f085742dabd7b6320ba6a7fa657bec6a = MAKE_CODE_OBJECT(module_filename_obj, 45, 0, mod_consts.const_str_plain_Response, mod_consts.const_str_plain_Response, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_58704555673da053a9f79ee801483746 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109, mod_consts.const_tuple_e7ca9a3be01c65f5447c9f7f58cc9aca_tuple, NULL, 6, 0, 0);
code_objects_902dbfb40931542e1a1dc3807632cf64 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e, mod_consts.const_tuple_str_plain_self_str_plain_session_tuple, NULL, 2, 0, 0);
code_objects_1ccd442c82aa5c83c3e937874ec288ab = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_e9cd727418a159a4992d6182f80db48c, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple, NULL, 2, 0, 0);
code_objects_f98443daa4ce6451e26bd7d38ec65008 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_a230b600e738fe1f4bbdb8d677db881f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e29baf1689dee5aff5d8fa8f101a989e = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_873021ee4cc0d5585e9d8e185b1ab52e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c1339290d2a8a6eec67429519ed50c80 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_content, mod_consts.const_str_digest_348bf71e331c9735b4586700c50b8723, mod_consts.const_tuple_d257e0a2fdd7414b04ff5355749c49ee_tuple, NULL, 2, 0, 0);
code_objects_02e8e6db9fdfad01f313d6b36079d56d = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_headers, mod_consts.const_str_digest_b574f047d4cb5998aff6fbf669b57152, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3c2fc7b92c10a57c38d8ef55be89d1e4 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_read, mod_consts.const_str_digest_9bde344001d4d2e216cf8aea5ccb2d94, mod_consts.const_tuple_str_plain_self_str_plain_exc_tuple, NULL, 1, 0, 0);
code_objects_1f2ec8d7c7f6ea84bf5c0ca8478c0aca = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_status_code, mod_consts.const_str_digest_0c4783a70c167e802bef02970e03edbc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_ASYNCGEN_google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__2_status_code(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__3_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__4_content(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__5_read(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__6_close(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__8___call__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__9_close(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1ccd442c82aa5c83c3e937874ec288ab, module_google$auth$aio$transport$aiohttp, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__->m_type_description == NULL);
frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__ = cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__) == 2);

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__,
    type_description_1,
    par_self,
    par_response
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__ == cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__);
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$aiohttp$$$function__1___init__);

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


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__2_status_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code = MAKE_FUNCTION_FRAME(tstate, code_objects_1f2ec8d7c7f6ea84bf5c0ca8478c0aca, module_google$auth$aio$transport$aiohttp, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code->m_type_description == NULL);
frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code = cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code) == 2);

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


exception_lineno = 63;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code == cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code);
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$aiohttp$$$function__2_status_code);

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


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__3_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *outline_0_var_key = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_02e8e6db9fdfad01f313d6b36079d56d, module_google$auth$aio$transport$aiohttp, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers->m_type_description == NULL);
frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers = cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__response);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers->m_frame.f_lineno = 68;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
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
exception_lineno = 68;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "o";
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

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_7;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_8;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_key);
tmp_dictset38_key_1 = outline_0_var_key;
CHECK_OBJECT(outline_0_var_value);
tmp_dictset38_value_1 = outline_0_var_value;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
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
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
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
exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers == cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers);
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$aiohttp$$$function__3_headers);

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


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__4_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_chunk_size = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_chunk_size;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_ASYNCGEN_google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_chunk_size);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
par_chunk_size = NULL;
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
struct google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content_locals {
PyObject *var_chunk;
PyObject *var_exc;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content_locals *asyncgen_heap = (struct google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content_locals *)asyncgen->m_heap_storage;
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
asyncgen_heap->var_chunk = NULL;
asyncgen_heap->var_exc = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c1339290d2a8a6eec67429519ed50c80, module_google$auth$aio$transport$aiohttp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__response);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_iter_chunked);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 74;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 73;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_1;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_5 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_4;
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


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_4;
}
tmp_assign_source_2 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_chunk;
    asyncgen_heap->var_chunk = tmp_assign_source_3;
    Py_INCREF(asyncgen_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_chunk);
tmp_expression_value_6 = asyncgen_heap->var_chunk;
Py_INCREF(tmp_expression_value_6);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_6;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 76;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 73;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_expression_value_7;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_expression_value_7 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 77;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ClientPayloadError);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 77;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
}
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 77;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(asyncgen_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_4);
asyncgen_heap->var_exc = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_raise_cause_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$aiohttp$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 78;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_6;
}
asyncgen->m_frame->m_frame.f_lineno = 78;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_ResponseError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_985942270a925d05b0d644dbcd59e71c_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 78;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_6;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 78;
asyncgen_heap->type_description_1 = "ccoo";
    goto try_except_handler_6;
}
CHECK_OBJECT(asyncgen_heap->var_exc);
tmp_raise_cause_1 = asyncgen_heap->var_exc;
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
asyncgen_heap->exception_lineno = 80;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &asyncgen_heap->exception_state, tmp_raise_cause_1);
asyncgen_heap->type_description_1 = "ccoo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_exc);
asyncgen_heap->var_exc = NULL;

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_2;
branch_no_2:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 72;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccoo";
goto try_except_handler_5;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_5 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_5;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;

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
    asyncgen->m_closure[1],
    asyncgen->m_closure[0],
    asyncgen_heap->var_chunk,
    asyncgen_heap->var_exc
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
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_6 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_6 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_6;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_6;

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

static PyObject *MAKE_ASYNCGEN_google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content_context,
        module_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_content,
        mod_consts.const_str_digest_348bf71e331c9735b4586700c50b8723,
        code_objects_c1339290d2a8a6eec67429519ed50c80,
        closure,
        2,
#if 1
        sizeof(struct google$auth$aio$transport$aiohttp$$$function__4_content$$$asyncgen__1_content_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__5_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read(tstate, tmp_closure_1);

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
struct google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read_locals {
PyObject *var_exc;
char const *type_description_1;
PyObject *tmp_return_value;
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
};
#endif

static PyObject *google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read_locals *coroutine_heap = (struct google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_exc = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3c2fc7b92c10a57c38d8ef55be89d1e4, module_google$auth$aio$transport$aiohttp, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
coroutine->m_frame->m_frame.f_lineno = 85;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 85;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
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


coroutine_heap->exception_lineno = 85;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
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
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_4 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ClientResponseError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(coroutine_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_1);
coroutine_heap->var_exc = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_raise_cause_1;
tmp_called_instance_2 = module_var_accessor_google$auth$aio$transport$aiohttp$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 87;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 87;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_ResponseError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_af51ef5b83bb2c1192186921627e8373_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 87;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 87;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
CHECK_OBJECT(coroutine_heap->var_exc);
tmp_raise_cause_1 = coroutine_heap->var_exc;
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
coroutine_heap->exception_lineno = 87;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_1);
coroutine_heap->type_description_1 = "co";
goto try_except_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 84;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "co";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
    coroutine->m_closure[0],
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read_context,
        module_google$auth$aio$transport$aiohttp,
        const_str_plain_read,
        mod_consts.const_str_digest_9bde344001d4d2e216cf8aea5ccb2d94,
        code_objects_3c2fc7b92c10a57c38d8ef55be89d1e4,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$aiohttp$$$function__5_read$$$coroutine__1_read_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__6_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close(tstate, tmp_closure_1);

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
struct google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
};
#endif

static PyObject *google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close_locals *coroutine_heap = (struct google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e29baf1689dee5aff5d8fa8f101a989e, module_google$auth$aio$transport$aiohttp, sizeof(void *));
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__response);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close_context,
        module_google$auth$aio$transport$aiohttp,
        const_str_plain_close,
        mod_consts.const_str_digest_873021ee4cc0d5585e9d8e185b1ab52e,
        code_objects_e29baf1689dee5aff5d8fa8f101a989e,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$aiohttp$$$function__6_close$$$coroutine__1_close_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_session = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_902dbfb40931542e1a1dc3807632cf64, module_google$auth$aio$transport$aiohttp, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__->m_type_description == NULL);
frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__ = cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_session);
tmp_assattr_value_1 = par_session;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__session, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__closed, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__,
    type_description_1,
    par_self,
    par_session
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__ == cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__);
    cache_frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$aio$transport$aiohttp$$$function__7___init__);

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
CHECK_OBJECT(par_session);
Py_DECREF(par_session);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_session);
Py_DECREF(par_session);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__8___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_method = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_body = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[6]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[7];
tmp_closure_1[0] = par_body;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_kwargs;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_method;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_url;
Py_INCREF(tmp_closure_1[6]);
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call__(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_method);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
par_method = NULL;
CHECK_OBJECT(par_body);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
par_body = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call___locals {
PyObject *var_client_timeout;
PyObject *var_response;
PyObject *var_caught_exc;
PyObject *var_client_exc;
PyObject *var_timeout_seconds;
PyObject *var_timeout_exc;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
bool tmp_result;
char yield_tmps[1024];
PyObject *tmp_return_value;
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
};
#endif

static PyObject *google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call___locals *coroutine_heap = (struct google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_client_timeout = NULL;
coroutine_heap->var_response = NULL;
coroutine_heap->var_caught_exc = NULL;
coroutine_heap->var_client_exc = NULL;
coroutine_heap->var_timeout_seconds = NULL;
coroutine_heap->var_timeout_exc = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_58704555673da053a9f79ee801483746, module_google$auth$aio$transport$aiohttp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__closed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$aiohttp$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 164;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 164;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TransportError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_cd597e30817087d75cd75ddb0d440fd8_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 164;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 164;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccoooooo";
goto try_except_handler_2;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 166;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__session);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 166;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 166;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_1;
tmp_called_instance_2 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 167;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 167;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ClientSession);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 167;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 167;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__session, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 167;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 169;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_isinstance_inst_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_expression_value_3 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 169;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ClientTimeout);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 169;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 169;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_1;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_assign_source_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
assert(coroutine_heap->var_client_timeout == NULL);
Py_INCREF(tmp_assign_source_1);
coroutine_heap->var_client_timeout = tmp_assign_source_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_4 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ClientTimeout);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine->m_frame->m_frame.f_lineno = 172;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_total_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->var_client_timeout == NULL);
coroutine_heap->var_client_timeout = tmp_assign_source_2;
}
branch_end_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_5 = module_var_accessor_google$auth$aio$transport$aiohttp$_helpers(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_request_log);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = module_var_accessor_google$auth$aio$transport$aiohttp$_LOGGER(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
coroutine->m_frame->m_frame.f_lineno = 174;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 174;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__session);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 174;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 174;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 176;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_dict_key_1 = mod_consts.const_str_plain_data;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 177;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 3 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(coroutine_heap->var_client_timeout);
tmp_dict_value_1 = coroutine_heap->var_client_timeout;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
Py_DECREF(tmp_direct_call_arg3_1);
goto try_except_handler_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
Py_DECREF(tmp_direct_call_arg3_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 180;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}

tmp_direct_call_arg4_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_expression_value_7 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 174;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 174;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_direct_call_arg4_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_direct_call_arg4_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 174;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = yield_return_value;
assert(coroutine_heap->var_response == NULL);
coroutine_heap->var_response = tmp_assign_source_3;
}
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 182;
tmp_expression_value_12 = module_var_accessor_google$auth$aio$transport$aiohttp$_helpers_async(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__helpers_async);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_response_log_async);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_6 = module_var_accessor_google$auth$aio$transport$aiohttp$_LOGGER(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(coroutine_heap->var_response);
tmp_args_element_value_7 = coroutine_heap->var_response;
coroutine->m_frame->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_expression_value_10 = ASYNC_AWAIT(tstate, tmp_expression_value_11, await_normal);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_10;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
tmp_called_value_4 = module_var_accessor_google$auth$aio$transport$aiohttp$Response(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 183;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(coroutine_heap->var_response);
tmp_args_element_value_8 = coroutine_heap->var_response;
coroutine->m_frame->m_frame.f_lineno = 183;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 183;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_13;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_13 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 185;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ClientError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 185;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_3;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 185;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(coroutine_heap->var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_4);
coroutine_heap->var_caught_exc = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_expression_value_14 = module_var_accessor_google$auth$aio$transport$aiohttp$exceptions(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 186;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_TransportError);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 186;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_2bd02a4aedba6b361df973ce8f3cd7fd;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 186;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto tuple_build_exception_2;
}

tmp_format_value_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 186;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_9 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_9 == NULL));
coroutine->m_frame->m_frame.f_lineno = 186;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 186;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_client_exc == NULL);
coroutine_heap->var_client_exc = tmp_assign_source_5;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(coroutine_heap->var_client_exc);
tmp_raise_type_input_2 = coroutine_heap->var_client_exc;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_caught_exc);
tmp_raise_cause_1 = coroutine_heap->var_caught_exc;
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
coroutine_heap->exception_lineno = 187;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_1);
coroutine_heap->type_description_1 = "cccccccoooooo";
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

Py_XDECREF(coroutine_heap->var_caught_exc);
coroutine_heap->var_caught_exc = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_15;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_expression_value_15 = module_var_accessor_google$auth$aio$transport$aiohttp$asyncio(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 189;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_TimeoutError);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 189;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_3;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 189;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_3;
}
tmp_condition_result_5 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_6); 
assert(coroutine_heap->var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_6);
coroutine_heap->var_caught_exc = tmp_assign_source_6;
}
// Tried code:
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_16;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}

tmp_isinstance_inst_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_expression_value_16 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_ClientTimeout);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_17;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}

tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_total);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->var_timeout_seconds == NULL);
coroutine_heap->var_timeout_seconds = tmp_assign_source_7;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_8;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}

tmp_assign_source_8 = Nuitka_Cell_GET(coroutine->m_closure[5]);
assert(coroutine_heap->var_timeout_seconds == NULL);
Py_INCREF(tmp_assign_source_8);
coroutine_heap->var_timeout_seconds = tmp_assign_source_8;
}
branch_end_6:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_10;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_expression_value_18 = module_var_accessor_google$auth$aio$transport$aiohttp$exceptions(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_TimeoutError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_80c028772a8fd83f29078bd99cbf527e;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(coroutine_heap->var_timeout_seconds);
tmp_format_value_2 = coroutine_heap->var_timeout_seconds;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_1a996111c094ea2fd44da8e66488e222;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_10 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_10 == NULL));
coroutine->m_frame->m_frame.f_lineno = 194;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->var_timeout_exc == NULL);
coroutine_heap->var_timeout_exc = tmp_assign_source_9;
}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_raise_cause_2;
CHECK_OBJECT(coroutine_heap->var_timeout_exc);
tmp_raise_type_input_3 = coroutine_heap->var_timeout_exc;
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 197;
coroutine_heap->type_description_1 = "cccccccoooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(coroutine_heap->var_caught_exc);
tmp_raise_cause_2 = coroutine_heap->var_caught_exc;
coroutine_heap->exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_2);
coroutine_heap->exception_lineno = 197;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_2);
coroutine_heap->type_description_1 = "cccccccoooooo";
goto try_except_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_caught_exc);
coroutine_heap->var_caught_exc = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
goto branch_end_5;
branch_no_5:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 162;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccoooooo";
goto try_except_handler_3;
branch_end_5:;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:

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
    coroutine->m_closure[4],
    coroutine->m_closure[6],
    coroutine->m_closure[3],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[5],
    coroutine->m_closure[2],
    coroutine_heap->var_client_timeout,
    coroutine_heap->var_response,
    coroutine_heap->var_caught_exc,
    coroutine_heap->var_client_exc,
    coroutine_heap->var_timeout_seconds,
    coroutine_heap->var_timeout_exc
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
CHECK_OBJECT(coroutine_heap->var_client_timeout);
CHECK_OBJECT(coroutine_heap->var_client_timeout);
Py_DECREF(coroutine_heap->var_client_timeout);
coroutine_heap->var_client_timeout = NULL;
CHECK_OBJECT(coroutine_heap->var_response);
CHECK_OBJECT(coroutine_heap->var_response);
Py_DECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_client_timeout);
coroutine_heap->var_client_timeout = NULL;
Py_XDECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
Py_XDECREF(coroutine_heap->var_client_exc);
coroutine_heap->var_client_exc = NULL;
Py_XDECREF(coroutine_heap->var_timeout_seconds);
coroutine_heap->var_timeout_seconds = NULL;
Py_XDECREF(coroutine_heap->var_timeout_exc);
coroutine_heap->var_timeout_exc = NULL;
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call___context,
        module_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain___call__,
        mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109,
        code_objects_58704555673da053a9f79ee801483746,
        closure,
        7,
#if 1
        sizeof(struct google$auth$aio$transport$aiohttp$$$function__8___call__$$$coroutine__1___call___locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$aio$transport$aiohttp$$$function__9_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close(tstate, tmp_closure_1);

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
struct google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
bool tmp_result;
PyObject *tmp_return_value;
};
#endif

static PyObject *google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close_locals *coroutine_heap = (struct google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f98443daa4ce6451e26bd7d38ec65008, module_google$auth$aio$transport$aiohttp, sizeof(void *));
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
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__closed);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__session);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 204;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__session);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 204;
tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
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


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 205;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__closed, tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 205;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
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

static PyObject *MAKE_COROUTINE_google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close_context,
        module_google$auth$aio$transport$aiohttp,
        const_str_plain_close,
        mod_consts.const_str_digest_a230b600e738fe1f4bbdb8d677db881f,
        code_objects_f98443daa4ce6451e26bd7d38ec65008,
        closure,
        1,
#if 1
        sizeof(struct google$auth$aio$transport$aiohttp$$$function__9_close$$$coroutine__1_close_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e9cd727418a159a4992d6182f80db48c,
#endif
        code_objects_1ccd442c82aa5c83c3e937874ec288ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__2_status_code(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__2_status_code,
        mod_consts.const_str_plain_status_code,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0c4783a70c167e802bef02970e03edbc,
#endif
        code_objects_1f2ec8d7c7f6ea84bf5c0ca8478c0aca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__3_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__3_headers,
        mod_consts.const_str_plain_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b574f047d4cb5998aff6fbf669b57152,
#endif
        code_objects_02e8e6db9fdfad01f313d6b36079d56d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__4_content(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__4_content,
        mod_consts.const_str_plain_content,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_348bf71e331c9735b4586700c50b8723,
#endif
        code_objects_c1339290d2a8a6eec67429519ed50c80,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__5_read(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__5_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bde344001d4d2e216cf8aea5ccb2d94,
#endif
        code_objects_3c2fc7b92c10a57c38d8ef55be89d1e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__6_close(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__6_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_873021ee4cc0d5585e9d8e185b1ab52e,
#endif
        code_objects_e29baf1689dee5aff5d8fa8f101a989e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aio$transport$aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e,
#endif
        code_objects_902dbfb40931542e1a1dc3807632cf64,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__8___call__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__8___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109,
#endif
        code_objects_58704555673da053a9f79ee801483746,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_digest_510d82ad0ea3bb9939b020d6d062c535,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__9_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aio$transport$aiohttp$$$function__9_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a230b600e738fe1f4bbdb8d677db881f,
#endif
        code_objects_f98443daa4ce6451e26bd7d38ec65008,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_digest_370287a5a1e41d3087e13e0a153bfad9,
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

static function_impl_code const function_table_google$auth$aio$transport$aiohttp[] = {
impl_google$auth$aio$transport$aiohttp$$$function__1___init__,
impl_google$auth$aio$transport$aiohttp$$$function__2_status_code,
impl_google$auth$aio$transport$aiohttp$$$function__3_headers,
impl_google$auth$aio$transport$aiohttp$$$function__4_content,
impl_google$auth$aio$transport$aiohttp$$$function__5_read,
impl_google$auth$aio$transport$aiohttp$$$function__6_close,
impl_google$auth$aio$transport$aiohttp$$$function__7___init__,
impl_google$auth$aio$transport$aiohttp$$$function__8___call__,
impl_google$auth$aio$transport$aiohttp$$$function__9_close,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$aio$transport$aiohttp);
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
        module_google$auth$aio$transport$aiohttp,
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
        function_table_google$auth$aio$transport$aiohttp,
        sizeof(function_table_google$auth$aio$transport$aiohttp) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.aio.transport.aiohttp";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$aio$transport$aiohttp(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$aio$transport$aiohttp");

    // Store the module for future use.
    module_google$auth$aio$transport$aiohttp = module;

    moduledict_google$auth$aio$transport$aiohttp = MODULE_DICT(module_google$auth$aio$transport$aiohttp);

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
        PRINT_STRING("google$auth$aio$transport$aiohttp: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$aio$transport$aiohttp: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$aio$transport$aiohttp: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aio.transport.aiohttp" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$aio$transport$aiohttp\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$aio$transport$aiohttp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$aio$transport$aiohttp,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$aio$transport$aiohttp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aio$transport$aiohttp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aio$transport$aiohttp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$aio$transport$aiohttp);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$aio$transport$aiohttp);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$aiohttp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_eeb533dc830cec1ba332c5be642a3319;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$aio$transport$aiohttp = MAKE_MODULE_FRAME(code_objects_00f024fea3008743c0580cd6444fd91d, module_google$auth$aio$transport$aiohttp);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$aiohttp);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$aiohttp) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$aio$transport$aiohttp$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$aio$transport$aiohttp$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 17;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 18;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_AsyncGenerator,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncGenerator);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGenerator, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_False;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_11);
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
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_aiohttp;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 22;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_aiohttp, tmp_assign_source_12);
}
goto try_end_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp, exception_keeper_lineno_2);
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_13); 
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc, tmp_assign_source_13);
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d944067d7db26a9babbe30c0c530e667;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 24;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_4;
}
tmp_raise_cause_1 = module_var_accessor_google$auth$aio$transport$aiohttp$caught_exc(tstate);
assert(!(tmp_raise_cause_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 26;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

if (DICT_REMOVE_ITEM((PyObject *)moduledict_google$auth$aio$transport$aiohttp, mod_consts.const_str_plain_caught_exc) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 21;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$aiohttp->m_frame)) {
        frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
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
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 28;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 29;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 30;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers_async, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_8e9ab03a43b3b15f96f9c2278ae9f0c1;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_transport_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 31;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_transport,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_transport);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_transport, tmp_assign_source_17);
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_aiohttp;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$aio$transport$aiohttp;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ClientTimeout_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 38;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$auth$aio$transport$aiohttp,
        mod_consts.const_str_plain_ClientTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ClientTimeout);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout, tmp_assign_source_18);
}
goto try_end_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp, exception_keeper_lineno_5);
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
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientTimeout, tmp_assign_source_19);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 37;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$aio$transport$aiohttp->m_frame)) {
        frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_6;
branch_end_2:;
goto try_end_4;
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
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aio$transport$aiohttp$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 42;
tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_7dc5a140662b24154616e907a3f54390_tuple, 0)
);

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_20);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Response);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_3;
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


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_25;
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


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Response;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 45;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
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


exception_lineno = 45;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 45;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
branch_end_3:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_7aa7de4dbfe633711c4310ba9863f87d;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_Response;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2 = MAKE_CLASS_FRAME(tstate, code_objects_f085742dabd7b6320ba6a7fa657bec6a, module_google$auth$aio$transport$aiohttp, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_8;
tmp_dict_key_1 = mod_consts.const_str_plain_response;
tmp_expression_value_8 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_aiohttp);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ClientResponse);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__1___init__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_called_value_2 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_9 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_google$auth$aio$transport$aiohttp$_helpers(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_10 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_transport);

if (tmp_expression_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_10 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_4);

exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Response);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_4);

exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 61;
tmp_called_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain_int);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__2_status_code(tstate, tmp_annotations_2);

frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 61;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 60;
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
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_status_code, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_4;
tmp_called_value_5 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_11 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_11 = module_var_accessor_google$auth$aio$transport$aiohttp$_helpers(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_12 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_transport);

if (tmp_expression_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_12 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_7);

exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Response);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_7);

exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 66;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_13 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_Mapping);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_13 = module_var_accessor_google$auth$aio$transport$aiohttp$Mapping(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_4 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_str);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_str);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_4);
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_args_element_value_6 = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__3_headers(tstate, tmp_annotations_3);

frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 66;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 65;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_8;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_expression_value_14 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_14 = module_var_accessor_google$auth$aio$transport$aiohttp$_helpers(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "o";
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


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_15 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_transport);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Response);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 70;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_defaults_1 = mod_consts.const_tuple_int_pos_1024_tuple;
tmp_dict_key_4 = mod_consts.const_str_plain_chunk_size;
tmp_dict_value_4 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain_int);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_5;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_16 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_AsyncGenerator);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_google$auth$aio$transport$aiohttp$AsyncGenerator(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncGenerator);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_5 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain_bytes);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_5);
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_8 = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__4_content(tstate, tmp_defaults_1, tmp_annotations_4);

frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 70;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_content, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_expression_value_17 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_google$auth$aio$transport$aiohttp$_helpers(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_18 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_transport);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_Response);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 82;
tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain_bytes);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_args_element_value_10 = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__5_read(tstate, tmp_annotations_5);

frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 82;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain_read, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_12;
tmp_expression_value_19 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_google$auth$aio$transport$aiohttp$_helpers(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_20 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain_transport);

if (tmp_expression_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_20 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_Response);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 89;
tmp_called_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_12 = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__6_close(tstate);

frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame.f_lineno = 89;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$aio$transport$aiohttp$$$class__1_Response_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__response_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
branch_no_5:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_Response;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 45;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_9;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_28;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_27 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45);
locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45);
locals_google$auth$aio$transport$aiohttp$$$class__1_Response_45 = NULL;
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
exception_lineno = 45;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_27);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Request);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_22 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_32;
}
{
bool tmp_condition_result_8;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_Request;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 94;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_10;
}
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 94;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 94;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_34;
}
branch_end_6:;
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7dc5a140662b24154616e907a3f54390;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_b569238c040ea3c1cd797c8f8ca047ff;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_Request;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_94;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3 = MAKE_CLASS_FRAME(tstate, code_objects_6993868587ebd8a4ff78461e7efbdc6b, module_google$auth$aio$transport$aiohttp, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3);
assert(Py_REFCNT(frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_29;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_6 = mod_consts.const_str_plain_session;
tmp_expression_value_28 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_28 = module_var_accessor_google$auth$aio$transport$aiohttp$Optional(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_29 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_aiohttp);

if (tmp_expression_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_29 = module_var_accessor_google$auth$aio$transport$aiohttp$aiohttp(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aiohttp);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_28);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_ClientSession);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_subscript_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_28);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_6 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__7___init__(tstate, tmp_defaults_2, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_10;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_tuple_element_10 = mod_consts.const_str_plain_GET;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_30;
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_10);
tmp_expression_value_30 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_transport);

if (tmp_expression_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_30 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_expression_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain__DEFAULT_TIMEOUT_SECONDS);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_3, 3, tmp_tuple_element_10);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_key_7 = mod_consts.const_str_plain_url;
tmp_dict_value_7 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_str);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_7 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_35;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_method;
tmp_dict_value_7 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_str);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_body;
tmp_expression_value_31 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_31 = module_var_accessor_google$auth$aio$transport$aiohttp$Optional(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_subscript_value_6 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, const_str_plain_bytes);

if (tmp_subscript_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_6 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_subscript_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_headers;
tmp_expression_value_32 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_32 = module_var_accessor_google$auth$aio$transport$aiohttp$Optional(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_33 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_Mapping);

if (tmp_expression_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_33 = module_var_accessor_google$auth$aio$transport$aiohttp$Mapping(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_32);

exception_lineno = 133;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_tuple_element_11 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_str);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_str);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_11);
tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_subscript_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_32);

exception_lineno = 133;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_timeout;
tmp_expression_value_34 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_Union);

if (tmp_expression_value_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_34 = module_var_accessor_google$auth$aio$transport$aiohttp$Union(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_tuple_element_12 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_float);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_ClientTimeout);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = module_var_accessor_google$auth$aio$transport$aiohttp$ClientTimeout(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientTimeout);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_12);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_expression_value_34);
Py_DECREF(tmp_subscript_value_9);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_35 = PyObject_GetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain_transport);

if (tmp_expression_value_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_35 = module_var_accessor_google$auth$aio$transport$aiohttp$transport(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_Response);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_defaults_3);
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__8___call__(tstate, tmp_defaults_3, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_google$auth$aio$transport$aiohttp$$$function__9_close(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$aio$transport$aiohttp$$$class__2_Request_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__session_str_plain__closed_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
branch_no_8:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_Request;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$aio$transport$aiohttp->m_frame.f_lineno = 94;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_36;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_35 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94);
locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94);
locals_google$auth$aio$transport$aiohttp$$$class__2_Request_94 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 94;
goto try_except_handler_10;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_35);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aio$transport$aiohttp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aio$transport$aiohttp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aio$transport$aiohttp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$aio$transport$aiohttp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$aio$transport$aiohttp", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aio.transport.aiohttp" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$aio$transport$aiohttp);
    return module_google$auth$aio$transport$aiohttp;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aio$transport$aiohttp, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$aio$transport$aiohttp", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'httpx$_transports$asgi'
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



/* The "module_httpx$_transports$asgi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_transports$asgi;
PyDictObject *moduledict_httpx$_transports$asgi;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_sniffio;
PyObject *const_str_plain_current_async_library;
PyObject *const_str_plain_trio;
PyObject *const_str_plain_is_running_trio;
PyObject *const_str_plain_Event;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain__body;
PyObject *const_str_plain_self;
PyObject *const_str_plain___aiter__;
PyObject *const_str_digest_5a2d36f91a7e2b4c92f1ef083ebdac40;
PyObject *const_str_plain_app;
PyObject *const_str_plain_raise_app_exceptions;
PyObject *const_str_plain_root_path;
PyObject *const_str_plain_client;
PyObject *const_str_plain_request;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_AsyncByteStream;
PyObject *const_str_plain_http;
PyObject *const_str_plain_asgi;
PyObject *const_dict_8c9c0359ed6eccd5ef6b6b30d9da8761;
PyObject *const_str_plain_http_version;
PyObject *const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923;
PyObject *const_str_plain_method;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_url;
PyObject *const_str_plain_raw_path;
PyObject *const_tuple_bytes_chr_63_tuple;
PyObject *const_str_plain_query_string;
PyObject *const_str_plain_query;
PyObject *const_str_plain_server;
PyObject *const_str_plain_host;
PyObject *const_str_plain_port;
PyObject *const_str_plain_create_event;
PyObject *const_dict_c82749fdfb8648dd8cd33ae6a2fec9f9;
PyObject *const_str_plain_receive;
PyObject *const_str_digest_976681822a269a22c69e1a85d4d40862;
PyObject *const_dict_c11b2175d0cb7d4cd20f61205e763d43;
PyObject *const_str_digest_432bcb0c909704301e433caf3af13139;
PyObject *const_str_plain_set;
PyObject *const_str_plain_status_code;
PyObject *const_int_pos_500;
PyObject *const_str_plain_response_headers;
PyObject *const_str_plain_is_set;
PyObject *const_str_plain_ASGIResponseStream;
PyObject *const_str_plain_Response;
PyObject *const_tuple_str_plain_headers_str_plain_stream_tuple;
PyObject *const_str_plain_handle_async_request;
PyObject *const_str_digest_4e24fdc2154c13113a13427e9d86c73d;
PyObject *const_str_plain_request_complete;
PyObject *const_str_plain_response_complete;
PyObject *const_str_plain_wait;
PyObject *const_dict_5d6896a4f8512b62e298aea3b3b20ad3;
PyObject *const_str_plain_request_body_chunks;
PyObject *const_str_plain___anext__;
PyObject *const_dict_77884525a8fa1a0d722d46040d1f65b7;
PyObject *const_str_digest_9f0371f48763bfa78259d2265c8883f7;
PyObject *const_str_plain_body;
PyObject *const_str_plain_more_body;
PyObject *const_str_plain_message;
PyObject *const_str_digest_3d0554b8ebc1d51a4f04025935f553d3;
PyObject *const_str_plain_response_started;
PyObject *const_str_plain_status;
PyObject *const_str_digest_2cb1ea705e74b13b255fc484cefb458c;
PyObject *const_tuple_str_plain_body_bytes_empty_tuple;
PyObject *const_tuple_str_plain_more_body_false_tuple;
PyObject *const_str_plain_HEAD;
PyObject *const_str_plain_body_parts;
PyObject *const_str_plain_append;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_Request_str_plain_Response_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_Request;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_AsyncByteStream_tuple;
PyObject *const_str_plain_base;
PyObject *const_tuple_str_plain_AsyncBaseTransport_tuple;
PyObject *const_str_plain_AsyncBaseTransport;
PyObject *const_str_plain_MutableMapping;
PyObject *const_str_plain_Any;
PyObject *const_str_plain__Message;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain__Receive;
PyObject *const_str_plain__Send;
PyObject *const_str_plain__ASGIApp;
PyObject *const_str_plain_ASGITransport;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_dict_e23711663ec8616750b0e4713750b11a;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1ded65c24366409de18e7d396c8dfe28;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_55;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_38357e4ef7168ed6bd73354c3e65b0ae;
PyObject *const_str_digest_1cc5be464225c173b79b4edd0e37beba;
PyObject *const_dict_6f0eedf5fa97178f67c35f0129bdbeae;
PyObject *const_tuple_str_plain__body_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_a4cb795dcd2cc06486098f8ec5bac2d7;
PyObject *const_int_pos_63;
PyObject *const_tuple_d23df9d234fe6bc4fba3d65b6ac42ca4_tuple;
PyObject *const_dict_17e16a180fecaad35c6da3c5c061a509;
PyObject *const_str_digest_7dd259a568c3a33951afdd0033061f40;
PyObject *const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4;
PyObject *const_tuple_9c1c8e9457c7853b2d1a7e36613e3ee8_tuple;
PyObject *const_str_digest_f3c5553d93fed0933ad7e6d0416aba82;
PyObject *const_str_digest_8fd08688a7ec7879ad563336df455f8d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_body_tuple;
PyObject *const_tuple_d5f8a01bacec178b4a41c59b4e6ad13c_tuple;
PyObject *const_tuple_str_plain_trio_str_plain_asyncio_tuple;
PyObject *const_tuple_10f239439c41a3e3cc2f376df70249e9_tuple;
PyObject *const_tuple_str_plain_sniffio_tuple;
PyObject *const_tuple_05423b8218dd46b4fba53bde62746727_tuple;
PyObject *const_tuple_1910e9a893c9ad2cc1cd25afba12066e_tuple;
PyObject *const_tuple_915c119813765cf9daf6fac83a6aebbf_tuple;
PyObject *const_tuple_64428c3cfb03083eb37ad91dcc075a80_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[128];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._transports.asgi"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_sniffio);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_async_library);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_running_trio);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__body);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a2d36f91a7e2b4c92f1ef083ebdac40);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_app_exceptions);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_root_path);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_http);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_asgi);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_dict_8c9c0359ed6eccd5ef6b6b30d9da8761);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_version);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_63_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_query_string);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_server);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_event);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_c82749fdfb8648dd8cd33ae6a2fec9f9);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_976681822a269a22c69e1a85d4d40862);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_c11b2175d0cb7d4cd20f61205e763d43);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_432bcb0c909704301e433caf3af13139);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_500);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_headers);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_set);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ASGIResponseStream);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e24fdc2154c13113a13427e9d86c73d);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_complete);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_complete);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_5d6896a4f8512b62e298aea3b3b20ad3);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_body_chunks);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___anext__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_dict_77884525a8fa1a0d722d46040d1f65b7);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f0371f48763bfa78259d2265c8883f7);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_more_body);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d0554b8ebc1d51a4f04025935f553d3);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_started);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cb1ea705e74b13b255fc484cefb458c);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_bytes_empty_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_more_body_false_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_HEAD);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_body_parts);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncByteStream_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_base);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBaseTransport_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBaseTransport);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__Message);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__Receive);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__Send);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain__ASGIApp);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_ASGITransport);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_dict_e23711663ec8616750b0e4713750b11a);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ded65c24366409de18e7d396c8dfe28);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_38357e4ef7168ed6bd73354c3e65b0ae);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc5be464225c173b79b4edd0e37beba);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__body_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4cb795dcd2cc06486098f8ec5bac2d7);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_int_pos_63);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_d23df9d234fe6bc4fba3d65b6ac42ca4_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_17e16a180fecaad35c6da3c5c061a509);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dd259a568c3a33951afdd0033061f40);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_9c1c8e9457c7853b2d1a7e36613e3ee8_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3c5553d93fed0933ad7e6d0416aba82);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fd08688a7ec7879ad563336df455f8d);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_body_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_d5f8a01bacec178b4a41c59b4e6ad13c_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trio_str_plain_asyncio_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_10f239439c41a3e3cc2f376df70249e9_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sniffio_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_05423b8218dd46b4fba53bde62746727_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_1910e9a893c9ad2cc1cd25afba12066e_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_915c119813765cf9daf6fac83a6aebbf_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_64428c3cfb03083eb37ad91dcc075a80_tuple);
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
void checkModuleConstants_httpx$_transports$asgi(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_sniffio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sniffio);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_async_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_async_library);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_running_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_running_trio);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__body);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___aiter__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a2d36f91a7e2b4c92f1ef083ebdac40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a2d36f91a7e2b4c92f1ef083ebdac40);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_app_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_app_exceptions);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_root_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_root_path);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncByteStream);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_http));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_asgi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asgi);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_dict_8c9c0359ed6eccd5ef6b6b30d9da8761));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8c9c0359ed6eccd5ef6b6b30d9da8761);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_version);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_path);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_chr_63_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_query_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query_string);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_server));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_event);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_c82749fdfb8648dd8cd33ae6a2fec9f9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c82749fdfb8648dd8cd33ae6a2fec9f9);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_976681822a269a22c69e1a85d4d40862));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_976681822a269a22c69e1a85d4d40862);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_c11b2175d0cb7d4cd20f61205e763d43));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c11b2175d0cb7d4cd20f61205e763d43);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_432bcb0c909704301e433caf3af13139));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_432bcb0c909704301e433caf3af13139);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_500));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_500);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_headers);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_set);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ASGIResponseStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ASGIResponseStream);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_async_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_async_request);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e24fdc2154c13113a13427e9d86c73d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e24fdc2154c13113a13427e9d86c73d);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_complete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_complete);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_complete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_complete);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_5d6896a4f8512b62e298aea3b3b20ad3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5d6896a4f8512b62e298aea3b3b20ad3);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_body_chunks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_body_chunks);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___anext__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___anext__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_dict_77884525a8fa1a0d722d46040d1f65b7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_77884525a8fa1a0d722d46040d1f65b7);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f0371f48763bfa78259d2265c8883f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f0371f48763bfa78259d2265c8883f7);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_more_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_more_body);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d0554b8ebc1d51a4f04025935f553d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d0554b8ebc1d51a4f04025935f553d3);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_started));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_started);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cb1ea705e74b13b255fc484cefb458c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2cb1ea705e74b13b255fc484cefb458c);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_bytes_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_body_bytes_empty_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_more_body_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_more_body_false_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_HEAD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HEAD);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_body_parts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body_parts);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncByteStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncByteStream_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBaseTransport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncBaseTransport_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBaseTransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBaseTransport);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutableMapping);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Message);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__Receive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Receive);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__Send));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Send);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain__ASGIApp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ASGIApp);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_ASGITransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ASGITransport);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_dict_e23711663ec8616750b0e4713750b11a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e23711663ec8616750b0e4713750b11a);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ded65c24366409de18e7d396c8dfe28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ded65c24366409de18e7d396c8dfe28);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_38357e4ef7168ed6bd73354c3e65b0ae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_38357e4ef7168ed6bd73354c3e65b0ae);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc5be464225c173b79b4edd0e37beba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc5be464225c173b79b4edd0e37beba);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__body_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__body_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4cb795dcd2cc06486098f8ec5bac2d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4cb795dcd2cc06486098f8ec5bac2d7);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_int_pos_63));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_63);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_d23df9d234fe6bc4fba3d65b6ac42ca4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d23df9d234fe6bc4fba3d65b6ac42ca4_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_17e16a180fecaad35c6da3c5c061a509));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17e16a180fecaad35c6da3c5c061a509);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dd259a568c3a33951afdd0033061f40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dd259a568c3a33951afdd0033061f40);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_9c1c8e9457c7853b2d1a7e36613e3ee8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9c1c8e9457c7853b2d1a7e36613e3ee8_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3c5553d93fed0933ad7e6d0416aba82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3c5553d93fed0933ad7e6d0416aba82);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fd08688a7ec7879ad563336df455f8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8fd08688a7ec7879ad563336df455f8d);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_body_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_body_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_d5f8a01bacec178b4a41c59b4e6ad13c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5f8a01bacec178b4a41c59b4e6ad13c_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trio_str_plain_asyncio_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_trio_str_plain_asyncio_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_10f239439c41a3e3cc2f376df70249e9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_10f239439c41a3e3cc2f376df70249e9_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sniffio_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sniffio_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_05423b8218dd46b4fba53bde62746727_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_05423b8218dd46b4fba53bde62746727_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_1910e9a893c9ad2cc1cd25afba12066e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1910e9a893c9ad2cc1cd25afba12066e_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_915c119813765cf9daf6fac83a6aebbf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_915c119813765cf9daf6fac83a6aebbf_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_64428c3cfb03083eb37ad91dcc075a80_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_64428c3cfb03083eb37ad91dcc075a80_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_httpx$_transports$asgi$ASGIResponseStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_ASGIResponseStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ASGIResponseStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ASGIResponseStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ASGIResponseStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ASGIResponseStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_ASGIResponseStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_ASGIResponseStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ASGIResponseStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$AsyncBaseTransport(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$AsyncByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$_Message(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Message);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Message);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Message, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Message);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Message, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Message);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Message);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Message);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$_Receive(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Receive);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Receive);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Receive, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Receive);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Receive, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Receive);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Receive);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Receive);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$_Send(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Send);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Send);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Send, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Send);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Send, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Send);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Send);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Send);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$create_event(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_create_event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_create_event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_create_event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_event);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$asgi$is_running_trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$asgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$asgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_is_running_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$asgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_running_trio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_running_trio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_running_trio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_running_trio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_is_running_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_is_running_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_running_trio);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5bfc72e0bbe68234caae38a500c3d386;
static PyCodeObject *code_objects_e653208ca4dbff4bfb75dfa95bd985fc;
static PyCodeObject *code_objects_fc50dfeb1cf1cf44f72e739dca15339d;
static PyCodeObject *code_objects_2eb2171ff0be725396e18f47ad56021e;
static PyCodeObject *code_objects_d67a163cfac28293e0f2e0ea032f51c7;
static PyCodeObject *code_objects_4266afa8f2f1fc2a8f5c98bc23dfb982;
static PyCodeObject *code_objects_78429e8d5e802b99e7d3a9fbec5b0456;
static PyCodeObject *code_objects_805faae46ee7ba2a070605eafd4ce254;
static PyCodeObject *code_objects_898e8418e5c3ca656c8380900fd70286;
static PyCodeObject *code_objects_2f6471781002b16b42f9af4ffee87b7b;
static PyCodeObject *code_objects_ed651e23b9a3565581794d01f7cd604b;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f3c5553d93fed0933ad7e6d0416aba82); CHECK_OBJECT(module_filename_obj);
code_objects_5bfc72e0bbe68234caae38a500c3d386 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_8fd08688a7ec7879ad563336df455f8d, mod_consts.const_str_digest_8fd08688a7ec7879ad563336df455f8d, NULL, NULL, 0, 0, 0);
code_objects_e653208ca4dbff4bfb75dfa95bd985fc = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ASGIResponseStream, mod_consts.const_str_plain_ASGIResponseStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fc50dfeb1cf1cf44f72e739dca15339d = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ASGITransport, mod_consts.const_str_plain_ASGITransport, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2eb2171ff0be725396e18f47ad56021e = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_5a2d36f91a7e2b4c92f1ef083ebdac40, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d67a163cfac28293e0f2e0ea032f51c7 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_1cc5be464225c173b79b4edd0e37beba, mod_consts.const_tuple_str_plain_self_str_plain_body_tuple, NULL, 2, 0, 0);
code_objects_4266afa8f2f1fc2a8f5c98bc23dfb982 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_7dd259a568c3a33951afdd0033061f40, mod_consts.const_tuple_d5f8a01bacec178b4a41c59b4e6ad13c_tuple, NULL, 5, 0, 0);
code_objects_78429e8d5e802b99e7d3a9fbec5b0456 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_event, mod_consts.const_str_plain_create_event, mod_consts.const_tuple_str_plain_trio_str_plain_asyncio_tuple, NULL, 0, 0, 0);
code_objects_805faae46ee7ba2a070605eafd4ce254 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_async_request, mod_consts.const_str_digest_4e24fdc2154c13113a13427e9d86c73d, mod_consts.const_tuple_10f239439c41a3e3cc2f376df70249e9_tuple, NULL, 2, 0, 0);
code_objects_898e8418e5c3ca656c8380900fd70286 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_running_trio, mod_consts.const_str_plain_is_running_trio, mod_consts.const_tuple_str_plain_sniffio_tuple, NULL, 0, 0, 0);
code_objects_2f6471781002b16b42f9af4ffee87b7b = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_receive, mod_consts.const_str_digest_976681822a269a22c69e1a85d4d40862, mod_consts.const_tuple_05423b8218dd46b4fba53bde62746727_tuple, mod_consts.const_tuple_1910e9a893c9ad2cc1cd25afba12066e_tuple, 0, 0, 0);
code_objects_ed651e23b9a3565581794d01f7cd604b = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_send, mod_consts.const_str_digest_432bcb0c909704301e433caf3af13139, mod_consts.const_tuple_915c119813765cf9daf6fac83a6aebbf_tuple, mod_consts.const_tuple_64428c3cfb03083eb37ad91dcc075a80_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_ASYNCGEN_httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__1_is_running_trio(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__2_create_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__4___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_httpx$_transports$asgi$$$function__1_is_running_trio(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_sniffio = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio = MAKE_FUNCTION_FRAME(tstate, code_objects_898e8418e5c3ca656c8380900fd70286, module_httpx$_transports$asgi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio->m_type_description == NULL);
frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio = cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio);
assert(Py_REFCNT(frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_sniffio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$asgi;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio->m_frame.f_lineno = 34;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "o";
    goto try_except_handler_2;
}
assert(var_sniffio == NULL);
var_sniffio = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_sniffio);
tmp_called_instance_1 = var_sniffio;
frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio->m_frame.f_lineno = 36;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_async_library);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_trio;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "o";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_ImportError;
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
    exception_lineno = 30;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio->m_frame)) {
        frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_3;
branch_no_2:;
goto try_end_2;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio,
    type_description_1,
    var_sniffio
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio == cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio);
    cache_frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$asgi$$$function__1_is_running_trio);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_sniffio);
var_sniffio = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sniffio);
var_sniffio = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_httpx$_transports$asgi$$$function__2_create_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_trio = NULL;
PyObject *var_asyncio = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$asgi$$$function__2_create_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event = MAKE_FUNCTION_FRAME(tstate, code_objects_78429e8d5e802b99e7d3a9fbec5b0456, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event->m_type_description == NULL);
frame_frame_httpx$_transports$asgi$$$function__2_create_event = cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$asgi$$$function__2_create_event);
assert(Py_REFCNT(frame_frame_httpx$_transports$asgi$$$function__2_create_event) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_httpx$_transports$asgi$is_running_trio(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_running_trio);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$asgi$$$function__2_create_event->m_frame.f_lineno = 45;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 45;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$asgi;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$asgi$$$function__2_create_event->m_frame.f_lineno = 46;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_trio == NULL);
var_trio = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_trio);
tmp_called_instance_1 = var_trio;
frame_frame_httpx$_transports$asgi$$$function__2_create_event->m_frame.f_lineno = 48;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Event);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$asgi;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_httpx$_transports$asgi$$$function__2_create_event->m_frame.f_lineno = 50;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_asyncio == NULL);
var_asyncio = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_asyncio);
tmp_called_instance_2 = var_asyncio;
frame_frame_httpx$_transports$asgi$$$function__2_create_event->m_frame.f_lineno = 52;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Event);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi$$$function__2_create_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$asgi$$$function__2_create_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi$$$function__2_create_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$asgi$$$function__2_create_event,
    type_description_1,
    var_trio,
    var_asyncio
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$asgi$$$function__2_create_event == cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event);
    cache_frame_frame_httpx$_transports$asgi$$$function__2_create_event = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$asgi$$$function__2_create_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_trio);
var_trio = NULL;
Py_XDECREF(var_asyncio);
var_asyncio = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_trio);
var_trio = NULL;
Py_XDECREF(var_asyncio);
var_asyncio = NULL;
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


static PyObject *impl_httpx$_transports$asgi$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_body = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$asgi$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$asgi$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$asgi$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$asgi$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$asgi$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$asgi$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d67a163cfac28293e0f2e0ea032f51c7, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$asgi$$$function__3___init__->m_type_description == NULL);
frame_frame_httpx$_transports$asgi$$$function__3___init__ = cache_frame_frame_httpx$_transports$asgi$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$asgi$$$function__3___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$asgi$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_body);
tmp_assattr_value_1 = par_body;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__body, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$asgi$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$asgi$$$function__3___init__,
    type_description_1,
    par_self,
    par_body
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$asgi$$$function__3___init__ == cache_frame_frame_httpx$_transports$asgi$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$asgi$$$function__3___init__);
    cache_frame_frame_httpx$_transports$asgi$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$asgi$$$function__3___init__);

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
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$asgi$$$function__4___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_ASYNCGEN_httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter__(tstate, tmp_closure_1);

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
struct httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2eb2171ff0be725396e18f47ad56021e, module_httpx$_transports$asgi, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 60;
asyncgen_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__body);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 60;
asyncgen_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 60;
asyncgen_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 60;
asyncgen_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
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
    asyncgen->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_transports$asgi,
        mod_consts.const_str_plain___aiter__,
        mod_consts.const_str_digest_5a2d36f91a7e2b4c92f1ef083ebdac40,
        code_objects_2eb2171ff0be725396e18f47ad56021e,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__4___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$asgi$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_app = python_pars[1];
PyObject *par_raise_app_exceptions = python_pars[2];
PyObject *par_root_path = python_pars[3];
PyObject *par_client = python_pars[4];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$asgi$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$asgi$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$asgi$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$asgi$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$asgi$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$asgi$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4266afa8f2f1fc2a8f5c98bc23dfb982, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$asgi$$$function__5___init__->m_type_description == NULL);
frame_frame_httpx$_transports$asgi$$$function__5___init__ = cache_frame_frame_httpx$_transports$asgi$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$asgi$$$function__5___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$asgi$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_app);
tmp_assattr_value_1 = par_app;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_app, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_raise_app_exceptions);
tmp_assattr_value_2 = par_raise_app_exceptions;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_raise_app_exceptions, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_root_path);
tmp_assattr_value_3 = par_root_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_root_path, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_client);
tmp_assattr_value_4 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_client, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$asgi$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$asgi$$$function__5___init__,
    type_description_1,
    par_self,
    par_app,
    par_raise_app_exceptions,
    par_root_path,
    par_client
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$asgi$$$function__5___init__ == cache_frame_frame_httpx$_transports$asgi$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$asgi$$$function__5___init__);
    cache_frame_frame_httpx$_transports$asgi$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$asgi$$$function__5___init__);

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
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
CHECK_OBJECT(par_raise_app_exceptions);
Py_DECREF(par_raise_app_exceptions);
CHECK_OBJECT(par_root_path);
Py_DECREF(par_root_path);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
CHECK_OBJECT(par_raise_app_exceptions);
Py_DECREF(par_raise_app_exceptions);
CHECK_OBJECT(par_root_path);
Py_DECREF(par_root_path);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$asgi$$$function__6_handle_async_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request(tstate, tmp_closure_1);

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
struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request_locals {
PyObject *var_scope;
struct Nuitka_CellObject *var_request_body_chunks;
struct Nuitka_CellObject *var_request_complete;
struct Nuitka_CellObject *var_status_code;
struct Nuitka_CellObject *var_response_headers;
struct Nuitka_CellObject *var_body_parts;
struct Nuitka_CellObject *var_response_started;
struct Nuitka_CellObject *var_response_complete;
PyObject *var_receive;
PyObject *var_send;
PyObject *var_stream;
PyObject *outline_0_var_k;
PyObject *outline_0_var_v;
PyObject *tmp_listcomp$tuple_unpack_1__element_1;
PyObject *tmp_listcomp$tuple_unpack_1__element_2;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter;
PyObject *tmp_listcomp_1__$0;
PyObject *tmp_listcomp_1__contraction;
PyObject *tmp_listcomp_1__iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request_locals *coroutine_heap = (struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_scope = NULL;
coroutine_heap->var_request_body_chunks = Nuitka_Cell_NewEmpty();
coroutine_heap->var_request_complete = Nuitka_Cell_NewEmpty();
coroutine_heap->var_status_code = Nuitka_Cell_NewEmpty();
coroutine_heap->var_response_headers = Nuitka_Cell_NewEmpty();
coroutine_heap->var_body_parts = Nuitka_Cell_NewEmpty();
coroutine_heap->var_response_started = Nuitka_Cell_NewEmpty();
coroutine_heap->var_response_complete = Nuitka_Cell_NewEmpty();
coroutine_heap->var_receive = NULL;
coroutine_heap->var_send = NULL;
coroutine_heap->var_stream = NULL;
coroutine_heap->outline_0_var_k = NULL;
coroutine_heap->outline_0_var_v = NULL;
coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
coroutine_heap->tmp_listcomp_1__$0 = NULL;
coroutine_heap->tmp_listcomp_1__contraction = NULL;
coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_805faae46ee7ba2a070605eafd4ce254, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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

coroutine_heap->exception_lineno = 103;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 103;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_httpx$_transports$asgi$AsyncByteStream(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_isinstance_inst_1);

coroutine_heap->exception_lineno = 103;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 103;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 103;
coroutine_heap->type_description_1 = "ccocccccccooo";
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
coroutine->m_frame->m_frame.f_lineno = 103;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccocccccccooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_str_plain_type;
tmp_dict_value_1 = mod_consts.const_str_plain_http;
tmp_assign_source_1 = _PyDict_NewPresized( 12 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_asgi;
tmp_dict_value_1 = DICT_COPY(tstate, mod_consts.const_dict_8c9c0359ed6eccd5ef6b6b30d9da8761);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_http_version;
tmp_dict_value_1 = mod_consts.const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_method;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_method);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_headers);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_raw);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_listcomp_1__$0 == NULL);
coroutine_heap->tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(coroutine_heap->tmp_listcomp_1__contraction == NULL);
coroutine_heap->tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
tmp_next_source_1 = coroutine_heap->tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccocccccccooo";
coroutine_heap->exception_lineno = 111;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = coroutine_heap->tmp_listcomp_1__iter_value_0;
    coroutine_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__iter_value_0);
tmp_iter_arg_2 = coroutine_heap->tmp_listcomp_1__iter_value_0;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_4;
}
{
    PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_5;
}
{
    PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_5;
}
{
    PyObject *old = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2;
    coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter);
coroutine_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_8 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = coroutine_heap->outline_0_var_k;
    coroutine_heap->outline_0_var_k = tmp_assign_source_8;
    Py_INCREF(coroutine_heap->outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1);
coroutine_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_9 = coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = coroutine_heap->outline_0_var_v;
    coroutine_heap->outline_0_var_v = tmp_assign_source_9;
    Py_INCREF(coroutine_heap->outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2);
coroutine_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
tmp_append_list_1 = coroutine_heap->tmp_listcomp_1__contraction;
CHECK_OBJECT(coroutine_heap->outline_0_var_k);
tmp_expression_value_5 = coroutine_heap->outline_0_var_k;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_lower);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 111;
tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_3;
}
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_append_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->outline_0_var_v);
tmp_tuple_element_1 = coroutine_heap->outline_0_var_v;
PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
coroutine_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
tmp_dict_value_1 = coroutine_heap->tmp_listcomp_1__contraction;
Py_INCREF(tmp_dict_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
coroutine_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
coroutine_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
coroutine_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
coroutine_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(coroutine_heap->outline_0_var_k);
coroutine_heap->outline_0_var_k = NULL;
Py_XDECREF(coroutine_heap->outline_0_var_v);
coroutine_heap->outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->outline_0_var_k);
coroutine_heap->outline_0_var_k = NULL;
Py_XDECREF(coroutine_heap->outline_0_var_v);
coroutine_heap->outline_0_var_v = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
coroutine_heap->exception_lineno = 111;
goto dict_build_exception_1;
outline_result_1:;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_scheme;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_url);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = const_str_plain_path;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_url);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_raw_path;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_url);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine->m_frame->m_frame.f_lineno = 114;
tmp_expression_value_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_bytes_chr_63_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_query_string;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_url);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_query);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_server;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_url);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_url);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_dict_value_1);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_20 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_client);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_root_path;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}

tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_root_path);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(coroutine_heap->var_scope == NULL);
coroutine_heap->var_scope = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_22;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_stream);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 122;
tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___aiter__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(coroutine_heap->var_request_body_chunks) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_request_body_chunks, tmp_assign_source_10);

}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
{
    PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_request_complete);
    Nuitka_Cell_SET(coroutine_heap->var_request_complete, tmp_assign_source_11);
    Py_INCREF(tmp_assign_source_11);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_None;
{
    PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_status_code);
    Nuitka_Cell_SET(coroutine_heap->var_status_code, tmp_assign_source_12);
    Py_INCREF(tmp_assign_source_12);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_None;
{
    PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_response_headers);
    Nuitka_Cell_SET(coroutine_heap->var_response_headers, tmp_assign_source_13);
    Py_INCREF(tmp_assign_source_13);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 0);
assert(Nuitka_Cell_GET(coroutine_heap->var_body_parts) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_body_parts, tmp_assign_source_14);

}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_False;
{
    PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_response_started);
    Nuitka_Cell_SET(coroutine_heap->var_response_started, tmp_assign_source_15);
    Py_INCREF(tmp_assign_source_15);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_httpx$_transports$asgi$create_event(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_create_event);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 130;
tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(coroutine_heap->var_response_complete) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_response_complete, tmp_assign_source_16);

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c82749fdfb8648dd8cd33ae6a2fec9f9);
tmp_closure_1[0] = coroutine_heap->var_request_body_chunks;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = coroutine_heap->var_request_complete;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = coroutine_heap->var_response_complete;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_17 = MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(tstate, tmp_annotations_1, tmp_closure_1);

assert(coroutine_heap->var_receive == NULL);
coroutine_heap->var_receive = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[6];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c11b2175d0cb7d4cd20f61205e763d43);
tmp_closure_2[0] = coroutine_heap->var_body_parts;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_2[1]);
tmp_closure_2[2] = coroutine_heap->var_response_complete;
Py_INCREF(tmp_closure_2[2]);
tmp_closure_2[3] = coroutine_heap->var_response_headers;
Py_INCREF(tmp_closure_2[3]);
tmp_closure_2[4] = coroutine_heap->var_response_started;
Py_INCREF(tmp_closure_2[4]);
tmp_closure_2[5] = coroutine_heap->var_status_code;
Py_INCREF(tmp_closure_2[5]);
tmp_assign_source_18 = MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(tstate, tmp_annotations_2, tmp_closure_2);

assert(coroutine_heap->var_send == NULL);
coroutine_heap->var_send = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 170;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_6;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
CHECK_OBJECT(coroutine_heap->var_scope);
tmp_args_element_value_1 = coroutine_heap->var_scope;
CHECK_OBJECT(coroutine_heap->var_receive);
tmp_args_element_value_2 = coroutine_heap->var_receive;
CHECK_OBJECT(coroutine_heap->var_send);
tmp_args_element_value_3 = coroutine_heap->var_send;
coroutine->m_frame->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_24 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_app,
        call_args
    );
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_6;
}
tmp_expression_value_23 = ASYNC_AWAIT(tstate, tmp_expression_value_24, await_normal);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_24, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_23;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_24, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_6;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_25;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
}

tmp_expression_value_25 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_raise_app_exceptions);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
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
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 173;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccocccccccooo";
goto try_except_handler_7;
branch_no_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_response_complete));
tmp_called_instance_3 = Nuitka_Cell_GET(coroutine_heap->var_response_complete);
coroutine->m_frame->m_frame.f_lineno = 175;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_set);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(coroutine_heap->var_status_code) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_status_code);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 176;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine_heap->var_status_code);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_500;
{
    PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_status_code);
    Nuitka_Cell_SET(coroutine_heap->var_status_code, tmp_assign_source_19);
    Py_INCREF(tmp_assign_source_19);
    Py_XDECREF(old);
}

}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (Nuitka_Cell_GET(coroutine_heap->var_response_headers) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto try_except_handler_7;
}

tmp_cmp_expr_left_3 = Nuitka_Cell_GET(coroutine_heap->var_response_headers);
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_response_headers);
    Nuitka_Cell_SET(coroutine_heap->var_response_headers, tmp_assign_source_20);
    Py_XDECREF(old);
}

}
branch_no_5:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 169;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccocccccccooo";
goto try_except_handler_7;
branch_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_response_complete));
tmp_called_instance_4 = Nuitka_Cell_GET(coroutine_heap->var_response_complete);
coroutine->m_frame->m_frame.f_lineno = 181;
tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_is_set);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 181;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 181;
coroutine_heap->type_description_1 = "ccocccccccooo";
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
coroutine->m_frame->m_frame.f_lineno = 181;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 181;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccocccccccooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (Nuitka_Cell_GET(coroutine_heap->var_status_code) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_status_code);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = Nuitka_Cell_GET(coroutine_heap->var_status_code);
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
coroutine->m_frame->m_frame.f_lineno = 182;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_3;
coroutine_heap->exception_lineno = 182;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccocccccccooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (Nuitka_Cell_GET(coroutine_heap->var_response_headers) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 183;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = Nuitka_Cell_GET(coroutine_heap->var_response_headers);
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_4;
coroutine->m_frame->m_frame.f_lineno = 183;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_4;
coroutine_heap->exception_lineno = 183;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccocccccccooo";
goto frame_exception_exit_1;
}
branch_no_8:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_httpx$_transports$asgi$ASGIResponseStream(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ASGIResponseStream);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 185;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_body_parts));
tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine_heap->var_body_parts);
coroutine->m_frame->m_frame.f_lineno = 185;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 185;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_stream == NULL);
coroutine_heap->var_stream = tmp_assign_source_21;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_5 = module_var_accessor_httpx$_transports$asgi$Response(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine_heap->var_status_code) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_status_code);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine_heap->var_status_code);
if (Nuitka_Cell_GET(coroutine_heap->var_response_headers) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ccocccccccooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine_heap->var_response_headers);
CHECK_OBJECT(coroutine_heap->var_stream);
tmp_kw_call_dict_value_1_1 = coroutine_heap->var_stream;
coroutine->m_frame->m_frame.f_lineno = 187;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple);
}

if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "ccocccccccooo";
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
    coroutine_heap->var_scope,
    coroutine_heap->var_request_body_chunks,
    coroutine_heap->var_request_complete,
    coroutine_heap->var_status_code,
    coroutine_heap->var_response_headers,
    coroutine_heap->var_body_parts,
    coroutine_heap->var_response_started,
    coroutine_heap->var_response_complete,
    coroutine_heap->var_receive,
    coroutine_heap->var_send,
    coroutine_heap->var_stream
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
CHECK_OBJECT(coroutine_heap->var_scope);
CHECK_OBJECT(coroutine_heap->var_scope);
Py_DECREF(coroutine_heap->var_scope);
coroutine_heap->var_scope = NULL;
CHECK_OBJECT(coroutine_heap->var_request_body_chunks);
CHECK_OBJECT(coroutine_heap->var_request_body_chunks);
Py_DECREF(coroutine_heap->var_request_body_chunks);
coroutine_heap->var_request_body_chunks = NULL;
CHECK_OBJECT(coroutine_heap->var_request_complete);
CHECK_OBJECT(coroutine_heap->var_request_complete);
Py_DECREF(coroutine_heap->var_request_complete);
coroutine_heap->var_request_complete = NULL;
CHECK_OBJECT(coroutine_heap->var_status_code);
CHECK_OBJECT(coroutine_heap->var_status_code);
Py_DECREF(coroutine_heap->var_status_code);
coroutine_heap->var_status_code = NULL;
CHECK_OBJECT(coroutine_heap->var_response_headers);
CHECK_OBJECT(coroutine_heap->var_response_headers);
Py_DECREF(coroutine_heap->var_response_headers);
coroutine_heap->var_response_headers = NULL;
CHECK_OBJECT(coroutine_heap->var_body_parts);
CHECK_OBJECT(coroutine_heap->var_body_parts);
Py_DECREF(coroutine_heap->var_body_parts);
coroutine_heap->var_body_parts = NULL;
CHECK_OBJECT(coroutine_heap->var_response_started);
CHECK_OBJECT(coroutine_heap->var_response_started);
Py_DECREF(coroutine_heap->var_response_started);
coroutine_heap->var_response_started = NULL;
CHECK_OBJECT(coroutine_heap->var_response_complete);
CHECK_OBJECT(coroutine_heap->var_response_complete);
Py_DECREF(coroutine_heap->var_response_complete);
coroutine_heap->var_response_complete = NULL;
CHECK_OBJECT(coroutine_heap->var_receive);
CHECK_OBJECT(coroutine_heap->var_receive);
Py_DECREF(coroutine_heap->var_receive);
coroutine_heap->var_receive = NULL;
CHECK_OBJECT(coroutine_heap->var_send);
CHECK_OBJECT(coroutine_heap->var_send);
Py_DECREF(coroutine_heap->var_send);
coroutine_heap->var_send = NULL;
CHECK_OBJECT(coroutine_heap->var_stream);
CHECK_OBJECT(coroutine_heap->var_stream);
Py_DECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_scope);
coroutine_heap->var_scope = NULL;
CHECK_OBJECT(coroutine_heap->var_request_body_chunks);
CHECK_OBJECT(coroutine_heap->var_request_body_chunks);
Py_DECREF(coroutine_heap->var_request_body_chunks);
coroutine_heap->var_request_body_chunks = NULL;
CHECK_OBJECT(coroutine_heap->var_request_complete);
CHECK_OBJECT(coroutine_heap->var_request_complete);
Py_DECREF(coroutine_heap->var_request_complete);
coroutine_heap->var_request_complete = NULL;
CHECK_OBJECT(coroutine_heap->var_status_code);
CHECK_OBJECT(coroutine_heap->var_status_code);
Py_DECREF(coroutine_heap->var_status_code);
coroutine_heap->var_status_code = NULL;
CHECK_OBJECT(coroutine_heap->var_response_headers);
CHECK_OBJECT(coroutine_heap->var_response_headers);
Py_DECREF(coroutine_heap->var_response_headers);
coroutine_heap->var_response_headers = NULL;
CHECK_OBJECT(coroutine_heap->var_body_parts);
CHECK_OBJECT(coroutine_heap->var_body_parts);
Py_DECREF(coroutine_heap->var_body_parts);
coroutine_heap->var_body_parts = NULL;
CHECK_OBJECT(coroutine_heap->var_response_started);
CHECK_OBJECT(coroutine_heap->var_response_started);
Py_DECREF(coroutine_heap->var_response_started);
coroutine_heap->var_response_started = NULL;
CHECK_OBJECT(coroutine_heap->var_response_complete);
CHECK_OBJECT(coroutine_heap->var_response_complete);
Py_DECREF(coroutine_heap->var_response_complete);
coroutine_heap->var_response_complete = NULL;
Py_XDECREF(coroutine_heap->var_receive);
coroutine_heap->var_receive = NULL;
Py_XDECREF(coroutine_heap->var_send);
coroutine_heap->var_send = NULL;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

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

static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request_context,
        module_httpx$_transports$asgi,
        mod_consts.const_str_plain_handle_async_request,
        mod_consts.const_str_digest_4e24fdc2154c13113a13427e9d86c73d,
        code_objects_805faae46ee7ba2a070605eafd4ce254,
        closure,
        2,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = self->m_closure[2];
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive(tstate, tmp_closure_1);

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
struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals {
PyObject *var_body;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals *coroutine_heap = (struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_body = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2f6471781002b16b42f9af4ffee87b7b, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request_complete);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 137;
coroutine_heap->type_description_1 = "cocc";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[1]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 137;
coroutine_heap->type_description_1 = "cocc";
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 138;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_complete);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cocc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 138;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wait);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cocc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cocc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
coroutine_heap->tmp_return_value = DICT_COPY(tstate, mod_consts.const_dict_5d6896a4f8512b62e298aea3b3b20ad3);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_2;
coroutine->m_frame->m_frame.f_lineno = 142;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request_body_chunks);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 142;
coroutine_heap->type_description_1 = "cocc";
    goto try_except_handler_2;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 142;
tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain___anext__);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 142;
coroutine_heap->type_description_1 = "cocc";
    goto try_except_handler_2;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 142;
coroutine_heap->type_description_1 = "cocc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 142;
coroutine_heap->type_description_1 = "cocc";
    goto try_except_handler_2;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_body == NULL);
coroutine_heap->var_body = tmp_assign_source_1;
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
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_True;
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_2);
    Py_INCREF(tmp_assign_source_2);
    Py_XDECREF(old);
}

}
coroutine_heap->tmp_return_value = DICT_COPY(tstate, mod_consts.const_dict_77884525a8fa1a0d722d46040d1f65b7);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 141;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cocc";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:
try_end_1:;

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
    coroutine_heap->var_body,
    coroutine->m_closure[2],
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
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_str_plain_type;
tmp_dict_value_1 = mod_consts.const_str_digest_9f0371f48763bfa78259d2265c8883f7;
coroutine_heap->tmp_return_value = _PyDict_NewPresized( 3 );
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_body;
CHECK_OBJECT(coroutine_heap->var_body);
tmp_dict_value_1 = coroutine_heap->var_body;
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_more_body;
tmp_dict_value_1 = Py_True;
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_body);
coroutine_heap->var_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

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

static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_context,
        module_httpx$_transports$asgi,
        mod_consts.const_str_plain_receive,
        mod_consts.const_str_digest_976681822a269a22c69e1a85d4d40862,
        code_objects_2f6471781002b16b42f9af4ffee87b7b,
        closure,
        3,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive$$$coroutine__1_receive_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_message = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[7];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_message;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = self->m_closure[1];
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = self->m_closure[2];
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = self->m_closure[3];
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = self->m_closure[4];
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = self->m_closure[5];
Py_INCREF(tmp_closure_1[6]);
tmp_return_value = MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_message);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
par_message = NULL;
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
struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals {
PyObject *var_body;
PyObject *var_more_body;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals *coroutine_heap = (struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_body = NULL;
coroutine_heap->var_more_body = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ed651e23b9a3565581794d01f7cd604b, module_httpx$_transports$asgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_3d0554b8ebc1d51a4f04025935f553d3;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "ccccooccc";
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
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_started);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 152;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 152;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (coroutine_heap->tmp_res == 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
coroutine->m_frame->m_frame.f_lineno = 152;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 152;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccooccc";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 154;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_subscript_value_2 = mod_consts.const_str_plain_status;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 154;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[6]);
    Nuitka_Cell_SET(coroutine->m_closure[6], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 155;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 155;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_headers;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
coroutine->m_frame->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 155;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[4]);
    Nuitka_Cell_SET(coroutine->m_closure[4], tmp_assign_source_2);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_True;
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[5]);
    Nuitka_Cell_SET(coroutine->m_closure[5], tmp_assign_source_3);
    Py_INCREF(tmp_assign_source_3);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 158;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_subscript_value_3 = const_str_plain_type;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 158;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_2cb1ea705e74b13b255fc484cefb458c;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 158;
coroutine_heap->type_description_1 = "ccccooccc";
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
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_operand_value_4;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_complete);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 159;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 159;
tmp_operand_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_set);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 159;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 159;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (coroutine_heap->tmp_res == 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
coroutine->m_frame->m_frame.f_lineno = 159;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 159;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccooccc";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 160;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 160;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 160;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_body_bytes_empty_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 160;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_body == NULL);
coroutine_heap->var_body = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 161;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 161;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 161;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_more_body_false_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 161;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_more_body == NULL);
coroutine_heap->var_more_body = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->var_body);
tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_body);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_method);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_HEAD;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 163;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_body_parts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 164;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 164;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_body);
tmp_args_element_value_1 = coroutine_heap->var_body;
coroutine->m_frame->m_frame.f_lineno = 164;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 164;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(coroutine_heap->var_more_body);
tmp_operand_value_5 = coroutine_heap->var_more_body;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 166;
coroutine_heap->type_description_1 = "ccccooccc";
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_complete);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 167;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 167;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_set);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 167;
coroutine_heap->type_description_1 = "ccccooccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
branch_no_3:;
branch_end_1:;

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
    coroutine->m_closure[6],
    coroutine->m_closure[4],
    coroutine->m_closure[5],
    coroutine_heap->var_body,
    coroutine_heap->var_more_body,
    coroutine->m_closure[3],
    coroutine->m_closure[2],
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
Py_XDECREF(coroutine_heap->var_body);
coroutine_heap->var_body = NULL;
Py_XDECREF(coroutine_heap->var_more_body);
coroutine_heap->var_more_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_body);
coroutine_heap->var_body = NULL;
Py_XDECREF(coroutine_heap->var_more_body);
coroutine_heap->var_more_body = NULL;
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

static PyObject *MAKE_COROUTINE_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_context,
        module_httpx$_transports$asgi,
        const_str_plain_send,
        mod_consts.const_str_digest_432bcb0c909704301e433caf3af13139,
        code_objects_ed651e23b9a3565581794d01f7cd604b,
        closure,
        7,
#if 1
        sizeof(struct httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send$$$coroutine__1_send_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__1_is_running_trio(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__1_is_running_trio,
        mod_consts.const_str_plain_is_running_trio,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_898e8418e5c3ca656c8380900fd70286,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__2_create_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__2_create_event,
        mod_consts.const_str_plain_create_event,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_78429e8d5e802b99e7d3a9fbec5b0456,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1cc5be464225c173b79b4edd0e37beba,
#endif
        code_objects_d67a163cfac28293e0f2e0ea032f51c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__4___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__4___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a2d36f91a7e2b4c92f1ef083ebdac40,
#endif
        code_objects_2eb2171ff0be725396e18f47ad56021e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__5___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7dd259a568c3a33951afdd0033061f40,
#endif
        code_objects_4266afa8f2f1fc2a8f5c98bc23dfb982,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__6_handle_async_request,
        mod_consts.const_str_plain_handle_async_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4e24fdc2154c13113a13427e9d86c73d,
#endif
        code_objects_805faae46ee7ba2a070605eafd4ce254,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive,
        mod_consts.const_str_plain_receive,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_976681822a269a22c69e1a85d4d40862,
#endif
        code_objects_2f6471781002b16b42f9af4ffee87b7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_432bcb0c909704301e433caf3af13139,
#endif
        code_objects_ed651e23b9a3565581794d01f7cd604b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$asgi,
        NULL,
        closure,
        6
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

static function_impl_code const function_table_httpx$_transports$asgi[] = {
impl_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__1_receive,
impl_httpx$_transports$asgi$$$function__6_handle_async_request$$$coroutine__1_handle_async_request$$$function__2_send,
impl_httpx$_transports$asgi$$$function__1_is_running_trio,
impl_httpx$_transports$asgi$$$function__2_create_event,
impl_httpx$_transports$asgi$$$function__3___init__,
impl_httpx$_transports$asgi$$$function__4___aiter__,
impl_httpx$_transports$asgi$$$function__5___init__,
impl_httpx$_transports$asgi$$$function__6_handle_async_request,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_transports$asgi);
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
        module_httpx$_transports$asgi,
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
        function_table_httpx$_transports$asgi,
        sizeof(function_table_httpx$_transports$asgi) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._transports.asgi";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_transports$asgi(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_transports$asgi");

    // Store the module for future use.
    module_httpx$_transports$asgi = module;

    moduledict_httpx$_transports$asgi = MODULE_DICT(module_httpx$_transports$asgi);

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
        PRINT_STRING("httpx$_transports$asgi: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_transports$asgi: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_transports$asgi: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._transports.asgi" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_transports$asgi\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_transports$asgi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$asgi,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$asgi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$asgi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$asgi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_transports$asgi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_transports$asgi);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_httpx$_transports$asgi;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_httpx$_transports$asgi$$$class__2_ASGITransport_63 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_transports$asgi = MAKE_MODULE_FRAME(code_objects_5bfc72e0bbe68234caae38a500c3d386, module_httpx$_transports$asgi);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$asgi);
assert(Py_REFCNT(frame_frame_httpx$_transports$asgi) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_transports$asgi$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_transports$asgi$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$asgi;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 5;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_httpx$_transports$asgi,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_7);
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
        (PyObject *)moduledict_httpx$_transports$asgi,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$asgi;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_AsyncByteStream_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpx$_transports$asgi,
        mod_consts.const_str_plain_AsyncByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AsyncByteStream);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_base;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_transports$asgi;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_AsyncBaseTransport_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 7;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpx$_transports$asgi,
        mod_consts.const_str_plain_AsyncBaseTransport,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_AsyncBaseTransport);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBaseTransport, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MutableMapping);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_3 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Any);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Message, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_5 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_5 == NULL));
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = MAKE_LIST_EMPTY(tstate, 0);
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_expression_value_7 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_7 == NULL));
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Awaitable);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto tuple_build_exception_2;
}
tmp_subscript_value_3 = module_var_accessor_httpx$_transports$asgi$_Message(tstate);
assert(!(tmp_subscript_value_3 == NULL));
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_4);
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Receive, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_3;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_4;
tmp_expression_value_9 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_MutableMapping);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_8);

exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
tmp_expression_value_12 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Any);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_10);
Py_DECREF(tmp_subscript_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_8);

exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_3, 0, tmp_list_element_1);
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_6;
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_3);
tmp_expression_value_14 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_14 == NULL));
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Awaitable);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto tuple_build_exception_4;
}
tmp_subscript_value_6 = Py_None;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_expression_value_8);
Py_DECREF(tmp_subscript_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__Send, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_7;
PyObject *tmp_tuple_element_5;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_6;
tmp_expression_value_16 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_16 == NULL));
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_expression_value_18 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_18 == NULL));
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_MutableMapping);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_15);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_6);
tmp_expression_value_19 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Any);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_17);
Py_DECREF(tmp_subscript_value_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_15);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM(tmp_tuple_element_5, 0, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_httpx$_transports$asgi$_Receive(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Receive);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_tuple_element_5, 1, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_httpx$_transports$asgi$_Send(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Send);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_tuple_element_5, 2, tmp_list_element_2);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_expression_value_15);
Py_DECREF(tmp_tuple_element_5);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_9;
PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_5);
tmp_expression_value_21 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_21 == NULL));
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Awaitable);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto tuple_build_exception_6;
}
tmp_subscript_value_9 = Py_None;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_expression_value_15);
Py_DECREF(tmp_subscript_value_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain__ASGIApp, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST1(tstate, mod_consts.const_str_plain_ASGITransport);
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_16 = MAKE_FUNCTION_httpx$_transports$asgi$$$function__1_is_running_trio(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_is_running_trio, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e23711663ec8616750b0e4713750b11a);

tmp_assign_source_17 = MAKE_FUNCTION_httpx$_transports$asgi$$$function__2_create_event(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_create_event, tmp_assign_source_17);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_httpx$_transports$asgi$AsyncByteStream(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncByteStream);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_22 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_10, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_21;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_ASGIResponseStream;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 55;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 55;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_23;
}
branch_end_1:;
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1ded65c24366409de18e7d396c8dfe28;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_ASGIResponseStream;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2 = MAKE_CLASS_FRAME(tstate, code_objects_e653208ca4dbff4bfb75dfa95bd985fc, module_httpx$_transports$asgi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2);
assert(Py_REFCNT(frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_38357e4ef7168ed6bd73354c3e65b0ae);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__3___init__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_6f0eedf5fa97178f67c35f0129bdbeae);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__4___aiter__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$asgi$$$class__1_ASGIResponseStream_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__body_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
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


exception_lineno = 55;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_ASGIResponseStream;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 55;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_25;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_24 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55);
locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55);
locals_httpx$_transports$asgi$$$class__1_ASGIResponseStream_55 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 55;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_ASGIResponseStream, tmp_assign_source_24);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_httpx$_transports$asgi$AsyncBaseTransport(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncBaseTransport);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto try_except_handler_5;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_28 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_11, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_29;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_ASGITransport;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 63;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_30;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_31 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_5;
}
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 63;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 63;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_31;
}
branch_end_4:;
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpx$_transports$asgi$$$class__2_ASGITransport_63 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1ded65c24366409de18e7d396c8dfe28;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_a4cb795dcd2cc06486098f8ec5bac2d7;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_ASGITransport;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_63;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
}
frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3 = MAKE_CLASS_FRAME(tstate, code_objects_fc50dfeb1cf1cf44f72e739dca15339d, module_httpx$_transports$asgi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3);
assert(Py_REFCNT(frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_5;
tmp_defaults_1 = mod_consts.const_tuple_d23df9d234fe6bc4fba3d65b6ac42ca4_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_17e16a180fecaad35c6da3c5c061a509);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__5___init__(tstate, tmp_defaults_1, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, const_str_plain___init__, tmp_dictset_value);
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
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$asgi$$$function__6_handle_async_request(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, mod_consts.const_str_plain_handle_async_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$asgi$$$class__2_ASGITransport_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_9c1c8e9457c7853b2d1a7e36613e3ee8_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
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


exception_lineno = 63;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_ASGITransport;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_httpx$_transports$asgi$$$class__2_ASGITransport_63;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_transports$asgi->m_frame.f_lineno = 63;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_33;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_32 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63);
locals_httpx$_transports$asgi$$$class__2_ASGITransport_63 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$asgi$$$class__2_ASGITransport_63);
locals_httpx$_transports$asgi$$$class__2_ASGITransport_63 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 63;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)mod_consts.const_str_plain_ASGITransport, tmp_assign_source_32);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$asgi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$asgi->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$asgi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_transports$asgi);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_transports$asgi", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._transports.asgi" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_transports$asgi);
    return module_httpx$_transports$asgi;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$asgi, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_transports$asgi", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

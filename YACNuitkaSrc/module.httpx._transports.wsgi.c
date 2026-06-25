/* Generated code for Python module 'httpx$_transports$wsgi'
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



/* The "module_httpx$_transports$wsgi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_transports$wsgi;
PyDictObject *moduledict_httpx$_transports$wsgi;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_itertools;
PyObject *const_str_plain_chain;
PyObject *const_str_plain__close;
PyObject *const_str_plain__skip_leading_empty_chunks;
PyObject *const_str_plain__result;
PyObject *const_str_plain_self;
PyObject *const_str_digest_3ee604a073e3da468fea9bc0c186b9bd;
PyObject *const_str_plain_app;
PyObject *const_str_plain_raise_app_exceptions;
PyObject *const_str_plain_script_name;
PyObject *const_str_plain_remote_addr;
PyObject *const_str_plain_wsgi_errors;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_content;
PyObject *const_str_plain_url;
PyObject *const_str_plain_port;
PyObject *const_dict_93916f845314fde3dc45a1c4d3d34ff8;
PyObject *const_str_plain_scheme;
PyObject *const_str_digest_6dbf34bc3c6c97140fb2e470eb09d9e0;
PyObject *const_tuple_int_pos_1_int_0_tuple;
PyObject *const_str_digest_7dda067c9a1ef36e443331a671042fc8;
PyObject *const_str_digest_6623fd46df294a21768471b3f1c68906;
PyObject *const_str_digest_8e0570294456bf4fb3ece27919075dd5;
PyObject *const_str_plain_stderr;
PyObject *const_str_digest_5e42c66be2be9108490ba359ff3b94f4;
PyObject *const_str_digest_d8ead54eee7d26dc9d87a22befb57952;
PyObject *const_str_digest_770abca417a4e1978ec2e7b9b33f257b;
PyObject *const_str_plain_REQUEST_METHOD;
PyObject *const_str_plain_method;
PyObject *const_str_plain_SCRIPT_NAME;
PyObject *const_str_plain_PATH_INFO;
PyObject *const_str_plain_QUERY_STRING;
PyObject *const_str_plain_query;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_SERVER_NAME;
PyObject *const_str_plain_host;
PyObject *const_str_plain_SERVER_PORT;
PyObject *const_str_plain_SERVER_PROTOCOL;
PyObject *const_str_digest_11e05ea5fbe56d293dc284bdbbf86401;
PyObject *const_str_plain_REMOTE_ADDR;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_upper;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_chr_45_str_underscore_tuple;
PyObject *const_tuple_str_plain_CONTENT_TYPE_str_plain_CONTENT_LENGTH_tuple;
PyObject *const_str_plain_HTTP_;
PyObject *const_str_plain_environ;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_8d2ef0f783a89f69cd3f0c97f83f09bd;
PyObject *const_str_plain_start_response;
PyObject *const_str_digest_ed37e241254bd7d0daeae0e9dd9c1b3e;
PyObject *const_str_plain_WSGIByteStream;
PyObject *const_str_plain_seen_status;
PyObject *const_str_plain_seen_response_headers;
PyObject *const_str_plain_seen_exc_info;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_Response;
PyObject *const_tuple_str_plain_headers_str_plain_stream_tuple;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_e8224edc4abdf1735ea2d570e74c41ef;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_io;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_typing;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_Request_str_plain_Response_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_Request;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_SyncByteStream_tuple;
PyObject *const_str_plain_SyncByteStream;
PyObject *const_str_plain_base;
PyObject *const_tuple_str_plain_BaseTransport_tuple;
PyObject *const_str_plain_BaseTransport;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain__T_tuple;
PyObject *const_str_plain__T;
PyObject *const_str_plain_WSGITransport;
PyObject *const_dict_cd990b6b6c49a12383881658374ee75b;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9a6df7810bd3b4da63f0eb2e021b8ac7;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_30;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_82e4823ac7890abfa9edf10fb9e9926f;
PyObject *const_str_digest_f1cb0b63c3db48b7b67e35e1caa0b853;
PyObject *const_dict_792443ad00eade00425fbf2e698fefb3;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_8d3ce8ab14e836ff2c55fe4dd0ab2d34;
PyObject *const_tuple_str_plain__close_str_plain__result_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_78f3042a81a0352c50e1d10b1ee8b118;
PyObject *const_int_pos_44;
PyObject *const_tuple_d552d9194c3d51d67f925ce1351c3726_tuple;
PyObject *const_dict_59ee000a5f417aca547097152ca3124a;
PyObject *const_str_digest_c233b7f9f2aa87d3b9198afa8da4d646;
PyObject *const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4;
PyObject *const_str_plain_handle_request;
PyObject *const_str_digest_1e361a2274ad468663d7ae182c82b43a;
PyObject *const_tuple_30cbe49a6f20c140de11aa97eec19ea5_tuple;
PyObject *const_str_digest_c1c27ab029c57a828b742e8b8348c241;
PyObject *const_tuple_str_underscore_tuple;
PyObject *const_str_digest_397dfbdae44720d2f933c0b579622e11;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_result_tuple;
PyObject *const_tuple_2b1f372b82352e737cef617783cbcd92_tuple;
PyObject *const_tuple_str_plain_self_str_plain_part_tuple;
PyObject *const_tuple_str_plain_body_str_plain_chunk_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_123b7a39344eb1426991065f92c3a759_tuple;
PyObject *const_tuple_eb16bbd0ee1add54f494c8999dbed423_tuple;
PyObject *const_tuple_2a035ce32235792f4715d59b9383c4b7_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[120];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._transports.wsgi"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_chain);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__close);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__skip_leading_empty_chunks);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__result);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ee604a073e3da468fea9bc0c186b9bd);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_app_exceptions);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_script_name);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_remote_addr);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_wsgi_errors);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_dict_93916f845314fde3dc45a1c4d3d34ff8);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dbf34bc3c6c97140fb2e470eb09d9e0);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dda067c9a1ef36e443331a671042fc8);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_6623fd46df294a21768471b3f1c68906);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e0570294456bf4fb3ece27919075dd5);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_stderr);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e42c66be2be9108490ba359ff3b94f4);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8ead54eee7d26dc9d87a22befb57952);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_770abca417a4e1978ec2e7b9b33f257b);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_METHOD);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_SCRIPT_NAME);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_PATH_INFO);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_QUERY_STRING);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_NAME);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_PORT);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_PROTOCOL);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_11e05ea5fbe56d293dc284bdbbf86401);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_REMOTE_ADDR);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_str_underscore_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CONTENT_TYPE_str_plain_CONTENT_LENGTH_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP_);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_8d2ef0f783a89f69cd3f0c97f83f09bd);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_response);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed37e241254bd7d0daeae0e9dd9c1b3e);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_WSGIByteStream);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_seen_status);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_seen_response_headers);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_seen_exc_info);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8224edc4abdf1735ea2d570e74c41ef);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncByteStream_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_base);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseTransport_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseTransport);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__T);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_WSGITransport);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_cd990b6b6c49a12383881658374ee75b);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a6df7810bd3b4da63f0eb2e021b8ac7);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_82e4823ac7890abfa9edf10fb9e9926f);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1cb0b63c3db48b7b67e35e1caa0b853);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d3ce8ab14e836ff2c55fe4dd0ab2d34);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__close_str_plain__result_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_78f3042a81a0352c50e1d10b1ee8b118);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_44);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_d552d9194c3d51d67f925ce1351c3726_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_59ee000a5f417aca547097152ca3124a);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_c233b7f9f2aa87d3b9198afa8da4d646);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_request);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e361a2274ad468663d7ae182c82b43a);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_30cbe49a6f20c140de11aa97eec19ea5_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1c27ab029c57a828b742e8b8348c241);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_397dfbdae44720d2f933c0b579622e11);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_2b1f372b82352e737cef617783cbcd92_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_part_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_chunk_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_123b7a39344eb1426991065f92c3a759_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_eb16bbd0ee1add54f494c8999dbed423_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_2a035ce32235792f4715d59b9383c4b7_tuple);
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
void checkModuleConstants_httpx$_transports$wsgi(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chain);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__close);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__skip_leading_empty_chunks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__skip_leading_empty_chunks);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__result);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ee604a073e3da468fea9bc0c186b9bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ee604a073e3da468fea9bc0c186b9bd);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_app_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_app_exceptions);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_script_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_script_name);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_remote_addr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remote_addr);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_wsgi_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wsgi_errors);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_dict_93916f845314fde3dc45a1c4d3d34ff8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_93916f845314fde3dc45a1c4d3d34ff8);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dbf34bc3c6c97140fb2e470eb09d9e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6dbf34bc3c6c97140fb2e470eb09d9e0);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_0_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dda067c9a1ef36e443331a671042fc8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dda067c9a1ef36e443331a671042fc8);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_6623fd46df294a21768471b3f1c68906));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6623fd46df294a21768471b3f1c68906);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e0570294456bf4fb3ece27919075dd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e0570294456bf4fb3ece27919075dd5);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stderr);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e42c66be2be9108490ba359ff3b94f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e42c66be2be9108490ba359ff3b94f4);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8ead54eee7d26dc9d87a22befb57952));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8ead54eee7d26dc9d87a22befb57952);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_770abca417a4e1978ec2e7b9b33f257b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_770abca417a4e1978ec2e7b9b33f257b);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_METHOD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_METHOD);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_SCRIPT_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SCRIPT_NAME);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_PATH_INFO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PATH_INFO);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_QUERY_STRING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QUERY_STRING);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVER_NAME);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_PORT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVER_PORT);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_PROTOCOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVER_PROTOCOL);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_11e05ea5fbe56d293dc284bdbbf86401));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11e05ea5fbe56d293dc284bdbbf86401);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_REMOTE_ADDR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REMOTE_ADDR);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upper);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_45_str_underscore_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CONTENT_TYPE_str_plain_CONTENT_LENGTH_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CONTENT_TYPE_str_plain_CONTENT_LENGTH_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTP_);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_8d2ef0f783a89f69cd3f0c97f83f09bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8d2ef0f783a89f69cd3f0c97f83f09bd);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_response);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed37e241254bd7d0daeae0e9dd9c1b3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed37e241254bd7d0daeae0e9dd9c1b3e);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_WSGIByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WSGIByteStream);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_seen_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seen_status);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_seen_response_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seen_response_headers);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_seen_exc_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seen_exc_info);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8224edc4abdf1735ea2d570e74c41ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8224edc4abdf1735ea2d570e74c41ef);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncByteStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncByteStream_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncByteStream);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseTransport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseTransport_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseTransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseTransport);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_WSGITransport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WSGITransport);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_cd990b6b6c49a12383881658374ee75b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cd990b6b6c49a12383881658374ee75b);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a6df7810bd3b4da63f0eb2e021b8ac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a6df7810bd3b4da63f0eb2e021b8ac7);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_30));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_30);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_82e4823ac7890abfa9edf10fb9e9926f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_82e4823ac7890abfa9edf10fb9e9926f);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1cb0b63c3db48b7b67e35e1caa0b853));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1cb0b63c3db48b7b67e35e1caa0b853);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d3ce8ab14e836ff2c55fe4dd0ab2d34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d3ce8ab14e836ff2c55fe4dd0ab2d34);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__close_str_plain__result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__close_str_plain__result_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_78f3042a81a0352c50e1d10b1ee8b118));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78f3042a81a0352c50e1d10b1ee8b118);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_44));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_44);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_d552d9194c3d51d67f925ce1351c3726_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d552d9194c3d51d67f925ce1351c3726_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_59ee000a5f417aca547097152ca3124a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_59ee000a5f417aca547097152ca3124a);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_c233b7f9f2aa87d3b9198afa8da4d646));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c233b7f9f2aa87d3b9198afa8da4d646);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_request);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e361a2274ad468663d7ae182c82b43a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e361a2274ad468663d7ae182c82b43a);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_30cbe49a6f20c140de11aa97eec19ea5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_30cbe49a6f20c140de11aa97eec19ea5_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1c27ab029c57a828b742e8b8348c241));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1c27ab029c57a828b742e8b8348c241);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_397dfbdae44720d2f933c0b579622e11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_397dfbdae44720d2f933c0b579622e11);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_result_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_2b1f372b82352e737cef617783cbcd92_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2b1f372b82352e737cef617783cbcd92_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_part_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_part_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_chunk_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_body_str_plain_chunk_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_123b7a39344eb1426991065f92c3a759_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_123b7a39344eb1426991065f92c3a759_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_eb16bbd0ee1add54f494c8999dbed423_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eb16bbd0ee1add54f494c8999dbed423_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_2a035ce32235792f4715d59b9383c4b7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2a035ce32235792f4715d59b9383c4b7_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_httpx$_transports$wsgi$BaseTransport(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$wsgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$wsgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$wsgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$wsgi$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$wsgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$wsgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$wsgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$wsgi$SyncByteStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$wsgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$wsgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$wsgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$wsgi$WSGIByteStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$wsgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$wsgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_WSGIByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$wsgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WSGIByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WSGIByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WSGIByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WSGIByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_WSGIByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_WSGIByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WSGIByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$wsgi$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$wsgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$wsgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$wsgi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$wsgi$_skip_leading_empty_chunks(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$wsgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$wsgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain__skip_leading_empty_chunks);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$wsgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__skip_leading_empty_chunks);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__skip_leading_empty_chunks, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__skip_leading_empty_chunks);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__skip_leading_empty_chunks, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain__skip_leading_empty_chunks);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain__skip_leading_empty_chunks);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__skip_leading_empty_chunks);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_transports$wsgi$itertools(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_transports$wsgi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_transports$wsgi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_transports$wsgi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itertools);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itertools, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itertools);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itertools, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7ccac0cd05fb7ffb982312a09a37c46f;
static PyCodeObject *code_objects_0973340bae7816211d2a2ba37a6471ea;
static PyCodeObject *code_objects_405ae336568dbc52445ded107bcb7488;
static PyCodeObject *code_objects_6da9d52d7b321bfb298d8f909b458985;
static PyCodeObject *code_objects_bceb2ff794463a0892f369a91d545b03;
static PyCodeObject *code_objects_b655718de74ba442cbd659b2aea76236;
static PyCodeObject *code_objects_1e3b10b08a70a581ea3fd9ae9c872749;
static PyCodeObject *code_objects_aebaafaae34944e8a339c13fd7d50201;
static PyCodeObject *code_objects_acde4f83ecd614b06c1c368b4c7bf243;
static PyCodeObject *code_objects_acbc563c52c558df2ca3a709f20f5c7d;
static PyCodeObject *code_objects_243d2ce0345a1f67ea26e031682d710a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c1c27ab029c57a828b742e8b8348c241); CHECK_OBJECT(module_filename_obj);
code_objects_7ccac0cd05fb7ffb982312a09a37c46f = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e8224edc4abdf1735ea2d570e74c41ef, mod_consts.const_tuple_str_underscore_tuple, NULL, 1, 0, 0);
code_objects_0973340bae7816211d2a2ba37a6471ea = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_397dfbdae44720d2f933c0b579622e11, mod_consts.const_str_digest_397dfbdae44720d2f933c0b579622e11, NULL, NULL, 0, 0, 0);
code_objects_405ae336568dbc52445ded107bcb7488 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WSGIByteStream, mod_consts.const_str_plain_WSGIByteStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6da9d52d7b321bfb298d8f909b458985 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WSGITransport, mod_consts.const_str_plain_WSGITransport, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bceb2ff794463a0892f369a91d545b03 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f1cb0b63c3db48b7b67e35e1caa0b853, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple, NULL, 2, 0, 0);
code_objects_b655718de74ba442cbd659b2aea76236 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_c233b7f9f2aa87d3b9198afa8da4d646, mod_consts.const_tuple_2b1f372b82352e737cef617783cbcd92_tuple, NULL, 6, 0, 0);
code_objects_1e3b10b08a70a581ea3fd9ae9c872749 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_3ee604a073e3da468fea9bc0c186b9bd, mod_consts.const_tuple_str_plain_self_str_plain_part_tuple, NULL, 1, 0, 0);
code_objects_aebaafaae34944e8a339c13fd7d50201 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__skip_leading_empty_chunks, mod_consts.const_str_plain__skip_leading_empty_chunks, mod_consts.const_tuple_str_plain_body_str_plain_chunk_tuple, NULL, 1, 0, 0);
code_objects_acde4f83ecd614b06c1c368b4c7bf243 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_8d3ce8ab14e836ff2c55fe4dd0ab2d34, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_acbc563c52c558df2ca3a709f20f5c7d = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_request, mod_consts.const_str_digest_1e361a2274ad468663d7ae182c82b43a, mod_consts.const_tuple_123b7a39344eb1426991065f92c3a759_tuple, NULL, 2, 0, 0);
code_objects_243d2ce0345a1f67ea26e031682d710a = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_start_response, mod_consts.const_str_digest_ed37e241254bd7d0daeae0e9dd9c1b3e, mod_consts.const_tuple_eb16bbd0ee1add54f494c8999dbed423_tuple, mod_consts.const_tuple_2a035ce32235792f4715d59b9383c4b7_tuple, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__3___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__4_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__5___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response$$$function__1_lambda(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_body = python_pars[0];
PyObject *var_chunk = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks = MAKE_FUNCTION_FRAME(tstate, code_objects_aebaafaae34944e8a339c13fd7d50201, module_httpx$_transports$wsgi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks->m_type_description == NULL);
frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks = cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_body);
tmp_iter_arg_1 = par_body;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_body;
    assert(old != NULL);
    par_body = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_body);
tmp_iter_arg_2 = par_body;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
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
type_description_1 = "oo";
exception_lineno = 24;
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
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_4;
    Py_INCREF(var_chunk);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_chunk);
tmp_truth_name_1 = CHECK_IF_TRUE(var_chunk);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_httpx$_transports$wsgi$itertools(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_itertools);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_chunk);
tmp_list_element_1 = var_chunk;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_body);
tmp_args_element_value_2 = par_body;
frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks->m_frame.f_lineno = 26;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_chain,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks,
    type_description_1,
    par_body,
    var_chunk
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks == cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks);
    cache_frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks);

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
tmp_return_value = MAKE_LIST_EMPTY(tstate, 0);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_body);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
par_body = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_body);
par_body = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_httpx$_transports$wsgi$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_result = python_pars[1];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bceb2ff794463a0892f369a91d545b03, module_httpx$_transports$wsgi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__->m_type_description == NULL);
frame_frame_httpx$_transports$wsgi$$$function__2___init__ = cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi$$$function__2___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_result);
tmp_expression_value_1 = par_result;
tmp_name_value_1 = const_str_plain_close;
tmp_default_value_1 = Py_None;
tmp_assattr_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__close, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_httpx$_transports$wsgi$_skip_leading_empty_chunks(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__skip_leading_empty_chunks);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_result);
tmp_args_element_value_1 = par_result;
frame_frame_httpx$_transports$wsgi$$$function__2___init__->m_frame.f_lineno = 33;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__result, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$wsgi$$$function__2___init__,
    type_description_1,
    par_self,
    par_result
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$wsgi$$$function__2___init__ == cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__);
    cache_frame_frame_httpx$_transports$wsgi$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$wsgi$$$function__2___init__);

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
CHECK_OBJECT(par_result);
Py_DECREF(par_result);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_result);
Py_DECREF(par_result);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$wsgi$$$function__3___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter___locals {
PyObject *var_part;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1e3b10b08a70a581ea3fd9ae9c872749, module_httpx$_transports$wsgi, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__result);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
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
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 36;
        goto try_except_handler_2;
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


generator_heap->exception_lineno = 37;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_part);
generator_heap->var_part = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
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

static PyObject *MAKE_GENERATOR_httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter___context,
        module_httpx$_transports$wsgi,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_3ee604a073e3da468fea9bc0c186b9bd,
#endif
        code_objects_1e3b10b08a70a581ea3fd9ae9c872749,
        closure,
        1,
#if 1
        sizeof(struct httpx$_transports$wsgi$$$function__3___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_transports$wsgi$$$function__4_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi$$$function__4_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$wsgi$$$function__4_close = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$wsgi$$$function__4_close)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__4_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$wsgi$$$function__4_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$wsgi$$$function__4_close = MAKE_FUNCTION_FRAME(tstate, code_objects_acde4f83ecd614b06c1c368b4c7bf243, module_httpx$_transports$wsgi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$wsgi$$$function__4_close->m_type_description == NULL);
frame_frame_httpx$_transports$wsgi$$$function__4_close = cache_frame_frame_httpx$_transports$wsgi$$$function__4_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi$$$function__4_close);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi$$$function__4_close) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__close);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "o";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_httpx$_transports$wsgi$$$function__4_close->m_frame.f_lineno = 41;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi$$$function__4_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi$$$function__4_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi$$$function__4_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$wsgi$$$function__4_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$wsgi$$$function__4_close == cache_frame_frame_httpx$_transports$wsgi$$$function__4_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__4_close);
    cache_frame_frame_httpx$_transports$wsgi$$$function__4_close = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$wsgi$$$function__4_close);

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


static PyObject *impl_httpx$_transports$wsgi$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_app = python_pars[1];
PyObject *par_raise_app_exceptions = python_pars[2];
PyObject *par_script_name = python_pars[3];
PyObject *par_remote_addr = python_pars[4];
PyObject *par_wsgi_errors = python_pars[5];
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b655718de74ba442cbd659b2aea76236, module_httpx$_transports$wsgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__->m_type_description == NULL);
frame_frame_httpx$_transports$wsgi$$$function__5___init__ = cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi$$$function__5___init__);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi$$$function__5___init__) == 2);

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


exception_lineno = 85;
type_description_1 = "oooooo";
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


exception_lineno = 86;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_script_name);
tmp_assattr_value_3 = par_script_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_script_name, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_remote_addr);
tmp_assattr_value_4 = par_remote_addr;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_remote_addr, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_wsgi_errors);
tmp_assattr_value_5 = par_wsgi_errors;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_wsgi_errors, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$wsgi$$$function__5___init__,
    type_description_1,
    par_self,
    par_app,
    par_raise_app_exceptions,
    par_script_name,
    par_remote_addr,
    par_wsgi_errors
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$wsgi$$$function__5___init__ == cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__);
    cache_frame_frame_httpx$_transports$wsgi$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$wsgi$$$function__5___init__);

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
CHECK_OBJECT(par_script_name);
Py_DECREF(par_script_name);
CHECK_OBJECT(par_remote_addr);
Py_DECREF(par_remote_addr);
CHECK_OBJECT(par_wsgi_errors);
Py_DECREF(par_wsgi_errors);
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
CHECK_OBJECT(par_script_name);
Py_DECREF(par_script_name);
CHECK_OBJECT(par_remote_addr);
Py_DECREF(par_remote_addr);
CHECK_OBJECT(par_wsgi_errors);
Py_DECREF(par_wsgi_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_transports$wsgi$$$function__6_handle_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_wsgi_input = NULL;
PyObject *var_port = NULL;
PyObject *var_environ = NULL;
PyObject *var_header_key = NULL;
PyObject *var_header_value = NULL;
PyObject *var_key = NULL;
struct Nuitka_CellObject *var_seen_status = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_seen_response_headers = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_seen_exc_info = Nuitka_Cell_NewEmpty();
PyObject *var_start_response = NULL;
PyObject *var_result = NULL;
PyObject *var_stream = NULL;
PyObject *var_status_code = NULL;
PyObject *var_headers = NULL;
PyObject *outline_0_var_key = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi$$$function__6_handle_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request)) {
    Py_XDECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request = MAKE_FUNCTION_FRAME(tstate, code_objects_acbc563c52c558df2ca3a709f20f5c7d, module_httpx$_transports$wsgi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_type_description == NULL);
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request = cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi$$$function__6_handle_request);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi$$$function__6_handle_request) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_request);
tmp_called_instance_1 = par_request;
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 92;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(par_request);
tmp_expression_value_1 = par_request;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 93;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 93;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
assert(var_wsgi_input == NULL);
var_wsgi_input = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_request);
tmp_expression_value_3 = par_request;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_url);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 95;
type_description_1 = "oooooooocccooooo";
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
tmp_expression_value_4 = DICT_COPY(tstate, mod_consts.const_dict_93916f845314fde3dc45a1c4d3d34ff8);
CHECK_OBJECT(par_request);
tmp_expression_value_6 = par_request;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_url);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_4);

exception_lineno = 95;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_4);

exception_lineno = 95;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
assert(var_port == NULL);
var_port = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_6dbf34bc3c6c97140fb2e470eb09d9e0;
tmp_dict_value_1 = mod_consts.const_tuple_int_pos_1_int_0_tuple;
tmp_assign_source_3 = _PyDict_NewPresized( 15 );
{
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_20;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_7dda067c9a1ef36e443331a671042fc8;
CHECK_OBJECT(par_request);
tmp_expression_value_8 = par_request;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_url);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_6623fd46df294a21768471b3f1c68906;
CHECK_OBJECT(var_wsgi_input);
tmp_dict_value_1 = var_wsgi_input;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_8e0570294456bf4fb3ece27919075dd5;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_wsgi_errors);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 100;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_expression_value_10 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_10 == NULL));
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_stderr);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_dict_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_5e42c66be2be9108490ba359ff3b94f4;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_d8ead54eee7d26dc9d87a22befb57952;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_770abca417a4e1978ec2e7b9b33f257b;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_REQUEST_METHOD;
CHECK_OBJECT(par_request);
tmp_expression_value_11 = par_request;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_method);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SCRIPT_NAME;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_script_name);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PATH_INFO;
CHECK_OBJECT(par_request);
tmp_expression_value_14 = par_request;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_url);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_QUERY_STRING;
CHECK_OBJECT(par_request);
tmp_expression_value_17 = par_request;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_url);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_query);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 107;
tmp_dict_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SERVER_NAME;
CHECK_OBJECT(par_request);
tmp_expression_value_19 = par_request;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_url);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SERVER_PORT;
CHECK_OBJECT(var_port);
tmp_unicode_arg_1 = var_port;
tmp_dict_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SERVER_PROTOCOL;
tmp_dict_value_1 = mod_consts.const_str_digest_11e05ea5fbe56d293dc284bdbbf86401;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_REMOTE_ADDR;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_remote_addr);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooocccooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_environ == NULL);
var_environ = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(par_request);
tmp_expression_value_22 = par_request;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_headers);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_raw);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
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
type_description_1 = "oooooooocccooooo";
exception_lineno = 113;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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



exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_header_key;
    var_header_key = tmp_assign_source_9;
    Py_INCREF(var_header_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_header_value;
    var_header_value = tmp_assign_source_10;
    Py_INCREF(var_header_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(var_header_key);
tmp_expression_value_25 = var_header_key;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_decode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 114;
tmp_expression_value_24 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_upper);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 114;
tmp_expression_value_23 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 114;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_chr_45_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_1 = var_key;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_CONTENT_TYPE_str_plain_CONTENT_LENGTH_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_12;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = mod_consts.const_str_plain_HTTP_;
CHECK_OBJECT(var_key);
tmp_add_expr_right_1 = var_key;
tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    assert(old != NULL);
    var_key = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_header_value);
tmp_expression_value_26 = var_header_value;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_decode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 117;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
if (var_environ == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environ);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_environ;
CHECK_OBJECT(var_key);
tmp_dictset_key = var_key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooocccooooo";
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_None;
{
    PyObject *old = Nuitka_Cell_GET(var_seen_status);
    Nuitka_Cell_SET(var_seen_status, tmp_assign_source_13);
    Py_INCREF(tmp_assign_source_13);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_None;
{
    PyObject *old = Nuitka_Cell_GET(var_seen_response_headers);
    Nuitka_Cell_SET(var_seen_response_headers, tmp_assign_source_14);
    Py_INCREF(tmp_assign_source_14);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_None;
{
    PyObject *old = Nuitka_Cell_GET(var_seen_exc_info);
    Nuitka_Cell_SET(var_seen_exc_info, tmp_assign_source_15);
    Py_INCREF(tmp_assign_source_15);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_8d2ef0f783a89f69cd3f0c97f83f09bd);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = var_seen_exc_info;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_seen_response_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = var_seen_status;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_16 = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response(tstate, tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

assert(var_start_response == NULL);
var_start_response = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_27 = par_self;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_app);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
if (var_environ == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environ);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = var_environ;
CHECK_OBJECT(var_start_response);
tmp_args_element_value_3 = var_start_response;
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 134;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_4;
tmp_called_value_8 = module_var_accessor_httpx$_transports$wsgi$WSGIByteStream(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WSGIByteStream);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_args_element_value_4 = var_result;
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 136;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
assert(var_stream == NULL);
var_stream = tmp_assign_source_18;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(var_seen_status) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_status);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 138;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(var_seen_status);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 138;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 138;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooocccooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (Nuitka_Cell_GET(var_seen_response_headers) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_response_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 139;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = Nuitka_Cell_GET(var_seen_response_headers);
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 139;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 139;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooocccooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_2;
PyObject *tmp_expression_value_29;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
if (Nuitka_Cell_GET(var_seen_exc_info) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_exc_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(var_seen_exc_info));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(var_seen_exc_info) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_exc_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = Nuitka_Cell_GET(var_seen_exc_info);
tmp_subscript_value_2 = const_int_0;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_2, 0);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_raise_app_exceptions);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 140;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_3;
if (Nuitka_Cell_GET(var_seen_exc_info) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_exc_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = Nuitka_Cell_GET(var_seen_exc_info);
tmp_subscript_value_3 = const_int_pos_1;
tmp_raise_type_input_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_3, 1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 141;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooocccooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_31;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_4;
if (Nuitka_Cell_GET(var_seen_status) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_status);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = Nuitka_Cell_GET(var_seen_status);
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain_split);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 143;
tmp_expression_value_31 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = const_int_0;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_4, 0);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
assert(var_status_code == NULL);
var_status_code = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_3;
if (Nuitka_Cell_GET(var_seen_response_headers) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_response_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 146;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_5;
}

tmp_iter_arg_3 = Nuitka_Cell_GET(var_seen_response_headers);
tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_5;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_22;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_23 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooocccooooo";
exception_lineno = 144;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_4 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_8;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_7;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_27 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_27;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_28 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_28;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_key);
tmp_expression_value_33 = outline_0_var_key;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_encode);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_6;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 145;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_6;
}
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_34;
PyTuple_SET_ITEM(tmp_append_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_value);
tmp_expression_value_34 = outline_0_var_value;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_encode);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooocccooooo";
    goto tuple_build_exception_1;
}
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 145;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooocccooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_append_value_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooocccooooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_20 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_20);
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
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 144;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_headers == NULL);
var_headers = tmp_assign_source_20;
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_12 = module_var_accessor_httpx$_transports$wsgi$Response(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "oooooooocccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_status_code);
tmp_kw_call_arg_value_0_1 = var_status_code;
CHECK_OBJECT(var_headers);
tmp_kw_call_dict_value_0_1 = var_headers;
CHECK_OBJECT(var_stream);
tmp_kw_call_dict_value_1_1 = var_stream;
frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame.f_lineno = 149;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_headers_str_plain_stream_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooocccooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi$$$function__6_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi$$$function__6_handle_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi$$$function__6_handle_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$wsgi$$$function__6_handle_request,
    type_description_1,
    par_self,
    par_request,
    var_wsgi_input,
    var_port,
    var_environ,
    var_header_key,
    var_header_value,
    var_key,
    var_seen_status,
    var_seen_response_headers,
    var_seen_exc_info,
    var_start_response,
    var_result,
    var_stream,
    var_status_code,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_transports$wsgi$$$function__6_handle_request == cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request);
    cache_frame_frame_httpx$_transports$wsgi$$$function__6_handle_request = NULL;
}

assertFrameObject(frame_frame_httpx$_transports$wsgi$$$function__6_handle_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_wsgi_input);
CHECK_OBJECT(var_wsgi_input);
Py_DECREF(var_wsgi_input);
var_wsgi_input = NULL;
CHECK_OBJECT(var_port);
CHECK_OBJECT(var_port);
Py_DECREF(var_port);
var_port = NULL;
Py_XDECREF(var_environ);
var_environ = NULL;
Py_XDECREF(var_header_key);
var_header_key = NULL;
Py_XDECREF(var_header_value);
var_header_value = NULL;
Py_XDECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_seen_status);
CHECK_OBJECT(var_seen_status);
Py_DECREF(var_seen_status);
var_seen_status = NULL;
CHECK_OBJECT(var_seen_response_headers);
CHECK_OBJECT(var_seen_response_headers);
Py_DECREF(var_seen_response_headers);
var_seen_response_headers = NULL;
CHECK_OBJECT(var_seen_exc_info);
CHECK_OBJECT(var_seen_exc_info);
Py_DECREF(var_seen_exc_info);
var_seen_exc_info = NULL;
CHECK_OBJECT(var_start_response);
CHECK_OBJECT(var_start_response);
Py_DECREF(var_start_response);
var_start_response = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
CHECK_OBJECT(var_stream);
CHECK_OBJECT(var_stream);
Py_DECREF(var_stream);
var_stream = NULL;
CHECK_OBJECT(var_status_code);
CHECK_OBJECT(var_status_code);
Py_DECREF(var_status_code);
var_status_code = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_wsgi_input);
var_wsgi_input = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_environ);
var_environ = NULL;
Py_XDECREF(var_header_key);
var_header_key = NULL;
Py_XDECREF(var_header_value);
var_header_value = NULL;
Py_XDECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_seen_status);
CHECK_OBJECT(var_seen_status);
Py_DECREF(var_seen_status);
var_seen_status = NULL;
CHECK_OBJECT(var_seen_response_headers);
CHECK_OBJECT(var_seen_response_headers);
Py_DECREF(var_seen_response_headers);
var_seen_response_headers = NULL;
CHECK_OBJECT(var_seen_exc_info);
CHECK_OBJECT(var_seen_exc_info);
Py_DECREF(var_seen_exc_info);
var_seen_exc_info = NULL;
Py_XDECREF(var_start_response);
var_start_response = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_stream);
var_stream = NULL;
Py_XDECREF(var_status_code);
var_status_code = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
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


static PyObject *impl_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_status = python_pars[0];
PyObject *par_response_headers = python_pars[1];
PyObject *par_exc_info = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_status);
tmp_assign_source_1 = par_status;
{
    PyObject *old = Nuitka_Cell_GET(self->m_closure[2]);
    Nuitka_Cell_SET(self->m_closure[2], tmp_assign_source_1);
    Py_INCREF(tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_response_headers);
tmp_assign_source_2 = par_response_headers;
{
    PyObject *old = Nuitka_Cell_GET(self->m_closure[1]);
    Nuitka_Cell_SET(self->m_closure[1], tmp_assign_source_2);
    Py_INCREF(tmp_assign_source_2);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_exc_info);
tmp_assign_source_3 = par_exc_info;
{
    PyObject *old = Nuitka_Cell_GET(self->m_closure[0]);
    Nuitka_Cell_SET(self->m_closure[0], tmp_assign_source_3);
    Py_INCREF(tmp_assign_source_3);
    Py_XDECREF(old);
}

}

tmp_return_value = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response$$$function__1_lambda(tstate);

goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_status);
Py_DECREF(par_status);
CHECK_OBJECT(par_response_headers);
Py_DECREF(par_response_headers);
CHECK_OBJECT(par_exc_info);
Py_DECREF(par_exc_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks,
        mod_consts.const_str_plain__skip_leading_empty_chunks,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aebaafaae34944e8a339c13fd7d50201,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$wsgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$wsgi$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f1cb0b63c3db48b7b67e35e1caa0b853,
#endif
        code_objects_bceb2ff794463a0892f369a91d545b03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$wsgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__3___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$wsgi$$$function__3___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3ee604a073e3da468fea9bc0c186b9bd,
#endif
        code_objects_1e3b10b08a70a581ea3fd9ae9c872749,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$wsgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__4_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$wsgi$$$function__4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8d3ce8ab14e836ff2c55fe4dd0ab2d34,
#endif
        code_objects_acde4f83ecd614b06c1c368b4c7bf243,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$wsgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__5___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$wsgi$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c233b7f9f2aa87d3b9198afa8da4d646,
#endif
        code_objects_b655718de74ba442cbd659b2aea76236,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$wsgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$wsgi$$$function__6_handle_request,
        mod_consts.const_str_plain_handle_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1e361a2274ad468663d7ae182c82b43a,
#endif
        code_objects_acbc563c52c558df2ca3a709f20f5c7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$wsgi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response,
        mod_consts.const_str_plain_start_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ed37e241254bd7d0daeae0e9dd9c1b3e,
#endif
        code_objects_243d2ce0345a1f67ea26e031682d710a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_transports$wsgi,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e8224edc4abdf1735ea2d570e74c41ef,
#endif
        code_objects_7ccac0cd05fb7ffb982312a09a37c46f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_httpx$_transports$wsgi,
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

static function_impl_code const function_table_httpx$_transports$wsgi[] = {
impl_httpx$_transports$wsgi$$$function__6_handle_request$$$function__1_start_response,
impl_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks,
impl_httpx$_transports$wsgi$$$function__2___init__,
impl_httpx$_transports$wsgi$$$function__3___iter__,
impl_httpx$_transports$wsgi$$$function__4_close,
impl_httpx$_transports$wsgi$$$function__5___init__,
impl_httpx$_transports$wsgi$$$function__6_handle_request,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_transports$wsgi);
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
        module_httpx$_transports$wsgi,
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
        function_table_httpx$_transports$wsgi,
        sizeof(function_table_httpx$_transports$wsgi) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._transports.wsgi";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_transports$wsgi(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_transports$wsgi");

    // Store the module for future use.
    module_httpx$_transports$wsgi = module;

    moduledict_httpx$_transports$wsgi = MODULE_DICT(module_httpx$_transports$wsgi);

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
        PRINT_STRING("httpx$_transports$wsgi: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_transports$wsgi: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_transports$wsgi: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._transports.wsgi" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_transports$wsgi\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_transports$wsgi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$wsgi,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_transports$wsgi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$wsgi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_transports$wsgi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_transports$wsgi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_transports$wsgi);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3;
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
UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_transports$wsgi = MAKE_MODULE_FRAME(code_objects_0973340bae7816211d2a2ba37a6471ea, module_httpx$_transports$wsgi);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_transports$wsgi$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_transports$wsgi$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_transports$wsgi;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_transports$wsgi;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Request_str_plain_Response_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
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
        (PyObject *)moduledict_httpx$_transports$wsgi,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_10);
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
        (PyObject *)moduledict_httpx$_transports$wsgi,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_11);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_transports$wsgi;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_SyncByteStream_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 9;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
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
        (PyObject *)moduledict_httpx$_transports$wsgi,
        mod_consts.const_str_plain_SyncByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_SyncByteStream);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_base;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_transports$wsgi;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BaseTransport_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 10;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpx$_transports$wsgi,
        mod_consts.const_str_plain_BaseTransport,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_BaseTransport);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseTransport, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 16;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TypeVar,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain__T_tuple, 0)
);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain__T, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST1(tstate, mod_consts.const_str_plain_WSGITransport);
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_cd990b6b6c49a12383881658374ee75b);

tmp_assign_source_16 = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__1__skip_leading_empty_chunks(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain__skip_leading_empty_chunks, tmp_assign_source_16);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_httpx$_transports$wsgi$SyncByteStream(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncByteStream);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_assign_source_17 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_18 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
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


exception_lineno = 30;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_20;
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


exception_lineno = 30;

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
PyObject *tmp_assign_source_21;
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


exception_lineno = 30;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_WSGIByteStream;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 30;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
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


exception_lineno = 30;

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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
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


exception_lineno = 30;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 30;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 30;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
}
branch_end_1:;
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9a6df7810bd3b4da63f0eb2e021b8ac7;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_WSGIByteStream;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_30;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2 = MAKE_CLASS_FRAME(tstate, code_objects_405ae336568dbc52445ded107bcb7488, module_httpx$_transports$wsgi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_82e4823ac7890abfa9edf10fb9e9926f);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__2___init__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_792443ad00eade00425fbf2e698fefb3);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__3___iter__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__4_close(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$wsgi$$$class__1_WSGIByteStream_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__close_str_plain__result_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

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


exception_lineno = 30;

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
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_WSGIByteStream;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 30;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_23 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30);
locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30);
locals_httpx$_transports$wsgi$$$class__1_WSGIByteStream_30 = NULL;
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
exception_lineno = 30;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_WSGIByteStream, tmp_assign_source_23);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_httpx$_transports$wsgi$BaseTransport(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseTransport);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto try_except_handler_5;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
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


exception_lineno = 44;

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
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_28;
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


exception_lineno = 44;

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
PyObject *tmp_assign_source_29;
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


exception_lineno = 44;

    goto try_except_handler_5;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_WSGITransport;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 44;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_29;
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


exception_lineno = 44;

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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
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


exception_lineno = 44;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 44;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_30;
}
branch_end_4:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9a6df7810bd3b4da63f0eb2e021b8ac7;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_78f3042a81a0352c50e1d10b1ee8b118;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_WSGITransport;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_44;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3 = MAKE_CLASS_FRAME(tstate, code_objects_6da9d52d7b321bfb298d8f909b458985, module_httpx$_transports$wsgi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3);
assert(Py_REFCNT(frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_5;
tmp_defaults_1 = mod_consts.const_tuple_d552d9194c3d51d67f925ce1351c3726_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_59ee000a5f417aca547097152ca3124a);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__5___init__(tstate, tmp_defaults_1, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_b2e0fd0d70ec526b8946f6514dfa5ba4);

tmp_dictset_value = MAKE_FUNCTION_httpx$_transports$wsgi$$$function__6_handle_request(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, mod_consts.const_str_plain_handle_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpx$_transports$wsgi$$$class__2_WSGITransport_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_30cbe49a6f20c140de11aa97eec19ea5_tuple;
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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


exception_lineno = 44;

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
tmp_res = PyObject_SetItem(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_WSGITransport;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_transports$wsgi->m_frame.f_lineno = 44;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_32;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_31 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44);
locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44);
locals_httpx$_transports$wsgi$$$class__2_WSGITransport_44 = NULL;
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
exception_lineno = 44;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)mod_consts.const_str_plain_WSGITransport, tmp_assign_source_31);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_transports$wsgi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_transports$wsgi->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_transports$wsgi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_transports$wsgi);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_transports$wsgi", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._transports.wsgi" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_transports$wsgi);
    return module_httpx$_transports$wsgi;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_transports$wsgi, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_transports$wsgi", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

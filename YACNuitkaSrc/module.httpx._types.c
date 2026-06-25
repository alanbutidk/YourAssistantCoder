/* Generated code for Python module 'httpx$_types'
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



/* The "module_httpx$_types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_types;
PyDictObject *moduledict_httpx$_types;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_c5873d0df3e7de3040fd947756b48e4c;
PyObject *const_str_digest_d425929db94e02bb2488755d3ae08a11;
PyObject *const_str_digest_a82d3f1f34f815ffec3b227193133ab5;
PyObject *const_str_plain___aiter__;
PyObject *const_str_digest_b519497e7fd3aa16728f1ced2de81e83;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_e6418578f04fc902a59cca36e2c8083e;
PyObject *const_str_digest_5b6ea537dde8fa60f7fc2cb412d77d79;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_41c64468a0c9e92d8eea5f7e817937e8;
PyObject *const_tuple_str_plain_CookieJar_tuple;
PyObject *const_str_plain_CookieJar;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_AsyncIterable;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_Union;
PyObject *const_tuple_type_str_type_int_type_float_type_bool_tuple;
PyObject *const_str_plain_PrimitiveData;
PyObject *const_tuple_str_plain_URL_type_str_tuple;
PyObject *const_str_plain_URLTypes;
PyObject *const_str_plain_QueryParams;
PyObject *const_str_plain_QueryParamTypes;
PyObject *const_str_plain_Headers;
PyObject *const_tuple_type_str_type_str_tuple;
PyObject *const_tuple_type_bytes_type_bytes_tuple;
PyObject *const_str_plain_HeaderTypes;
PyObject *const_str_plain_Cookies;
PyObject *const_str_plain_CookieTypes;
PyObject *const_str_plain_Timeout;
PyObject *const_str_plain_TimeoutTypes;
PyObject *const_tuple_str_plain_URL_type_str_str_plain_Proxy_tuple;
PyObject *const_str_plain_ProxyTypes;
PyObject *const_tuple_type_str_type_str_type_str_tuple;
PyObject *const_str_plain_CertTypes;
PyObject *const_tuple_type_str_type_bytes_tuple;
PyObject *const_tuple_list_str_plain_Request_list_str_plain_Request_tuple;
PyObject *const_str_plain_Auth;
PyObject *const_str_plain_AuthTypes;
PyObject *const_str_plain_RequestContent;
PyObject *const_str_plain_ResponseContent;
PyObject *const_str_plain_ResponseExtensions;
PyObject *const_str_plain_RequestData;
PyObject *const_str_plain_FileContent;
PyObject *const_str_plain_FileTypes;
PyObject *const_str_plain_RequestFiles;
PyObject *const_str_plain_RequestExtensions;
PyObject *const_str_plain_AsyncByteStream;
PyObject *const_str_plain_SyncByteStream;
PyObject *const_str_digest_76d3bdff8eaf7b3b68dc4f42852fdb1e;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_92;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_return;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_bfa7166f69e16f17f2e049a90b1ec4ad;
PyObject *const_str_digest_888304fec934e9e78e697fd2086527a7;
PyObject *const_str_plain___static_attributes__;
PyObject *const_int_pos_106;
PyObject *const_str_digest_e8542457536314c6f0ac8538601a7a7d;
PyObject *const_str_digest_c448a15a4731f715a8bb37ec4a5d9792;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[74];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5873d0df3e7de3040fd947756b48e4c);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_d425929db94e02bb2488755d3ae08a11);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_a82d3f1f34f815ffec3b227193133ab5);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_b519497e7fd3aa16728f1ced2de81e83);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6418578f04fc902a59cca36e2c8083e);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b6ea537dde8fa60f7fc2cb412d77d79);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CookieJar_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_int_type_float_type_bool_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrimitiveData);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_type_str_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_URLTypes);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_QueryParams);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_QueryParamTypes);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytes_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTypes);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cookies);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieTypes);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutTypes);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_type_str_str_plain_Proxy_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyTypes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_type_str_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertTypes);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_list_str_plain_Request_list_str_plain_Request_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_Auth);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthTypes);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestContent);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContent);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseExtensions);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestData);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileContent);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileTypes);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestFiles);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestExtensions);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_76d3bdff8eaf7b3b68dc4f42852fdb1e);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfa7166f69e16f17f2e049a90b1ec4ad);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_888304fec934e9e78e697fd2086527a7);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_106);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8542457536314c6f0ac8538601a7a7d);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_c448a15a4731f715a8bb37ec4a5d9792);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_httpx$_types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5873d0df3e7de3040fd947756b48e4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5873d0df3e7de3040fd947756b48e4c);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_d425929db94e02bb2488755d3ae08a11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d425929db94e02bb2488755d3ae08a11);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_a82d3f1f34f815ffec3b227193133ab5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a82d3f1f34f815ffec3b227193133ab5);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___aiter__);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_b519497e7fd3aa16728f1ced2de81e83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b519497e7fd3aa16728f1ced2de81e83);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6418578f04fc902a59cca36e2c8083e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6418578f04fc902a59cca36e2c8083e);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b6ea537dde8fa60f7fc2cb412d77d79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b6ea537dde8fa60f7fc2cb412d77d79);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CookieJar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CookieJar_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CookieJar);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IO);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterable);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_int_type_float_type_bool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_int_type_float_type_bool_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrimitiveData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PrimitiveData);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_URL_type_str_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_URLTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URLTypes);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_QueryParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QueryParams);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_QueryParamTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QueryParamTypes);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_str_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytes_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HeaderTypes);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cookies));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Cookies);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CookieTypes);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutTypes);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_type_str_str_plain_Proxy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_URL_type_str_str_plain_Proxy_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyTypes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_str_type_str_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CertTypes);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_bytes_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_list_str_plain_Request_list_str_plain_Request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_str_plain_Request_list_str_plain_Request_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_Auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Auth);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthTypes);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestContent);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseContent);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseExtensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseExtensions);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestData);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileContent);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileTypes);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestFiles);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestExtensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestExtensions);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncByteStream);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncByteStream);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_76d3bdff8eaf7b3b68dc4f42852fdb1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76d3bdff8eaf7b3b68dc4f42852fdb1e);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_92));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_92);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfa7166f69e16f17f2e049a90b1ec4ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfa7166f69e16f17f2e049a90b1ec4ad);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_888304fec934e9e78e697fd2086527a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_888304fec934e9e78e697fd2086527a7);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_106));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_106);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8542457536314c6f0ac8538601a7a7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8542457536314c6f0ac8538601a7a7d);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_c448a15a4731f715a8bb37ec4a5d9792));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c448a15a4731f715a8bb37ec4a5d9792);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
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
static PyObject *module_var_accessor_httpx$_types$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$AsyncIterable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$AsyncIterator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$CookieJar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieJar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieJar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieJar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieJar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Dict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$FileContent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileContent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileContent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileContent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileContent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContent);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$FileTypes(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileTypes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileTypes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileTypes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileTypes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileTypes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileTypes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileTypes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileTypes);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$IO(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IO);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IO);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IO, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IO);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IO, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IO);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IO);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IO);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Iterable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Iterator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$List(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Mapping(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$PrimitiveData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_PrimitiveData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PrimitiveData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PrimitiveData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PrimitiveData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PrimitiveData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_PrimitiveData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_PrimitiveData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PrimitiveData);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Sequence(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Tuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_types$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_987ed8af652a9cd75ba36b5e0d44ec72;
static PyCodeObject *code_objects_9215751551574527cb15f8520493597d;
static PyCodeObject *code_objects_6a3017c9d9d4ff9bbc4183a8d36047f9;
static PyCodeObject *code_objects_e296b5b50534050ca3ba2d861285cf4e;
static PyCodeObject *code_objects_f1f0ff36c7c7179c50ec0169bc9ce2a3;
static PyCodeObject *code_objects_5aefff0f5af622806cb02b4141c9424c;
static PyCodeObject *code_objects_eee46a5340de25c53191b15107f687f9;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e8542457536314c6f0ac8538601a7a7d); CHECK_OBJECT(module_filename_obj);
code_objects_987ed8af652a9cd75ba36b5e0d44ec72 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_c448a15a4731f715a8bb37ec4a5d9792, mod_consts.const_str_digest_c448a15a4731f715a8bb37ec4a5d9792, NULL, NULL, 0, 0, 0);
code_objects_9215751551574527cb15f8520493597d = MAKE_CODE_OBJECT(module_filename_obj, 106, 0, mod_consts.const_str_plain_AsyncByteStream, mod_consts.const_str_plain_AsyncByteStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6a3017c9d9d4ff9bbc4183a8d36047f9 = MAKE_CODE_OBJECT(module_filename_obj, 92, 0, mod_consts.const_str_plain_SyncByteStream, mod_consts.const_str_plain_SyncByteStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e296b5b50534050ca3ba2d861285cf4e = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_b519497e7fd3aa16728f1ced2de81e83, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f1f0ff36c7c7179c50ec0169bc9ce2a3 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_d425929db94e02bb2488755d3ae08a11, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5aefff0f5af622806cb02b4141c9424c = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_e6418578f04fc902a59cca36e2c8083e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eee46a5340de25c53191b15107f687f9 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_888304fec934e9e78e697fd2086527a7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_types$$$function__1___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_httpx$_types$$$function__4_aclose$$$coroutine__1_aclose(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__1___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__2_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__3___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__4_aclose(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_types$$$function__1___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(par_self);
tmp_return_value = MAKE_GENERATOR_httpx$_types$$$function__1___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *httpx$_types$$$function__1___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f1f0ff36c7c7179c50ec0169bc9ce2a3, module_httpx$_types, sizeof(void *));
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_c5873d0df3e7de3040fd947756b48e4c;
generator->m_frame->m_frame.f_lineno = 94;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 94;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "c";
goto frame_exception_exit_1;
}

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
    generator->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_types$$$function__1___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_types$$$function__1___iter__$$$genobj__1___iter___context,
        module_httpx$_types,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_d425929db94e02bb2488755d3ae08a11,
#endif
        code_objects_f1f0ff36c7c7179c50ec0169bc9ce2a3,
        closure,
        1,
#if 1
        sizeof(struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_types$$$function__3___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_ASYNCGEN_httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter__(tstate);

goto try_return_handler_1;
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
struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e296b5b50534050ca3ba2d861285cf4e, module_httpx$_types, sizeof(void *));
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a82d3f1f34f815ffec3b227193133ab5;
asyncgen->m_frame->m_frame.f_lineno = 108;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
asyncgen_heap->exception_lineno = 108;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "N";
goto frame_exception_exit_1;
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
    NULL
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

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter__(PyThreadState *tstate) {
    return Nuitka_Asyncgen_New(
        httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_types,
        mod_consts.const_str_plain___aiter__,
        mod_consts.const_str_digest_b519497e7fd3aa16728f1ced2de81e83,
        code_objects_e296b5b50534050ca3ba2d861285cf4e,
        NULL,
        0,
#if 1
        sizeof(struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_types$$$function__4_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_httpx$_types$$$function__4_aclose$$$coroutine__1_aclose(tstate);

goto try_return_handler_1;
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
struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_types$$$function__4_aclose$$$coroutine__1_aclose(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_context,
        module_httpx$_types,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_e6418578f04fc902a59cca36e2c8083e,
        code_objects_5aefff0f5af622806cb02b4141c9424c,
        NULL,
        0,
#if 1
        sizeof(struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__1___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_types$$$function__1___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d425929db94e02bb2488755d3ae08a11,
#endif
        code_objects_f1f0ff36c7c7179c50ec0169bc9ce2a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__2_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_888304fec934e9e78e697fd2086527a7,
#endif
        code_objects_eee46a5340de25c53191b15107f687f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
        mod_consts.const_str_digest_bfa7166f69e16f17f2e049a90b1ec4ad,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__3___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_types$$$function__3___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b519497e7fd3aa16728f1ced2de81e83,
#endif
        code_objects_e296b5b50534050ca3ba2d861285cf4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__4_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_types$$$function__4_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e6418578f04fc902a59cca36e2c8083e,
#endif
        code_objects_5aefff0f5af622806cb02b4141c9424c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
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

static function_impl_code const function_table_httpx$_types[] = {
impl_httpx$_types$$$function__1___iter__,
impl_httpx$_types$$$function__3___aiter__,
impl_httpx$_types$$$function__4_aclose,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_types);
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
        module_httpx$_types,
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
        function_table_httpx$_types,
        sizeof(function_table_httpx$_types) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._types";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_types");

    // Store the module for future use.
    module_httpx$_types = module;

    moduledict_httpx$_types = MODULE_DICT(module_httpx$_types);

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
        PRINT_STRING("httpx$_types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_types: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._types" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_types\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_types);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_types;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_httpx$_types$$$class__1_SyncByteStream_92 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_types$$$class__1_SyncByteStream_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_httpx$_types$$$class__2_AsyncByteStream_106 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_types$$$class__2_AsyncByteStream_3;
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
tmp_assign_source_1 = mod_consts.const_str_digest_5b6ea537dde8fa60f7fc2cb412d77d79;
UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_types = MAKE_MODULE_FRAME(code_objects_987ed8af652a9cd75ba36b5e0d44ec72, module_httpx$_types);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_types);
assert(Py_REFCNT(frame_frame_httpx$_types) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_types$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_types$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_types;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_CookieJar_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_types->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_CookieJar,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_CookieJar);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_AsyncIterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_AsyncIterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_14 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_15 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_httpx$_types,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_expression_value_1 = module_var_accessor_httpx$_types$Optional(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_expression_value_2 = module_var_accessor_httpx$_types$Union(tstate);
assert(!(tmp_expression_value_2 == NULL));
tmp_subscript_value_2 = mod_consts.const_tuple_type_str_type_int_type_float_type_bool_tuple;
tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_PrimitiveData, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
tmp_expression_value_3 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_tuple_str_plain_URL_type_str_tuple;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_URLTypes, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_1;
tmp_expression_value_4 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_QueryParams;
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_11;
PyObject *tmp_tuple_element_6;
PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_3;
PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_2);
tmp_expression_value_6 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = module_var_accessor_httpx$_types$PrimitiveData(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrimitiveData);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_2;
}
tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_7;
PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_3);
tmp_expression_value_7 = module_var_accessor_httpx$_types$Sequence(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_3;
}
tmp_subscript_value_7 = module_var_accessor_httpx$_types$PrimitiveData(tstate);
if (unlikely(tmp_subscript_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrimitiveData);
}

if (tmp_subscript_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_6);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_5);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_1);
tmp_expression_value_8 = module_var_accessor_httpx$_types$List(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto tuple_build_exception_1;
}
tmp_expression_value_9 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto tuple_build_exception_1;
}
tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_httpx$_types$PrimitiveData(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrimitiveData);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_9);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_subscript_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_subscript_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 2, tmp_tuple_element_1);
tmp_expression_value_10 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto tuple_build_exception_1;
}
tmp_expression_value_11 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto tuple_build_exception_1;
}
tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_httpx$_types$PrimitiveData(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrimitiveData);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_subscript_value_11);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto tuple_build_exception_1;
}
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_Ellipsis;
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_5);
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_4, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyBytes_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_4, 5, tmp_tuple_element_1);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_QueryParamTypes, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_12;
PyObject *tmp_tuple_element_7;
tmp_expression_value_12 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_Headers;
tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_18;
PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_7);
tmp_expression_value_13 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_6;
}
tmp_subscript_value_13 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_7);
tmp_expression_value_14 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_6;
}
tmp_subscript_value_14 = mod_consts.const_tuple_type_bytes_type_bytes_tuple;
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_12, 2, tmp_tuple_element_7);
tmp_expression_value_15 = module_var_accessor_httpx$_types$Sequence(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto tuple_build_exception_6;
}
tmp_expression_value_16 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto tuple_build_exception_6;
}
tmp_subscript_value_16 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_16);
if (tmp_subscript_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto tuple_build_exception_6;
}
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_15);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_12, 3, tmp_tuple_element_7);
tmp_expression_value_17 = module_var_accessor_httpx$_types$Sequence(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto tuple_build_exception_6;
}
tmp_expression_value_18 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto tuple_build_exception_6;
}
tmp_subscript_value_18 = mod_consts.const_tuple_type_bytes_type_bytes_tuple;
tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
if (tmp_subscript_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_6;
}
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_17);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_12, 4, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTypes, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_19;
PyObject *tmp_tuple_element_8;
tmp_expression_value_19 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_Cookies;
tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_22;
PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_httpx$_types$CookieJar(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CookieJar);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_8);
tmp_expression_value_20 = module_var_accessor_httpx$_types$Dict(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dict);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_7;
}
tmp_subscript_value_20 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_20);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_subscript_value_19, 2, tmp_tuple_element_8);
tmp_expression_value_21 = module_var_accessor_httpx$_types$List(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_7;
}
tmp_expression_value_22 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_7;
}
tmp_subscript_value_22 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
if (tmp_subscript_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto tuple_build_exception_7;
}
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_21);
CHECK_OBJECT(tmp_subscript_value_21);
Py_DECREF(tmp_subscript_value_21);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_subscript_value_19, 3, tmp_tuple_element_8);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_subscript_value_19);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_19);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieTypes, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_23;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_24;
tmp_expression_value_23 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_expression_value_24 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_subscript_value_24 = (PyObject *)&PyFloat_Type;
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_24);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_25;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_26;
PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_9);
tmp_expression_value_25 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto tuple_build_exception_8;
}
tmp_expression_value_26 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto tuple_build_exception_8;
}
tmp_subscript_value_26 = (PyObject *)&PyFloat_Type;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_26);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto tuple_build_exception_8;
}
tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_29;
PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_10);
tmp_expression_value_27 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto tuple_build_exception_9;
}
tmp_subscript_value_27 = (PyObject *)&PyFloat_Type;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_27);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_10);
tmp_expression_value_28 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto tuple_build_exception_9;
}
tmp_subscript_value_28 = (PyObject *)&PyFloat_Type;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_28);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_subscript_value_25, 2, tmp_tuple_element_10);
tmp_expression_value_29 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto tuple_build_exception_9;
}
tmp_subscript_value_29 = (PyObject *)&PyFloat_Type;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_29);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_subscript_value_25, 3, tmp_tuple_element_10);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_subscript_value_25);
goto tuple_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_25);
CHECK_OBJECT(tmp_subscript_value_25);
Py_DECREF(tmp_subscript_value_25);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_subscript_value_23, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_str_plain_Timeout;
PyTuple_SET_ITEM0(tmp_subscript_value_23, 2, tmp_tuple_element_9);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_subscript_value_23);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_23);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutTypes, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_30;
tmp_expression_value_30 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_subscript_value_30 = mod_consts.const_tuple_str_plain_URL_type_str_str_plain_Proxy_tuple;
tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_30);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyTypes, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_31;
PyObject *tmp_tuple_element_11;
tmp_expression_value_31 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_33;
PyTuple_SET_ITEM0(tmp_subscript_value_31, 0, tmp_tuple_element_11);
tmp_expression_value_32 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto tuple_build_exception_10;
}
tmp_subscript_value_32 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_32);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_subscript_value_31, 1, tmp_tuple_element_11);
tmp_expression_value_33 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto tuple_build_exception_10;
}
tmp_subscript_value_33 = mod_consts.const_tuple_type_str_type_str_type_str_tuple;
tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_33);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_subscript_value_31, 2, tmp_tuple_element_11);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_31);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_31);
CHECK_OBJECT(tmp_subscript_value_31);
Py_DECREF(tmp_subscript_value_31);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_CertTypes, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_34;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_35;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_36;
tmp_expression_value_34 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_expression_value_35 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_expression_value_36 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_subscript_value_36 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_36);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_37;
PyTuple_SET_ITEM(tmp_subscript_value_35, 0, tmp_tuple_element_13);
tmp_expression_value_37 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto tuple_build_exception_11;
}
tmp_subscript_value_37 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_37);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_subscript_value_35, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_subscript_value_35);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_35);
CHECK_OBJECT(tmp_subscript_value_35);
Py_DECREF(tmp_subscript_value_35);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_38;
PyTuple_SET_ITEM(tmp_subscript_value_34, 0, tmp_tuple_element_12);
tmp_expression_value_38 = module_var_accessor_httpx$_types$Callable(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto tuple_build_exception_12;
}
tmp_subscript_value_38 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_str_plain_Request_list_str_plain_Request_tuple, "li");
tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_38);
CHECK_OBJECT(tmp_subscript_value_38);
Py_DECREF(tmp_subscript_value_38);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = mod_consts.const_str_plain_Auth;
PyTuple_SET_ITEM0(tmp_subscript_value_34, 2, tmp_tuple_element_12);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_subscript_value_34);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_34);
CHECK_OBJECT(tmp_subscript_value_34);
Py_DECREF(tmp_subscript_value_34);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthTypes, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_39;
PyObject *tmp_tuple_element_14;
tmp_expression_value_39 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto frame_exception_exit_1;
}
tmp_tuple_element_14 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_41;
PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = (PyObject *)&PyBytes_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_39, 1, tmp_tuple_element_14);
tmp_expression_value_40 = module_var_accessor_httpx$_types$Iterable(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_13;
}
tmp_subscript_value_40 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_40);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_subscript_value_39, 2, tmp_tuple_element_14);
tmp_expression_value_41 = module_var_accessor_httpx$_types$AsyncIterable(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIterable);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_13;
}
tmp_subscript_value_41 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_41);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_subscript_value_39, 3, tmp_tuple_element_14);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_subscript_value_39);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_39);
CHECK_OBJECT(tmp_subscript_value_39);
Py_DECREF(tmp_subscript_value_39);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestContent, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_42;
PyObject *tmp_tuple_element_15;
tmp_expression_value_42 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_tuple_element_15 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_44;
PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = (PyObject *)&PyBytes_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_42, 1, tmp_tuple_element_15);
tmp_expression_value_43 = module_var_accessor_httpx$_types$Iterable(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_14;
}
tmp_subscript_value_43 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_43);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_subscript_value_42, 2, tmp_tuple_element_15);
tmp_expression_value_44 = module_var_accessor_httpx$_types$AsyncIterable(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIterable);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_14;
}
tmp_subscript_value_44 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_44);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_subscript_value_42, 3, tmp_tuple_element_15);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_subscript_value_42);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_42);
CHECK_OBJECT(tmp_subscript_value_42);
Py_DECREF(tmp_subscript_value_42);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContent, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_45;
PyObject *tmp_tuple_element_16;
tmp_expression_value_45 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_tuple_element_16 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_45 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_45, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_httpx$_types$Any(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_subscript_value_45, 1, tmp_tuple_element_16);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_subscript_value_45);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_45);
CHECK_OBJECT(tmp_subscript_value_45);
Py_DECREF(tmp_subscript_value_45);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseExtensions, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_46;
PyObject *tmp_tuple_element_17;
tmp_expression_value_46 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_tuple_element_17 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_46, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = module_var_accessor_httpx$_types$Any(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_subscript_value_46, 1, tmp_tuple_element_17);
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_subscript_value_46);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_46);
CHECK_OBJECT(tmp_subscript_value_46);
Py_DECREF(tmp_subscript_value_46);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestData, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_47;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_48;
PyObject *tmp_subscript_value_48;
tmp_expression_value_47 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto frame_exception_exit_1;
}
tmp_expression_value_48 = module_var_accessor_httpx$_types$IO(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IO);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto frame_exception_exit_1;
}
tmp_subscript_value_48 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_48);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto frame_exception_exit_1;
}
tmp_subscript_value_47 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_subscript_value_47, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = (PyObject *)&PyBytes_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_47, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = (PyObject *)&PyUnicode_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_47, 2, tmp_tuple_element_18);
tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_47);
CHECK_OBJECT(tmp_subscript_value_47);
Py_DECREF(tmp_subscript_value_47);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContent, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_49;
PyObject *tmp_tuple_element_19;
tmp_expression_value_49 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_tuple_element_19 = module_var_accessor_httpx$_types$FileContent(tstate);
assert(!(tmp_tuple_element_19 == NULL));
tmp_subscript_value_49 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_50;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_52;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_53;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_55;
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_56;
PyTuple_SET_ITEM0(tmp_subscript_value_49, 0, tmp_tuple_element_19);
tmp_expression_value_50 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto tuple_build_exception_17;
}
tmp_expression_value_51 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto tuple_build_exception_17;
}
tmp_subscript_value_51 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_51);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto tuple_build_exception_17;
}
tmp_subscript_value_50 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_50, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_httpx$_types$FileContent(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileContent);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM0(tmp_subscript_value_50, 1, tmp_tuple_element_20);
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_subscript_value_50);
goto tuple_build_exception_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_50);
CHECK_OBJECT(tmp_subscript_value_50);
Py_DECREF(tmp_subscript_value_50);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_subscript_value_49, 1, tmp_tuple_element_19);
tmp_expression_value_52 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto tuple_build_exception_17;
}
tmp_expression_value_53 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto tuple_build_exception_17;
}
tmp_subscript_value_53 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_53);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_17;
}
tmp_subscript_value_52 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_54;
PyObject *tmp_subscript_value_54;
PyTuple_SET_ITEM(tmp_subscript_value_52, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = module_var_accessor_httpx$_types$FileContent(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileContent);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM0(tmp_subscript_value_52, 1, tmp_tuple_element_21);
tmp_expression_value_54 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto tuple_build_exception_19;
}
tmp_subscript_value_54 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_54);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_subscript_value_52, 2, tmp_tuple_element_21);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_subscript_value_52);
goto tuple_build_exception_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_52);
CHECK_OBJECT(tmp_subscript_value_52);
Py_DECREF(tmp_subscript_value_52);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_subscript_value_49, 2, tmp_tuple_element_19);
tmp_expression_value_55 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_17;
}
tmp_expression_value_56 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_17;
}
tmp_subscript_value_56 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_56);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto tuple_build_exception_17;
}
tmp_subscript_value_55 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_58;
PyTuple_SET_ITEM(tmp_subscript_value_55, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_httpx$_types$FileContent(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileContent);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM0(tmp_subscript_value_55, 1, tmp_tuple_element_22);
tmp_expression_value_57 = module_var_accessor_httpx$_types$Optional(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_20;
}
tmp_subscript_value_57 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_57);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_subscript_value_55, 2, tmp_tuple_element_22);
tmp_expression_value_58 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_20;
}
tmp_subscript_value_58 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_58);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_subscript_value_55, 3, tmp_tuple_element_22);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_subscript_value_55);
goto tuple_build_exception_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_55);
CHECK_OBJECT(tmp_subscript_value_55);
Py_DECREF(tmp_subscript_value_55);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_subscript_value_49, 3, tmp_tuple_element_19);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_subscript_value_49);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_49);
CHECK_OBJECT(tmp_subscript_value_49);
Py_DECREF(tmp_subscript_value_49);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileTypes, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_59;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_60;
PyObject *tmp_tuple_element_24;
tmp_expression_value_59 = module_var_accessor_httpx$_types$Union(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_expression_value_60 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_tuple_element_24 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_60 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_60, 0, tmp_tuple_element_24);
tmp_tuple_element_24 = module_var_accessor_httpx$_types$FileTypes(tstate);
assert(!(tmp_tuple_element_24 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_60, 1, tmp_tuple_element_24);
tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_60);
CHECK_OBJECT(tmp_subscript_value_60);
Py_DECREF(tmp_subscript_value_60);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_subscript_value_59 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_61;
PyObject *tmp_expression_value_62;
PyObject *tmp_subscript_value_62;
PyObject *tmp_tuple_element_25;
PyTuple_SET_ITEM(tmp_subscript_value_59, 0, tmp_tuple_element_23);
tmp_expression_value_61 = module_var_accessor_httpx$_types$Sequence(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto tuple_build_exception_21;
}
tmp_expression_value_62 = module_var_accessor_httpx$_types$Tuple(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto tuple_build_exception_21;
}
tmp_tuple_element_25 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_62, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = module_var_accessor_httpx$_types$FileTypes(tstate);
if (unlikely(tmp_tuple_element_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileTypes);
}

if (tmp_tuple_element_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM0(tmp_subscript_value_62, 1, tmp_tuple_element_25);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_subscript_value_62);
goto tuple_build_exception_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_subscript_value_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_62);
CHECK_OBJECT(tmp_subscript_value_62);
Py_DECREF(tmp_subscript_value_62);
if (tmp_subscript_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_21;
}
tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_61);
CHECK_OBJECT(tmp_subscript_value_61);
Py_DECREF(tmp_subscript_value_61);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_subscript_value_59, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_subscript_value_59);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_59);
CHECK_OBJECT(tmp_subscript_value_59);
Py_DECREF(tmp_subscript_value_59);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestFiles, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_63;
PyObject *tmp_tuple_element_26;
tmp_expression_value_63 = module_var_accessor_httpx$_types$Mapping(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_tuple_element_26 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_63 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_63, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = module_var_accessor_httpx$_types$Any(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM0(tmp_subscript_value_63, 1, tmp_tuple_element_26);
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_subscript_value_63);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_63);
CHECK_OBJECT(tmp_subscript_value_63);
Py_DECREF(tmp_subscript_value_63);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestExtensions, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_LIST2(tstate, mod_consts.const_str_plain_AsyncByteStream,mod_consts.const_str_plain_SyncByteStream);
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_38);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_40;
}
// Tried code:
{
PyObject *tmp_assign_source_41;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_types$$$class__1_SyncByteStream_92 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_76d3bdff8eaf7b3b68dc4f42852fdb1e;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__1_SyncByteStream_92, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_SyncByteStream;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__1_SyncByteStream_92, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_92;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__1_SyncByteStream_92, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_httpx$_types$$$class__1_SyncByteStream_2 = MAKE_CLASS_FRAME(tstate, code_objects_6a3017c9d9d4ff9bbc4183a8d36047f9, module_httpx$_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_types$$$class__1_SyncByteStream_2);
assert(Py_REFCNT(frame_frame_httpx$_types$$$class__1_SyncByteStream_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_64;
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_64 = module_var_accessor_httpx$_types$Iterator(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterator);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_64 = (PyObject *)&PyBytes_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_64);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__1___iter__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__1_SyncByteStream_92, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_types$$$class__1_SyncByteStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_types$$$class__1_SyncByteStream_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_types$$$class__1_SyncByteStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_types$$$class__1_SyncByteStream_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_httpx$_types$$$class__1_SyncByteStream_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__2_close(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__1_SyncByteStream_92, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__1_SyncByteStream_92, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_27 = mod_consts.const_str_plain_SyncByteStream;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_httpx$_types$$$class__1_SyncByteStream_92;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_types->m_frame.f_lineno = 92;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_42;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_41 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_httpx$_types$$$class__1_SyncByteStream_92);
locals_httpx$_types$$$class__1_SyncByteStream_92 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_types$$$class__1_SyncByteStream_92);
locals_httpx$_types$$$class__1_SyncByteStream_92 = NULL;
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
exception_lineno = 92;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncByteStream, tmp_assign_source_41);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_httpx$_types$$$class__2_AsyncByteStream_106 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_76d3bdff8eaf7b3b68dc4f42852fdb1e;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__2_AsyncByteStream_106, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncByteStream;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__2_AsyncByteStream_106, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_106;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__2_AsyncByteStream_106, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_httpx$_types$$$class__2_AsyncByteStream_3 = MAKE_CLASS_FRAME(tstate, code_objects_9215751551574527cb15f8520493597d, module_httpx$_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_types$$$class__2_AsyncByteStream_3);
assert(Py_REFCNT(frame_frame_httpx$_types$$$class__2_AsyncByteStream_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_65;
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_65 = module_var_accessor_httpx$_types$AsyncIterator(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_subscript_value_65 = (PyObject *)&PyBytes_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_65);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__3___aiter__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__2_AsyncByteStream_106, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_types$$$class__2_AsyncByteStream_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_types$$$class__2_AsyncByteStream_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_types$$$class__2_AsyncByteStream_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_types$$$class__2_AsyncByteStream_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_httpx$_types$$$class__2_AsyncByteStream_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__4_aclose(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__2_AsyncByteStream_106, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_httpx$_types$$$class__2_AsyncByteStream_106, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_2;
tmp_called_value_2 = (PyObject *)&PyType_Type;
tmp_tuple_element_28 = mod_consts.const_str_plain_AsyncByteStream;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_28);
tmp_tuple_element_28 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_28);
tmp_tuple_element_28 = locals_httpx$_types$$$class__2_AsyncByteStream_106;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_httpx$_types->m_frame.f_lineno = 106;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_46;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_45 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_httpx$_types$$$class__2_AsyncByteStream_106);
locals_httpx$_types$$$class__2_AsyncByteStream_106 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_types$$$class__2_AsyncByteStream_106);
locals_httpx$_types$$$class__2_AsyncByteStream_106 = NULL;
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
exception_lineno = 106;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncByteStream, tmp_assign_source_45);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_types", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._types" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_types);
    return module_httpx$_types;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_types", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

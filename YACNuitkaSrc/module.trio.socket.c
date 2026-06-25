/* Generated code for Python module 'trio$socket'
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



/* The "module_trio$socket" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$socket;
PyDictObject *moduledict_trio$socket;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_socket;
PyObject *const_str_plain__stdlib_socket;
PyObject *const_str_plain_sys;
PyObject *const_str_plain__t;
PyObject *const_tuple_str_plain__socket_tuple;
PyObject *const_str_plain__socket;
PyObject *const_str_plain__bad_symbols;
PyObject *const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
PyObject *const_str_plain_add;
PyObject *const_tuple_str_plain_SO_REUSEADDR_tuple;
PyObject *const_str_plain_update;
PyObject *const_str_plain_isupper;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_suppress_tuple;
PyObject *const_str_plain_suppress;
PyObject *const_str_plain__suppress;
PyObject *const_tuple_4d70f78e5aaf0efb292f92f3d8060dcd_tuple;
PyObject *const_str_plain_SocketType;
PyObject *const_str_plain_from_stdlib_socket;
PyObject *const_str_plain_fromfd;
PyObject *const_str_plain_getaddrinfo;
PyObject *const_str_plain_getnameinfo;
PyObject *const_str_plain_getprotobyname;
PyObject *const_str_plain_set_custom_hostname_resolver;
PyObject *const_str_plain_set_custom_socket_factory;
PyObject *const_str_plain_socketpair;
PyObject *const_tuple_type_ImportError_tuple;
PyObject *const_tuple_str_plain_fromshare_tuple;
PyObject *const_str_plain_fromshare;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_5ff7e399a9401190f71ded1473331efd_tuple;
PyObject *const_str_plain_gaierror;
PyObject *const_str_plain_gethostname;
PyObject *const_str_plain_herror;
PyObject *const_str_plain_htonl;
PyObject *const_str_plain_htons;
PyObject *const_str_plain_inet_aton;
PyObject *const_str_plain_inet_ntoa;
PyObject *const_str_plain_inet_ntop;
PyObject *const_str_plain_inet_pton;
PyObject *const_str_plain_ntohs;
PyObject *const_str_plain_implementation;
PyObject *const_str_plain_cpython;
PyObject *const_tuple_str_plain_if_indextoname_str_plain_if_nametoindex_tuple;
PyObject *const_str_plain_if_indextoname;
PyObject *const_str_plain_if_nametoindex;
PyObject *const_tuple_str_plain_if_nameindex_tuple;
PyObject *const_str_plain_if_nameindex;
PyObject *const_tuple_str_plain_sethostname_tuple;
PyObject *const_str_plain_sethostname;
PyObject *const_str_plain_IP_BIND_ADDRESS_NO_PORT;
PyObject *const_str_digest_53dbc15c4c4ede36e99663afbbc1266d;
PyObject *const_str_digest_469a518b305246516b524098d81995cf;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio.socket"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__stdlib_socket);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__t);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__socket_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__socket);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__bad_symbols);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SO_REUSEADDR_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_isupper);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suppress_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__suppress);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_4d70f78e5aaf0efb292f92f3d8060dcd_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketType);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_stdlib_socket);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromfd);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_getaddrinfo);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_getnameinfo);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_getprotobyname);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_custom_hostname_resolver);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_custom_socket_factory);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_socketpair);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fromshare_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromshare);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_5ff7e399a9401190f71ded1473331efd_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_gaierror);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_gethostname);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_herror);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_htonl);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_htons);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_inet_aton);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_inet_ntoa);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_inet_ntop);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_inet_pton);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ntohs);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_implementation);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_cpython);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_if_indextoname_str_plain_if_nametoindex_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_if_indextoname);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_if_nametoindex);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_if_nameindex_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_if_nameindex);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sethostname_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_sethostname);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_53dbc15c4c4ede36e99663afbbc1266d);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_469a518b305246516b524098d81995cf);
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
void checkModuleConstants_trio$socket(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socket);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__stdlib_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stdlib_socket);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__t);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__socket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__socket_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__socket);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__bad_symbols));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bad_symbols);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SO_REUSEADDR_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SO_REUSEADDR_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_isupper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isupper);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suppress_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_suppress_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__suppress);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_4d70f78e5aaf0efb292f92f3d8060dcd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d70f78e5aaf0efb292f92f3d8060dcd_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketType);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_stdlib_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_stdlib_socket);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromfd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fromfd);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_getaddrinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getaddrinfo);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_getnameinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getnameinfo);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_getprotobyname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getprotobyname);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_custom_hostname_resolver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_custom_hostname_resolver);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_custom_socket_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_custom_socket_factory);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_socketpair));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socketpair);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ImportError_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fromshare_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fromshare_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromshare));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fromshare);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_5ff7e399a9401190f71ded1473331efd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ff7e399a9401190f71ded1473331efd_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_gaierror));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gaierror);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_gethostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gethostname);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_herror));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_herror);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_htonl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_htonl);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_htons));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_htons);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_inet_aton));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inet_aton);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_inet_ntoa));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inet_ntoa);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_inet_ntop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inet_ntop);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_inet_pton));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inet_pton);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ntohs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ntohs);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_implementation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_implementation);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_cpython));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cpython);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_if_indextoname_str_plain_if_nametoindex_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_if_indextoname_str_plain_if_nametoindex_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_if_indextoname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_if_indextoname);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_if_nametoindex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_if_nametoindex);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_if_nameindex_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_if_nameindex_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_if_nameindex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_if_nameindex);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sethostname_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sethostname_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_sethostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sethostname);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_53dbc15c4c4ede36e99663afbbc1266d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53dbc15c4c4ede36e99663afbbc1266d);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_469a518b305246516b524098d81995cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_469a518b305246516b524098d81995cf);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_trio$socket$IP_BIND_ADDRESS_NO_PORT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
    }

    return result;
}

static PyObject *module_var_accessor_trio$socket$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$socket$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$socket$_bad_symbols(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__bad_symbols);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__bad_symbols);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__bad_symbols, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__bad_symbols);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__bad_symbols, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__bad_symbols);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__bad_symbols);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__bad_symbols);
    }

    return result;
}

static PyObject *module_var_accessor_trio$socket$_stdlib_socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__stdlib_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__stdlib_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__stdlib_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__stdlib_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__stdlib_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__stdlib_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__stdlib_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__stdlib_socket);
    }

    return result;
}

static PyObject *module_var_accessor_trio$socket$_suppress(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__suppress);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__suppress);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__suppress, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__suppress);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__suppress, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__suppress);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__suppress);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__suppress);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_996cd411fb02cf7cbc22971cb656ffae;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_53dbc15c4c4ede36e99663afbbc1266d); CHECK_OBJECT(module_filename_obj);
code_objects_996cd411fb02cf7cbc22971cb656ffae = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_469a518b305246516b524098d81995cf, mod_consts.const_str_digest_469a518b305246516b524098d81995cf, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_trio$socket[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$socket);
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
        module_trio$socket,
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
        function_table_trio$socket,
        sizeof(function_table_trio$socket) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio.socket";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$socket(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$socket");

    // Store the module for future use.
    module_trio$socket = module;

    moduledict_trio$socket = MODULE_DICT(module_trio$socket);

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
        PRINT_STRING("trio$socket: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$socket: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$socket: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio.socket" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$socket\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$socket,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$socket,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$socket,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$socket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$socket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$socket);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$socket);
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

        UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_name = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
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
struct Nuitka_FrameObject *frame_frame_trio$socket;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$socket = MAKE_MODULE_FRAME(code_objects_996cd411fb02cf7cbc22971cb656ffae, module_trio$socket);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$socket);
assert(Py_REFCNT(frame_frame_trio$socket) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$socket$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$socket$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$socket->m_frame.f_lineno = 10;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__stdlib_socket, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__t, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__socket_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_trio$socket->m_frame.f_lineno = 16;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain__socket,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__socket);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__socket, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = PySet_New(NULL);
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__bad_symbols, tmp_assign_source_10);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
tmp_ass_subscribed_1 = module_var_accessor_trio$socket$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__bad_symbols;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_trio$socket$_bad_symbols(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__bad_symbols);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame_trio$socket->m_frame.f_lineno = 23;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_add,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_SO_REUSEADDR_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = (PyObject *)moduledict_trio$socket;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_trio$socket$_stdlib_socket(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__stdlib_socket);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto try_except_handler_1;
}
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___all__);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_1;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_12;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 28;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_assign_source_14 = tmp_dictcontraction_1__iter_value_0;
{
    PyObject *old = outline_0_var_name;
    outline_0_var_name = tmp_assign_source_14;
    Py_INCREF(outline_0_var_name);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(outline_0_var_name);
tmp_expression_value_3 = outline_0_var_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_isupper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
frame_frame_trio$socket->m_frame.f_lineno = 31;
tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 31;

    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(outline_0_var_name);
tmp_cmp_expr_left_1 = outline_0_var_name;
tmp_cmp_expr_right_1 = module_var_accessor_trio$socket$_bad_symbols(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__bad_symbols);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_3;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_name);
tmp_dictset38_key_1 = outline_0_var_name;
tmp_expression_value_4 = module_var_accessor_trio$socket$_stdlib_socket(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__stdlib_socket);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto try_except_handler_2;
}
CHECK_OBJECT(outline_0_var_name);
tmp_name_value_3 = outline_0_var_name;
tmp_dictset38_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_3, NULL);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_args_element_value_1 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_args_element_value_1);
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
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 28;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_trio$socket->m_frame.f_lineno = 27;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_4 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_suppress_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_trio$socket->m_frame.f_lineno = 36;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_suppress,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_suppress);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain__suppress, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_5 = mod_consts.const_str_plain__socket;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_4d70f78e5aaf0efb292f92f3d8060dcd_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_trio$socket->m_frame.f_lineno = 39;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_SocketType,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_SocketType);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketType, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_from_stdlib_socket,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_from_stdlib_socket);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_from_stdlib_socket, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_fromfd,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_fromfd);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_fromfd, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_getaddrinfo,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_getaddrinfo);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_getaddrinfo, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_getnameinfo,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_getnameinfo);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_getnameinfo, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_getprotobyname,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_getprotobyname);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_getprotobyname, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_set_custom_hostname_resolver,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_set_custom_hostname_resolver);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_set_custom_hostname_resolver, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_set_custom_socket_factory,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_set_custom_socket_factory);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_set_custom_socket_factory, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_socket,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_socket);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_socketpair,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_socketpair);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_socketpair, tmp_assign_source_26);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_trio$socket$_suppress(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__suppress);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto try_except_handler_4;
}
frame_frame_trio$socket->m_frame.f_lineno = 54;
tmp_assign_source_27 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_type_ImportError_tuple);

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
frame_frame_trio$socket->m_frame.f_lineno = 54;
tmp_assign_source_28 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_assign_source_29 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___exit__);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_29;
}
{
nuitka_bool tmp_assign_source_30;
tmp_assign_source_30 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_30;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_6 = mod_consts.const_str_plain__socket;
tmp_globals_arg_value_5 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_fromshare_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_trio$socket->m_frame.f_lineno = 55;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_fromshare,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_fromshare);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_fromshare, tmp_assign_source_31);
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$socket, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$socket, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_32;
tmp_assign_source_32 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_32;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
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
frame_frame_trio$socket->m_frame.f_lineno = 54;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
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
    exception_lineno = 54;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$socket->m_frame)) {
        frame_frame_trio$socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_7;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 54;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$socket->m_frame)) {
        frame_frame_trio$socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_7;
branch_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
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
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_trio$socket->m_frame.f_lineno = 54;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_6);

exception_lineno = 54;

    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
try_end_4:;
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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_trio$socket->m_frame.f_lineno = 54;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_7 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_6 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_5ff7e399a9401190f71ded1473331efd_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_trio$socket->m_frame.f_lineno = 58;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_gaierror,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_gaierror);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_gaierror, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_gethostname,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_gethostname);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_gethostname, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_herror,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_herror);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_herror, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_htonl,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_htonl);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_htonl, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_htons,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_htons);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_htons, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_19 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_inet_aton,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_inet_aton);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_inet_aton, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_20 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_inet_ntoa,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_inet_ntoa);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_inet_ntoa, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_21 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_inet_ntop,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_inet_ntop);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_inet_ntop, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_22 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_inet_pton,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_inet_pton);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_inet_pton, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_23 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_ntohs,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ntohs);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_ntohs, tmp_assign_source_43);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_implementation);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_cpython;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_8 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_7 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_if_indextoname_str_plain_if_nametoindex_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_trio$socket->m_frame.f_lineno = 72;
tmp_assign_source_44 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_24 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_if_indextoname,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_if_indextoname);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_if_indextoname, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_25 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_if_nametoindex,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_if_nametoindex);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_if_nametoindex, tmp_assign_source_46);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_8;
tmp_called_value_8 = module_var_accessor_trio$socket$_suppress(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__suppress);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto try_except_handler_10;
}
frame_frame_trio$socket->m_frame.f_lineno = 79;
tmp_assign_source_47 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_type_ImportError_tuple);

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_10;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_9 = tmp_with_2__source;
tmp_called_value_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___enter__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_10;
}
frame_frame_trio$socket->m_frame.f_lineno = 79;
tmp_assign_source_48 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_10;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_10 = tmp_with_2__source;
tmp_assign_source_49 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, const_str_plain___exit__);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_10;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_49;
}
{
nuitka_bool tmp_assign_source_50;
tmp_assign_source_50 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_50;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_9 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_8 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_if_nameindex_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_trio$socket->m_frame.f_lineno = 80;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_12;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_if_nameindex,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_if_nameindex);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_if_nameindex, tmp_assign_source_51);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$socket, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$socket, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_10);
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
nuitka_bool tmp_assign_source_52;
tmp_assign_source_52 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_52;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
frame_frame_trio$socket->m_frame.f_lineno = 79;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_13;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_13;
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
    exception_lineno = 79;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$socket->m_frame)) {
        frame_frame_trio$socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_13;
branch_no_8:;
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 79;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$socket->m_frame)) {
        frame_frame_trio$socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_13;
branch_end_7:;
goto try_end_9;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_11;
// End of try:
try_end_9:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_8;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_8:;
goto try_end_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
frame_frame_trio$socket->m_frame.f_lineno = 79;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_12);

exception_lineno = 79;

    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_9:;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_10;
// End of try:
try_end_10:;
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
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_7;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
frame_frame_trio$socket->m_frame.f_lineno = 79;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_10:;
goto try_end_11;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
branch_no_6:;
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_13;
tmp_called_value_13 = module_var_accessor_trio$socket$_suppress(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__suppress);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto try_except_handler_14;
}
frame_frame_trio$socket->m_frame.f_lineno = 87;
tmp_assign_source_53 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_type_ImportError_tuple);

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_14;
}
assert(tmp_with_3__source == NULL);
tmp_with_3__source = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_with_3__source);
tmp_expression_value_11 = tmp_with_3__source;
tmp_called_value_14 = LOOKUP_SPECIAL(tstate, tmp_expression_value_11, const_str_plain___enter__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_14;
}
frame_frame_trio$socket->m_frame.f_lineno = 87;
tmp_assign_source_54 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_14;
}
assert(tmp_with_3__enter == NULL);
tmp_with_3__enter = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_with_3__source);
tmp_expression_value_12 = tmp_with_3__source;
tmp_assign_source_55 = LOOKUP_SPECIAL(tstate, tmp_expression_value_12, const_str_plain___exit__);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_14;
}
assert(tmp_with_3__exit == NULL);
tmp_with_3__exit = tmp_assign_source_55;
}
{
nuitka_bool tmp_assign_source_56;
tmp_assign_source_56 = NUITKA_BOOL_TRUE;
tmp_with_3__indicator = tmp_assign_source_56;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_10 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_9 = (PyObject *)moduledict_trio$socket;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_sethostname_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_trio$socket->m_frame.f_lineno = 88;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_trio$socket,
        mod_consts.const_str_plain_sethostname,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_sethostname);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
UPDATE_STRING_DICT1(moduledict_trio$socket, (Nuitka_StringObject *)mod_consts.const_str_plain_sethostname, tmp_assign_source_57);
}
goto try_end_12;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$socket, exception_keeper_lineno_14);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$socket, exception_keeper_lineno_14);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_14);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
nuitka_bool tmp_assign_source_58;
tmp_assign_source_58 = NUITKA_BOOL_FALSE;
tmp_with_3__indicator = tmp_assign_source_58;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_15 = tmp_with_3__exit;
tmp_args_element_value_8 = EXC_TYPE(tstate);
tmp_args_element_value_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_9); 
tmp_args_element_value_10 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_10 == NULL) {
    tmp_args_element_value_10 = Py_None;
}
frame_frame_trio$socket->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_15, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_17;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_17;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 87;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$socket->m_frame)) {
        frame_frame_trio$socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_17;
branch_no_12:;
goto branch_end_11;
branch_no_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 87;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$socket->m_frame)) {
        frame_frame_trio$socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_17;
branch_end_11:;
goto try_end_13;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_15;
// End of try:
try_end_13:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_12;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_12:;
goto try_end_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_13;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = tmp_with_3__indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_13 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_call_result_8;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_16 = tmp_with_3__exit;
frame_frame_trio$socket->m_frame.f_lineno = 87;
tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_16);

exception_lineno = 87;

    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_13:;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_14;
// End of try:
try_end_14:;
{
bool tmp_condition_result_14;
nuitka_bool tmp_cmp_expr_left_11;
nuitka_bool tmp_cmp_expr_right_11;
assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_11 = tmp_with_3__indicator;
tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
tmp_condition_result_14 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_call_result_9;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_17 = tmp_with_3__exit;
frame_frame_trio$socket->m_frame.f_lineno = 87;
tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_17, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_14:;
goto try_end_15;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_3__source);
tmp_with_3__source = NULL;
Py_XDECREF(tmp_with_3__enter);
tmp_with_3__enter = NULL;
Py_XDECREF(tmp_with_3__exit);
tmp_with_3__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
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
// Tried code:
{
PyObject *tmp_mvar_value_1;
tmp_mvar_value_1 = module_var_accessor_trio$socket$IP_BIND_ADDRESS_NO_PORT(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IP_BIND_ADDRESS_NO_PORT);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto try_except_handler_18;
}
}
goto try_end_16;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_18);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$socket, exception_keeper_lineno_18);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_18, exception_tb);
    } else if (exception_keeper_lineno_18 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$socket, exception_keeper_lineno_18);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_18, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_18);
// Tried code:
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
tmp_cmp_expr_left_12 = EXC_TYPE(tstate);
tmp_cmp_expr_right_12 = PyExc_NameError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
assert(!(tmp_res == -1));
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
    exception_lineno = 95;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$socket->m_frame)) {
        frame_frame_trio$socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_19;
branch_no_15:;
goto try_end_17;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

goto try_end_16;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_16:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$socket->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$socket);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
if (DICT_REMOVE_ITEM((PyObject *)moduledict_trio$socket, mod_consts.const_str_plain_sys) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}


    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$socket", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio.socket" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$socket);
    return module_trio$socket;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$socket, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$socket", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

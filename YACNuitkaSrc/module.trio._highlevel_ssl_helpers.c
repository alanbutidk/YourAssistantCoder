/* Generated code for Python module 'trio$_highlevel_ssl_helpers'
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



/* The "module_trio$_highlevel_ssl_helpers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_highlevel_ssl_helpers;
PyDictObject *moduledict_trio$_highlevel_ssl_helpers;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_5685aeb6b53bb6aad06a275f0d1cd6e8;
PyObject *const_str_plain_trio;
PyObject *const_str_plain_open_tcp_stream;
PyObject *const_str_plain_host;
PyObject *const_str_plain_port;
PyObject *const_str_plain_happy_eyeballs_delay;
PyObject *const_tuple_str_plain_happy_eyeballs_delay_tuple;
PyObject *const_str_plain_ssl_context;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_create_default_context;
PyObject *const_str_plain_OP_IGNORE_UNEXPECTED_EOF;
PyObject *const_str_plain_options;
PyObject *const_str_plain_SSLStream;
PyObject *const_str_plain_https_compatible;
PyObject *const_tuple_str_plain_server_hostname_str_plain_https_compatible_tuple;
PyObject *const_str_plain_open_ssl_over_tcp_stream;
PyObject *const_str_digest_8da75236111375c234f91830208b4a66;
PyObject *const_str_plain_open_tcp_listeners;
PyObject *const_str_plain_backlog;
PyObject *const_tuple_str_plain_host_str_plain_backlog_tuple;
PyObject *const_str_plain_SSLListener;
PyObject *const_tuple_str_plain_https_compatible_tuple;
PyObject *const_str_plain_open_ssl_over_tcp_listeners;
PyObject *const_str_digest_25970ff838ea9a4cadd8470a81575065;
PyObject *const_tuple_str_plain_host_str_plain_https_compatible_str_plain_backlog_tuple;
PyObject *const_str_plain_serve_listeners;
PyObject *const_str_plain_handler;
PyObject *const_str_plain_handler_nursery;
PyObject *const_str_plain_task_status;
PyObject *const_tuple_str_plain_handler_nursery_str_plain_task_status_tuple;
PyObject *const_str_plain_serve_ssl_over_tcp;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_NoReturn;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain__highlevel_open_tcp_stream;
PyObject *const_tuple_str_plain_DEFAULT_DELAY_tuple;
PyObject *const_str_plain_DEFAULT_DELAY;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_dict_a4ee5a1f3bf38e8520af4e14704dedb9;
PyObject *const_dict_cbc7028a5ee6689ba68e1979004c6691;
PyObject *const_dict_45dd93a4911dde82a2e2d22a908db48c;
PyObject *const_str_plain_TASK_STATUS_IGNORED;
PyObject *const_dict_d206c3e25fb023acd6e17446daf51f1e;
PyObject *const_str_digest_86e254a0b8f5d2b24cd3929ed418df72;
PyObject *const_str_digest_a0a55b8c804a685b52de4061dbae3ce0;
PyObject *const_tuple_d00f40fb979360c5e3e2ff79eb037095_tuple;
PyObject *const_tuple_84149dce6e732fcdd3c1c78786fcdefe_tuple;
PyObject *const_tuple_bb4602f5b3fd7f3ade65d952b3ba1304_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._highlevel_ssl_helpers"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_5685aeb6b53bb6aad06a275f0d1cd6e8);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_stream);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_happy_eyeballs_delay);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_happy_eyeballs_delay_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_default_context);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_IGNORE_UNEXPECTED_EOF);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLStream);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_https_compatible);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_hostname_str_plain_https_compatible_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_stream);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_8da75236111375c234f91830208b4a66);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_listeners);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_backlog);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_backlog_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLListener);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_https_compatible_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_listeners);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_25970ff838ea9a4cadd8470a81575065);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_https_compatible_str_plain_backlog_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_serve_listeners);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_handler);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_handler_nursery);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_task_status);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handler_nursery_str_plain_task_status_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_serve_ssl_over_tcp);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_tcp_stream);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_DELAY_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_DELAY);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_a4ee5a1f3bf38e8520af4e14704dedb9);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_cbc7028a5ee6689ba68e1979004c6691);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_dict_45dd93a4911dde82a2e2d22a908db48c);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_d206c3e25fb023acd6e17446daf51f1e);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_86e254a0b8f5d2b24cd3929ed418df72);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0a55b8c804a685b52de4061dbae3ce0);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_d00f40fb979360c5e3e2ff79eb037095_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_84149dce6e732fcdd3c1c78786fcdefe_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_bb4602f5b3fd7f3ade65d952b3ba1304_tuple);
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
void checkModuleConstants_trio$_highlevel_ssl_helpers(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_5685aeb6b53bb6aad06a275f0d1cd6e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5685aeb6b53bb6aad06a275f0d1cd6e8);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_tcp_stream);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_happy_eyeballs_delay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_happy_eyeballs_delay);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_happy_eyeballs_delay_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_happy_eyeballs_delay_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl_context);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_default_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_default_context);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_IGNORE_UNEXPECTED_EOF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OP_IGNORE_UNEXPECTED_EOF);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSLStream);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_https_compatible));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_https_compatible);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_hostname_str_plain_https_compatible_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_server_hostname_str_plain_https_compatible_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_ssl_over_tcp_stream);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_8da75236111375c234f91830208b4a66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8da75236111375c234f91830208b4a66);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_tcp_listeners);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_backlog));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backlog);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_backlog_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_host_str_plain_backlog_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLListener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSLListener);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_https_compatible_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_https_compatible_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_ssl_over_tcp_listeners);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_25970ff838ea9a4cadd8470a81575065));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25970ff838ea9a4cadd8470a81575065);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_https_compatible_str_plain_backlog_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_host_str_plain_https_compatible_str_plain_backlog_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_serve_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serve_listeners);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handler);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_handler_nursery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handler_nursery);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_task_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_task_status);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handler_nursery_str_plain_task_status_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_handler_nursery_str_plain_task_status_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_serve_ssl_over_tcp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serve_ssl_over_tcp);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoReturn);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_tcp_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_open_tcp_stream);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_DELAY_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DEFAULT_DELAY_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_DELAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_DELAY);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_a4ee5a1f3bf38e8520af4e14704dedb9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a4ee5a1f3bf38e8520af4e14704dedb9);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_cbc7028a5ee6689ba68e1979004c6691));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cbc7028a5ee6689ba68e1979004c6691);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_dict_45dd93a4911dde82a2e2d22a908db48c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_45dd93a4911dde82a2e2d22a908db48c);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TASK_STATUS_IGNORED);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_d206c3e25fb023acd6e17446daf51f1e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d206c3e25fb023acd6e17446daf51f1e);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_86e254a0b8f5d2b24cd3929ed418df72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86e254a0b8f5d2b24cd3929ed418df72);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0a55b8c804a685b52de4061dbae3ce0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0a55b8c804a685b52de4061dbae3ce0);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_d00f40fb979360c5e3e2ff79eb037095_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d00f40fb979360c5e3e2ff79eb037095_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_84149dce6e732fcdd3c1c78786fcdefe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_84149dce6e732fcdd3c1c78786fcdefe_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_bb4602f5b3fd7f3ade65d952b3ba1304_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bb4602f5b3fd7f3ade65d952b3ba1304_tuple);
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
static PyObject *module_var_accessor_trio$_highlevel_ssl_helpers$DEFAULT_DELAY(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_ssl_helpers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_ssl_helpers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_DELAY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_ssl_helpers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_DELAY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_DELAY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_DELAY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_DELAY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_DELAY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_DELAY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_DELAY);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_ssl_helpers$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_ssl_helpers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_ssl_helpers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_ssl_helpers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_ssl_helpers$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_ssl_helpers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_ssl_helpers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_ssl_helpers->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_ssl_helpers$ssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_ssl_helpers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_ssl_helpers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_ssl_helpers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ssl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ssl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ssl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ssl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_ssl_helpers$trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_ssl_helpers->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_ssl_helpers->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_ssl_helpers->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_86ce0452bffc4d6987a67306086ff316;
static PyCodeObject *code_objects_951f9bc38001a908dac15e5b975e8302;
static PyCodeObject *code_objects_e591b150f5f89ebe2eff0b9909bf108f;
static PyCodeObject *code_objects_f66222a2c191f149668e32df9b96caf4;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_86e254a0b8f5d2b24cd3929ed418df72); CHECK_OBJECT(module_filename_obj);
code_objects_86ce0452bffc4d6987a67306086ff316 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a0a55b8c804a685b52de4061dbae3ce0, mod_consts.const_str_digest_a0a55b8c804a685b52de4061dbae3ce0, NULL, NULL, 0, 0, 0);
code_objects_951f9bc38001a908dac15e5b975e8302 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_ssl_over_tcp_listeners, mod_consts.const_str_plain_open_ssl_over_tcp_listeners, mod_consts.const_tuple_d00f40fb979360c5e3e2ff79eb037095_tuple, NULL, 2, 3, 0);
code_objects_e591b150f5f89ebe2eff0b9909bf108f = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_ssl_over_tcp_stream, mod_consts.const_str_plain_open_ssl_over_tcp_stream, mod_consts.const_tuple_84149dce6e732fcdd3c1c78786fcdefe_tuple, NULL, 2, 3, 0);
code_objects_f66222a2c191f149668e32df9b96caf4 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_serve_ssl_over_tcp, mod_consts.const_str_plain_serve_ssl_over_tcp, mod_consts.const_tuple_bb4602f5b3fd7f3ade65d952b3ba1304_tuple, NULL, 3, 5, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_port = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_https_compatible = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_ssl_context = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_happy_eyeballs_delay = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_happy_eyeballs_delay;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_host;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_https_compatible;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_port;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_ssl_context;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_host);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
par_host = NULL;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
CHECK_OBJECT(par_https_compatible);
CHECK_OBJECT(par_https_compatible);
Py_DECREF(par_https_compatible);
par_https_compatible = NULL;
CHECK_OBJECT(par_ssl_context);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
par_ssl_context = NULL;
CHECK_OBJECT(par_happy_eyeballs_delay);
CHECK_OBJECT(par_happy_eyeballs_delay);
Py_DECREF(par_happy_eyeballs_delay);
par_happy_eyeballs_delay = NULL;
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
struct trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream_locals {
PyObject *var_tcp_stream;
PyObject *tmp_inplace_assign_1__value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream_locals *coroutine_heap = (struct trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_tcp_stream = NULL;
coroutine_heap->tmp_inplace_assign_1__value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e591b150f5f89ebe2eff0b9909bf108f, module_trio$_highlevel_ssl_helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
coroutine->m_frame->m_frame.f_lineno = 61;
tmp_expression_value_3 = module_var_accessor_trio$_highlevel_ssl_helpers$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_open_tcp_stream);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_port);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_happy_eyeballs_delay);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 64;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 61;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_happy_eyeballs_delay_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_tcp_stream == NULL);
coroutine_heap->var_tcp_stream = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ssl_context);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 66;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_trio$_highlevel_ssl_helpers$ssl(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 67;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_create_default_context);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[4]);
    Nuitka_Cell_SET(coroutine->m_closure[4], tmp_assign_source_2);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_trio$_highlevel_ssl_helpers$ssl(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 69;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain_OP_IGNORE_UNEXPECTED_EOF);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 69;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[4]));
tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_options);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 70;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->tmp_inplace_assign_1__value == NULL);
coroutine_heap->tmp_inplace_assign_1__value = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_ibitand_expr_left_1;
PyObject *tmp_ibitand_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
tmp_ibitand_expr_left_1 = coroutine_heap->tmp_inplace_assign_1__value;
tmp_expression_value_6 = module_var_accessor_trio$_highlevel_ssl_helpers$ssl(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 70;
coroutine_heap->type_description_1 = "ccccco";
    goto try_except_handler_2;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_OP_IGNORE_UNEXPECTED_EOF);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 70;
coroutine_heap->type_description_1 = "ccccco";
    goto try_except_handler_2;
}
tmp_ibitand_expr_right_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_ibitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 70;
coroutine_heap->type_description_1 = "ccccco";
    goto try_except_handler_2;
}
coroutine_heap->tmp_result = INPLACE_OPERATION_BITAND_OBJECT_OBJECT(&tmp_ibitand_expr_left_1, tmp_ibitand_expr_right_1);
CHECK_OBJECT(tmp_ibitand_expr_right_1);
Py_DECREF(tmp_ibitand_expr_right_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 70;
coroutine_heap->type_description_1 = "ccccco";
    goto try_except_handler_2;
}
tmp_assign_source_4 = tmp_ibitand_expr_left_1;
coroutine_heap->tmp_inplace_assign_1__value = tmp_assign_source_4;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
tmp_assattr_value_1 = coroutine_heap->tmp_inplace_assign_1__value;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[4]));
tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_options, tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 70;
coroutine_heap->type_description_1 = "ccccco";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
Py_DECREF(coroutine_heap->tmp_inplace_assign_1__value);
coroutine_heap->tmp_inplace_assign_1__value = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
Py_DECREF(coroutine_heap->tmp_inplace_assign_1__value);
coroutine_heap->tmp_inplace_assign_1__value = NULL;
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_7 = module_var_accessor_trio$_highlevel_ssl_helpers$trio(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_SSLStream);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_tcp_stream);
tmp_kw_call_arg_value_0_2 = coroutine_heap->var_tcp_stream;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ssl_context);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 74;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 75;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_https_compatible);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 76;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 72;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_server_hostname_str_plain_https_compatible_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "ccccco";
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
    coroutine->m_closure[3],
    coroutine->m_closure[2],
    coroutine->m_closure[4],
    coroutine->m_closure[0],
    coroutine_heap->var_tcp_stream
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
CHECK_OBJECT(coroutine_heap->var_tcp_stream);
CHECK_OBJECT(coroutine_heap->var_tcp_stream);
Py_DECREF(coroutine_heap->var_tcp_stream);
coroutine_heap->var_tcp_stream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_tcp_stream);
coroutine_heap->var_tcp_stream = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

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

static PyObject *MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream_context,
        module_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_plain_open_ssl_over_tcp_stream,
        NULL,
        code_objects_e591b150f5f89ebe2eff0b9909bf108f,
        closure,
        5,
#if 1
        sizeof(struct trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream$$$coroutine__1_open_ssl_over_tcp_stream_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_port = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_ssl_context = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_https_compatible = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_backlog = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_backlog;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_host;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_https_compatible;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_port;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_ssl_context;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
CHECK_OBJECT(par_ssl_context);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
par_ssl_context = NULL;
CHECK_OBJECT(par_host);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
par_host = NULL;
CHECK_OBJECT(par_https_compatible);
CHECK_OBJECT(par_https_compatible);
Py_DECREF(par_https_compatible);
par_https_compatible = NULL;
CHECK_OBJECT(par_backlog);
CHECK_OBJECT(par_backlog);
Py_DECREF(par_backlog);
par_backlog = NULL;
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
struct trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners_locals {
PyObject *var_tcp_listeners;
PyObject *var_ssl_listeners;
PyObject *outline_0_var_tcp_listener;
PyObject *tmp_listcomp_1__$0;
PyObject *tmp_listcomp_1__contraction;
PyObject *tmp_listcomp_1__iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
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

static PyObject *trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners_locals *coroutine_heap = (struct trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_tcp_listeners = NULL;
coroutine_heap->var_ssl_listeners = NULL;
coroutine_heap->outline_0_var_tcp_listener = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_951f9bc38001a908dac15e5b975e8302, module_trio$_highlevel_ssl_helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 100;
tmp_expression_value_3 = module_var_accessor_trio$_highlevel_ssl_helpers$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_open_tcp_listeners);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_port);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_backlog);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 100;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_host_str_plain_backlog_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_tcp_listeners == NULL);
coroutine_heap->var_tcp_listeners = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(coroutine_heap->var_tcp_listeners);
tmp_iter_arg_1 = coroutine_heap->var_tcp_listeners;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 103;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_listcomp_1__$0 == NULL);
coroutine_heap->tmp_listcomp_1__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(coroutine_heap->tmp_listcomp_1__contraction == NULL);
coroutine_heap->tmp_listcomp_1__contraction = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
tmp_next_source_1 = coroutine_heap->tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccoo";
coroutine_heap->exception_lineno = 101;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = coroutine_heap->tmp_listcomp_1__iter_value_0;
    coroutine_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__iter_value_0);
tmp_assign_source_6 = coroutine_heap->tmp_listcomp_1__iter_value_0;
{
    PyObject *old = coroutine_heap->outline_0_var_tcp_listener;
    coroutine_heap->outline_0_var_tcp_listener = tmp_assign_source_6;
    Py_INCREF(coroutine_heap->outline_0_var_tcp_listener);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_2;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
tmp_append_list_1 = coroutine_heap->tmp_listcomp_1__contraction;
tmp_expression_value_4 = module_var_accessor_trio$_highlevel_ssl_helpers$trio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SSLListener);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_3;
}
CHECK_OBJECT(coroutine_heap->outline_0_var_tcp_listener);
tmp_kw_call_arg_value_0_2 = coroutine_heap->outline_0_var_tcp_listener;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ssl_context);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_3;
}

tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_https_compatible);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 102;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_https_compatible_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_3;
}
coroutine_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "cccccoo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
tmp_assign_source_2 = coroutine_heap->tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_2);
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
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
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
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(coroutine_heap->outline_0_var_tcp_listener);
coroutine_heap->outline_0_var_tcp_listener = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->outline_0_var_tcp_listener);
coroutine_heap->outline_0_var_tcp_listener = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
coroutine_heap->exception_lineno = 101;
goto frame_exception_exit_1;
outline_result_1:;
assert(coroutine_heap->var_ssl_listeners == NULL);
coroutine_heap->var_ssl_listeners = tmp_assign_source_2;
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
    coroutine->m_closure[3],
    coroutine->m_closure[4],
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine_heap->var_tcp_listeners,
    coroutine_heap->var_ssl_listeners
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
CHECK_OBJECT(coroutine_heap->var_ssl_listeners);
coroutine_heap->tmp_return_value = coroutine_heap->var_ssl_listeners;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_tcp_listeners);
CHECK_OBJECT(coroutine_heap->var_tcp_listeners);
Py_DECREF(coroutine_heap->var_tcp_listeners);
coroutine_heap->var_tcp_listeners = NULL;
CHECK_OBJECT(coroutine_heap->var_ssl_listeners);
CHECK_OBJECT(coroutine_heap->var_ssl_listeners);
Py_DECREF(coroutine_heap->var_ssl_listeners);
coroutine_heap->var_ssl_listeners = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_tcp_listeners);
coroutine_heap->var_tcp_listeners = NULL;
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners_context,
        module_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_plain_open_ssl_over_tcp_listeners,
        NULL,
        code_objects_951f9bc38001a908dac15e5b975e8302,
        closure,
        5,
#if 1
        sizeof(struct trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners$$$coroutine__1_open_ssl_over_tcp_listeners_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_port = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_ssl_context = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_https_compatible = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_backlog = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_handler_nursery = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_task_status = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_backlog;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_handler;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_handler_nursery;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_host;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_https_compatible;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_port;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_ssl_context;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_task_status;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_handler);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
par_handler = NULL;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
CHECK_OBJECT(par_ssl_context);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
par_ssl_context = NULL;
CHECK_OBJECT(par_host);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
par_host = NULL;
CHECK_OBJECT(par_https_compatible);
CHECK_OBJECT(par_https_compatible);
Py_DECREF(par_https_compatible);
par_https_compatible = NULL;
CHECK_OBJECT(par_backlog);
CHECK_OBJECT(par_backlog);
Py_DECREF(par_backlog);
par_backlog = NULL;
CHECK_OBJECT(par_handler_nursery);
CHECK_OBJECT(par_handler_nursery);
Py_DECREF(par_handler_nursery);
par_handler_nursery = NULL;
CHECK_OBJECT(par_task_status);
CHECK_OBJECT(par_task_status);
Py_DECREF(par_task_status);
par_task_status = NULL;
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
struct trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp_locals {
PyObject *var_listeners;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp_locals *coroutine_heap = (struct trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_listeners = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f66222a2c191f149668e32df9b96caf4, module_trio$_highlevel_ssl_helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
coroutine->m_frame->m_frame.f_lineno = 168;
tmp_expression_value_3 = module_var_accessor_trio$_highlevel_ssl_helpers$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 168;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_open_ssl_over_tcp_listeners);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 168;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_port);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 169;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ssl_context);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 171;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_https_compatible);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_backlog);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 168;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_host_str_plain_https_compatible_str_plain_backlog_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 168;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 168;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 168;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_listeners == NULL);
coroutine_heap->var_listeners = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 175;
tmp_expression_value_6 = module_var_accessor_trio$_highlevel_ssl_helpers$trio(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_serve_listeners);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 176;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
CHECK_OBJECT(coroutine_heap->var_listeners);
tmp_kw_call_arg_value_1_2 = coroutine_heap->var_listeners;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler_nursery);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_task_status);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 175;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_handler_nursery_str_plain_task_status_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_arg_value_1_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_arg_value_1_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 175;
coroutine_heap->type_description_1 = "cccccccco";
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
    coroutine->m_closure[1],
    coroutine->m_closure[5],
    coroutine->m_closure[6],
    coroutine->m_closure[3],
    coroutine->m_closure[4],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine->m_closure[7],
    coroutine_heap->var_listeners
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
CHECK_OBJECT(coroutine_heap->var_listeners);
CHECK_OBJECT(coroutine_heap->var_listeners);
Py_DECREF(coroutine_heap->var_listeners);
coroutine_heap->var_listeners = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_listeners);
coroutine_heap->var_listeners = NULL;
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp_context,
        module_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_plain_serve_ssl_over_tcp,
        NULL,
        code_objects_f66222a2c191f149668e32df9b96caf4,
        closure,
        8,
#if 1
        sizeof(struct trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp$$$coroutine__1_serve_ssl_over_tcp_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream,
        mod_consts.const_str_plain_open_ssl_over_tcp_stream,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e591b150f5f89ebe2eff0b9909bf108f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_digest_5685aeb6b53bb6aad06a275f0d1cd6e8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners,
        mod_consts.const_str_plain_open_ssl_over_tcp_listeners,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_951f9bc38001a908dac15e5b975e8302,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_digest_8da75236111375c234f91830208b4a66,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp,
        mod_consts.const_str_plain_serve_ssl_over_tcp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f66222a2c191f149668e32df9b96caf4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_digest_25970ff838ea9a4cadd8470a81575065,
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

static function_impl_code const function_table_trio$_highlevel_ssl_helpers[] = {
impl_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream,
impl_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners,
impl_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_highlevel_ssl_helpers);
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
        module_trio$_highlevel_ssl_helpers,
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
        function_table_trio$_highlevel_ssl_helpers,
        sizeof(function_table_trio$_highlevel_ssl_helpers) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._highlevel_ssl_helpers";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_highlevel_ssl_helpers(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_highlevel_ssl_helpers");

    // Store the module for future use.
    module_trio$_highlevel_ssl_helpers = module;

    moduledict_trio$_highlevel_ssl_helpers = MODULE_DICT(module_trio$_highlevel_ssl_helpers);

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
        PRINT_STRING("trio$_highlevel_ssl_helpers: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_highlevel_ssl_helpers: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_highlevel_ssl_helpers: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._highlevel_ssl_helpers" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_highlevel_ssl_helpers\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_highlevel_ssl_helpers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_highlevel_ssl_helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_highlevel_ssl_helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_highlevel_ssl_helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_highlevel_ssl_helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_highlevel_ssl_helpers);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_highlevel_ssl_helpers);
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

        UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_ssl_helpers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_highlevel_ssl_helpers = MAKE_MODULE_FRAME(code_objects_86ce0452bffc4d6987a67306086ff316, module_trio$_highlevel_ssl_helpers);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_ssl_helpers);
assert(Py_REFCNT(frame_frame_trio$_highlevel_ssl_helpers) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_highlevel_ssl_helpers$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_highlevel_ssl_helpers$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_highlevel_ssl_helpers;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_highlevel_ssl_helpers->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_plain_NoReturn,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_NoReturn);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_highlevel_ssl_helpers;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_trio$_highlevel_ssl_helpers->m_frame.f_lineno = 6;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_trio, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__highlevel_open_tcp_stream;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$_highlevel_ssl_helpers;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_DEFAULT_DELAY_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_trio$_highlevel_ssl_helpers->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$_highlevel_ssl_helpers,
        mod_consts.const_str_plain_DEFAULT_DELAY,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_DEFAULT_DELAY);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_DELAY, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_trio$_highlevel_ssl_helpers$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
frame_frame_trio$_highlevel_ssl_helpers->m_frame.f_lineno = 10;
tmp_assign_source_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_T_tuple);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_1;
tmp_dict_key_1 = mod_consts.const_str_plain_https_compatible;
tmp_dict_value_1 = Py_False;
tmp_kw_defaults_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ssl_context;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_happy_eyeballs_delay;
tmp_dict_value_1 = module_var_accessor_trio$_highlevel_ssl_helpers$DEFAULT_DELAY(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_DELAY);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a4ee5a1f3bf38e8520af4e14704dedb9);

tmp_assign_source_13 = MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__1_open_ssl_over_tcp_stream(tstate, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_open_ssl_over_tcp_stream, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_2;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_cbc7028a5ee6689ba68e1979004c6691);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_45dd93a4911dde82a2e2d22a908db48c);

tmp_assign_source_14 = MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__2_open_ssl_over_tcp_listeners(tstate, tmp_kw_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_open_ssl_over_tcp_listeners, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_3;
tmp_dict_key_2 = mod_consts.const_str_plain_host;
tmp_dict_value_2 = Py_None;
tmp_kw_defaults_3 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_1;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_https_compatible;
tmp_dict_value_2 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_backlog;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_handler_nursery;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_task_status;
tmp_expression_value_1 = module_var_accessor_trio$_highlevel_ssl_helpers$trio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TASK_STATUS_IGNORED);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_d206c3e25fb023acd6e17446daf51f1e);

tmp_assign_source_15 = MAKE_FUNCTION_trio$_highlevel_ssl_helpers$$$function__3_serve_ssl_over_tcp(tstate, tmp_kw_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)mod_consts.const_str_plain_serve_ssl_over_tcp, tmp_assign_source_15);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_ssl_helpers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_ssl_helpers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_ssl_helpers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_highlevel_ssl_helpers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_highlevel_ssl_helpers", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._highlevel_ssl_helpers" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_highlevel_ssl_helpers);
    return module_trio$_highlevel_ssl_helpers;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_ssl_helpers, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_highlevel_ssl_helpers", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
